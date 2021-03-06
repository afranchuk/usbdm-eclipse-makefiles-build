/*
 *  Vectors-mk.c
 *
 *  Generic vectors and security for Kinetis
 *
 *  Created on: 07/12/2012
 *      Author: podonoghue
 */
#include <stdint.h>
#include <string.h>
#include "derivative.h"

#define $(targetDeviceSubFamily)

/*
 * Security information
 */
typedef struct {
    uint8_t  backdoorKey[8];
    uint32_t fprot;
    uint8_t  fsec;
    uint8_t  fopt;
    uint8_t  feprot;
    uint8_t  fdprot;
} SecurityInfo;

__attribute__ ((section(".security_information")))
const SecurityInfo securityInfo = {
    /* backdoor */ {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    /* fprot    */ 0xFFFFFFFF,
    /* fsec     */ 0xFE,
    /* fopt     */ 0xFF,
    /* feprot   */ 0xFF,
    /* fdprot   */ 0xFF,
};


#ifdef NV_FOPT_BOOTPIN_OPT_MASK
/*
 * Security information
 */
typedef struct {
    char     magic[4];           // Magic number indicating valid configuration - 'kcfg'
    uint8_t  reserved[12];       // Reserved
    uint8_t  enabledPeripherals; // 0:LPUART, 1:I2C, 2:SPI, 4:USB
    uint8_t  i2cAddress;         // If not 0xFF, used as the 7-bit I2C slave address.
    uint16_t peripheralTimeout;  // Timeout in milliseconds for active peripheral detection
    uint16_t usbVid;             // Sets the USB Vendor ID reported by the device during enumeration.
    uint16_t usbPid;             // Sets the USB Product ID reported by the device during enumeration.
    uint32_t usbStringsPointer;  // Sets the USB Strings reported by the device during enumeration.
    uint8_t  clockFlags;         // See Table 13-4, clockFlags Configuration Field
    uint8_t  clockDivider;       // Divider to use for core and bus clocks when in high speed mode
} BootloaderConfiguration;

__attribute__ ((section(".bootloader_configuration")))
const BootloaderConfiguration bootloaderConfiguration = {
    /* magic               */ "kcfg",
    /* reserved            */ {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF },
    /* enabledPeripherals  */ 0xFF, /* all peripherals */
    /* i2cAddress          */ 0x11,
    /* peripheralTimeout   */ 1000, /* ms */
    /* usbVid              */ 0,
    /* usbPid              */ 0,
    /* usbStringsPointer   */ 0,
    /* clockFlags          */ 0,
    /* clockDivider        */ 0,    /* 0 => high-speed 48MHz */
};
#endif

/*
 * Vector table related
 */
typedef void( *const intfunc )( void );

#define WEAK_DEFAULT_HANDLER __attribute__ ((__weak__, alias("Default_Handler")))

#ifndef SCB_ICSR
#define SCB_ICSR (*(volatile uint32_t*)(0xE000ED04))
#endif

/**
 * Default handler for interrupts
 *
 * Most of the vector table is initialised to point at this handler.
 *
 * If you end up here it probably means:
 *   - You have accidently enabled an interrupt source in a peripheral
 *   - Enabled the wrong interrupt source
 *   - Failed to install or create a handler for an interrupt you intended using e.g. mis-spelled the name.
 *     Compare your handler (C function) name to that used in the vector table.
 *
 * You can check 'vectorNum' below to determine the interrupt source.  Look this up in the vector table below.
 */
__attribute__((__interrupt__))
void Default_Handler(void) {

   __attribute__((unused))
   volatile uint32_t vectorNum = (SCB_ICSR&SCB_ICSR_VECTACTIVE_Msk)>>SCB_ICSR_VECTACTIVE_Pos;

   while (1) {
      __BKPT(0);
   }
}

typedef struct {
   unsigned int r0;
   unsigned int r1;
   unsigned int r2;
   unsigned int r3;
   unsigned int r12;
   void       (*lr)();
   void       (*pc)();
   unsigned int psr;
} ExceptionFrame;

/*  Low-level exception handler
 *
 *  Interface from asm to C.
 *  Passes address of exception handler to C-level handler
 *
 *  See http://www.freertos.org/Debugging-Hard-Faults-On-Cortex-M-Microcontrollers.html
 */
__attribute__((__naked__, __weak__, __interrupt__))
void HardFault_Handler(void) {
   /*
    * Determines the active stack pointer and loads it into r0
    * This is used as the 1st argument to _HardFault_Handler(volatile ExceptionFrame *exceptionFrame)
    * and allows access to the saved processor state.
    * Other registers are unchanged and available in the usual register view
    */
     __asm__ volatile ( "  tst   lr, #4              \n");  // Check mode
     __asm__ volatile ( "  ite   eq                  \n");  // Get active SP in r0
     __asm__ volatile ( "  mrseq r0, msp             \n");
     __asm__ volatile ( "  mrsne r0, psp             \n");
     __asm__ volatile ( "  b     _HardFault_Handler  \n");  // Go to C handler
}

/******************************************************************************/
/* Hard fault handler in C with stack frame location as input parameter
 *
 * Assumed exception frame without floating-point storage
 *
 * @param exceptionFrame address of exception frame
 *
 * If you end up here you have probably done one of the following:
 *   - Accessed illegal/unimplemented memory e.g. gone off the end of an array
 *   - Accessed a disabled peripheral - Check you have enabled the clock
 *   - Accessed unaligned memory - unlikely I guess
 *
 */
__attribute__((__naked__))
void _HardFault_Handler(volatile ExceptionFrame *exceptionFrame __attribute__((__unused__))) {
   while (1) {
      // Stop here for debugger
      __BKPT(0);
   }
}

void __HardReset(void) __attribute__((__interrupt__));
extern uint32_t __StackTop;

/*
 * Each vector is assigned an unique name.  This is then 'weakly' assigned to the
 * default handler.
 * To install a handler, create a function with the name shown and it will override
 * the weak default.
 */
$(cVectorTable)

