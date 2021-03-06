/****************************************************************************************************//**
 * @file     MK22F51212.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for MK22F51212.
 *           Equivalent: FRDM-K22F, MK22FN512M12, MK22FN256M12
 *
 * @version  V0.0
 * @date     2015/01
 *
 *******************************************************************************************************/

#ifndef MCU_MK22F51212
#define MCU_MK22F51212

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* ------------------------  Processor Exceptions Numbers  ------------------------- */
  Reset_IRQn                    = -15,   /*!<   1 Reset Vector, invoked on Power up and warm reset                                 */
  NonMaskableInt_IRQn           = -14,   /*!<   2 Non maskable Interrupt, cannot be stopped or preempted                           */
  HardFault_IRQn                = -13,   /*!<   3 Hard Fault, all classes of Fault                                                 */
  MemoryManagement_IRQn         = -12,   /*!<   4 Memory Management, MPU mismatch, including Access Violation and No Match         */
  BusFault_IRQn                 = -11,   /*!<   5 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault   */
  UsageFault_IRQn               = -10,   /*!<   6 Usage Fault, i.e. Undef Instruction, Illegal State Transition                    */
  SVCall_IRQn                   =  -5,   /*!<  11 System Service Call via SVC instruction                                          */
  DebugMonitor_IRQn             =  -4,   /*!<  12 Debug Monitor                                                                    */
  PendSV_IRQn                   =  -2,   /*!<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /*!<  15 System Tick Timer                                                                */
/* ----------------------   MK64D10 VectorTable                      ---------------------- */
  DMA0_IRQn                     =   0,   /*!<  16 DMA channel 0 transfer complete interrupt                                        */
  DMA1_IRQn                     =   1,   /*!<  17 DMA channel 1 transfer complete interrupt                                        */
  DMA2_IRQn                     =   2,   /*!<  18 DMA channel 2 transfer complete interrupt                                        */
  DMA3_IRQn                     =   3,   /*!<  19 DMA channel 3 transfer complete interrupt                                        */
  DMA4_IRQn                     =   4,   /*!<  20 DMA channel 4 transfer complete interrupt                                        */
  DMA5_IRQn                     =   5,   /*!<  21 DMA channel 5 transfer complete interrupt                                        */
  DMA6_IRQn                     =   6,   /*!<  22 DMA channel 6 transfer complete interrupt                                        */
  DMA7_IRQn                     =   7,   /*!<  23 DMA channel 7 transfer complete interrupt                                        */
  DMA8_IRQn                     =   8,   /*!<  24 DMA channel 8 transfer complete interrupt                                        */
  DMA9_IRQn                     =   9,   /*!<  25 DMA channel 9 transfer complete interrupt                                        */
  DMA10_IRQn                    =  10,   /*!<  26 DMA channel 10 transfer complete interrupt                                       */
  DMA11_IRQn                    =  11,   /*!<  27 DMA channel 11 transfer complete interrupt                                       */
  DMA12_IRQn                    =  12,   /*!<  28 DMA channel 12 transfer complete interrupt                                       */
  DMA13_IRQn                    =  13,   /*!<  29 DMA channel 13 transfer complete interrupt                                       */
  DMA14_IRQn                    =  14,   /*!<  30 DMA channel 14 transfer complete interrupt                                       */
  DMA15_IRQn                    =  15,   /*!<  31 DMA channel 15 transfer complete interrupt                                       */
  DMA_Error_IRQn                =  16,   /*!<  32 DMA error interrupt all channels                                                 */
  MCM_IRQn                      =  17,   /*!<  33 Normal Interrupt                                                                 */
  FTFA_Command_IRQn             =  18,   /*!<  34 FTFA interrupt                                                                   */
  FTFA_Collision_IRQn           =  19,   /*!<  35 FTFA Read collision interrupt                                                    */
  PMC_IRQn                      =  20,   /*!<  36 PMC Low Voltage Detect, Low Voltage Warning                                      */
  LLWU_IRQn                     =  21,   /*!<  37 LLWU Low Leakage Wakeup                                                          */
  WDOG_IRQn                     =  22,   /*!<  38 WDOG interrupt                                                                   */
  RNG_IRQn                      =  23,   /*!<  39 WDOG interrupt                                                                   */
  I2C0_IRQn                     =  24,   /*!<  40 I2C0 interrupt                                                                   */
  I2C1_IRQn                     =  25,   /*!<  41 I2C1 interrupt                                                                   */
  SPI0_IRQn                     =  26,   /*!<  42 SPI0 interrupt                                                                   */
  SPI1_IRQn                     =  27,   /*!<  43 SPI1 interrupt                                                                   */
  I2S0_Tx_IRQn                  =  28,   /*!<  44 I2S0 Tx Interrupt                                                                */
  I2S0_Rx_IRQn                  =  29,   /*!<  45 I2S0 Rx Interrupt                                                                */
  LPUART0_RxTx_IRQn             =  30,   /*!<  46 UART status sources                                                              */
  UART0_RxTx_IRQn               =  31,   /*!<  47 UART status sources                                                              */
  UART0_Error_IRQn              =  32,   /*!<  48 UART error sources                                                               */
  UART1_RxTx_IRQn               =  33,   /*!<  49 UART status sources                                                              */
  UART1_Error_IRQn              =  34,   /*!<  50 UART error sources                                                               */
  UART2_RxTx_IRQn               =  35,   /*!<  51 UART status sources                                                              */
  UART2_Error_IRQn              =  36,   /*!<  52 UART error sources                                                               */
  ADC0_IRQn                     =  39,   /*!<  55 ADC0 interrupt                                                                   */
  CMP0_IRQn                     =  40,   /*!<  56 CMP0 interrupt                                                                   */
  CMP1_IRQn                     =  41,   /*!<  57 CMP1 interrupt                                                                   */
  FTM0_IRQn                     =  42,   /*!<  58 FTM0 fault, overflow and channels interrupt                                      */
  FTM1_IRQn                     =  43,   /*!<  59 FTM1 fault, overflow and channels interrupt                                      */
  FTM2_IRQn                     =  44,   /*!<  60 FTM2 fault, overflow and channels interrupt                                      */
  RTC_Alarm_IRQn                =  46,   /*!<  62 RTC interrupt                                                                    */
  RTC_Seconds_IRQn              =  47,   /*!<  63 RTC interrupt                                                                    */
  PIT_Ch0_IRQn                  =  48,   /*!<  64 PIT timer channel 0 interrupt                                                    */
  PIT_Ch1_IRQn                  =  49,   /*!<  65 PIT timer channel 1 interrupt                                                    */
  PIT_Ch2_IRQn                  =  50,   /*!<  66 PIT timer channel 2 interrupt                                                    */
  PIT_Ch3_IRQn                  =  51,   /*!<  67 PIT timer channel 3 interrupt                                                    */
  PDB_IRQn                      =  52,   /*!<  68 PDB Programmable Delay Block interrupt                                           */
  USBOTG_IRQn                   =  53,   /*!<  69 USB0 OTG interrupt                                                               */
  DAC0_IRQn                     =  56,   /*!<  72 Digital to Analogue Converter                                                    */
  MCG_IRQn                      =  57,   /*!<  73 Multipurpose Clock Generator                                                     */
  LPTMR0_IRQn                   =  58,   /*!<  74 LPTMR Low Power Timer interrupt                                                  */
  PORTA_IRQn                    =  59,   /*!<  75 Port A interrupt                                                                 */
  PORTB_IRQn                    =  60,   /*!<  76 Port B interrupt                                                                 */
  PORTC_IRQn                    =  61,   /*!<  77 Port C interrupt                                                                 */
  PORTD_IRQn                    =  62,   /*!<  78 Port D interrupt                                                                 */
  PORTE_IRQn                    =  63,   /*!<  79 Port E interrupt                                                                 */
  SWI_IRQn                      =  64,   /*!<  80 Software interrupt                                                               */
  FTM3_IRQn                     =  71,   /*!<  87 FTM3 interrupt                                                                   */
  DAC1_IRQn                     =  72,   /*!<  88 Digital to Analogue Converter                                                    */
  ADC1_IRQn                     =  73,   /*!<  89 ADC0 interrupt                                                                   */
} IRQn_Type;

/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);
extern void HardFault_Handler(void);
extern void MemManage_Handler(void);
extern void BusFault_Handler(void);
extern void UsageFault_Handler(void);
extern void SVC_Handler(void);
extern void DebugMon_Handler(void);
extern void PendSV_Handler(void);
extern void SysTick_Handler(void);
extern void DMA0_IRQHandler(void);
extern void DMA1_IRQHandler(void);
extern void DMA2_IRQHandler(void);
extern void DMA3_IRQHandler(void);
extern void DMA4_IRQHandler(void);
extern void DMA5_IRQHandler(void);
extern void DMA6_IRQHandler(void);
extern void DMA7_IRQHandler(void);
extern void DMA8_IRQHandler(void);
extern void DMA9_IRQHandler(void);
extern void DMA10_IRQHandler(void);
extern void DMA11_IRQHandler(void);
extern void DMA12_IRQHandler(void);
extern void DMA13_IRQHandler(void);
extern void DMA14_IRQHandler(void);
extern void DMA15_IRQHandler(void);
extern void DMA_Error_IRQHandler(void);
extern void MCM_IRQHandler(void);
extern void FTFA_Command_IRQHandler(void);
extern void FTFA_Collision_IRQHandler(void);
extern void PMC_IRQHandler(void);
extern void LLWU_IRQHandler(void);
extern void WDOG_IRQHandler(void);
extern void RNG_IRQHandler(void);
extern void I2C0_IRQHandler(void);
extern void I2C1_IRQHandler(void);
extern void SPI0_IRQHandler(void);
extern void SPI1_IRQHandler(void);
extern void I2S0_Tx_IRQHandler(void);
extern void I2S0_Rx_IRQHandler(void);
extern void LPUART0_RxTx_IRQHandler(void);
extern void UART0_RxTx_IRQHandler(void);
extern void UART0_Error_IRQHandler(void);
extern void UART1_RxTx_IRQHandler(void);
extern void UART1_Error_IRQHandler(void);
extern void UART2_RxTx_IRQHandler(void);
extern void UART2_Error_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void CMP0_IRQHandler(void);
extern void CMP1_IRQHandler(void);
extern void FTM0_IRQHandler(void);
extern void FTM1_IRQHandler(void);
extern void FTM2_IRQHandler(void);
extern void RTC_Alarm_IRQHandler(void);
extern void RTC_Seconds_IRQHandler(void);
extern void PIT_Ch0_IRQHandler(void);
extern void PIT_Ch1_IRQHandler(void);
extern void PIT_Ch2_IRQHandler(void);
extern void PIT_Ch3_IRQHandler(void);
extern void PDB_IRQHandler(void);
extern void USBOTG_IRQHandler(void);
extern void DAC0_IRQHandler(void);
extern void MCG_IRQHandler(void);
extern void LPTMR0_IRQHandler(void);
extern void PORTA_IRQHandler(void);
extern void PORTB_IRQHandler(void);
extern void PORTC_IRQHandler(void);
extern void PORTD_IRQHandler(void);
extern void PORTE_IRQHandler(void);
extern void SWI_IRQHandler(void);
extern void FTM3_IRQHandler(void);
extern void DAC1_IRQHandler(void);
extern void ADC1_IRQHandler(void);

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the cm4 Processor and Core Peripherals---------------- */
#define __CM4_REV                0x0100
#define __MPU_PRESENT            0
#define __NVIC_PRIO_BITS         4
#define __Vendor_SysTickConfig   0
#define __FPU_PRESENT            1

#include "core_cm4.h"           /*!< Processor and core peripherals */
#include "system.h"             /*!< Device specific configuration file */

#ifndef __IO
#define __IO volatile 
#endif

#ifndef __I
#define __I volatile const
#endif

#ifndef __O
#define __O volatile
#endif


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */



/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================           ADC0 (file:ADC0_MKD5_MKLZ4)          ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */
typedef struct {                                /*!<       ADC0 Structure                                               */
   __IO uint32_t  SC1A;                         /*!< 0000: Status and Control Register 1                                */
   __IO uint32_t  SC1B;                         /*!< 0004: Status and Control Register 1                                */
   __IO uint32_t  CFG1;                         /*!< 0008: Configuration Register 1                                     */
   __IO uint32_t  CFG2;                         /*!< 000C: Configuration Register 2                                     */
   __I  uint32_t  RA;                           /*!< 0010: Data Result Register                                         */
   __I  uint32_t  RB;                           /*!< 0014: Data Result Register                                         */
   __IO uint32_t  CV1;                          /*!< 0018: Compare Value                                                */
   __IO uint32_t  CV2;                          /*!< 001C: Compare Value                                                */
   __IO uint32_t  SC2;                          /*!< 0020: Status and Control Register 2                                */
   __IO uint32_t  SC3;                          /*!< 0024: Status and Control Register 3                                */
   __IO uint32_t  OFS;                          /*!< 0028: Offset Correction Register                                   */
   __IO uint32_t  PG;                           /*!< 002C: Plus-Side Gain Register                                      */
   __IO uint32_t  MG;                           /*!< 0030: Minus-Side Gain Register                                     */
   __IO uint32_t  CLPD;                         /*!< 0034: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLPS;                         /*!< 0038: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP4;                         /*!< 003C: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP3;                         /*!< 0040: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP2;                         /*!< 0044: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP1;                         /*!< 0048: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP0;                         /*!< 004C: Plus-Side General Calibration Value                          */
   __I  uint32_t  RESERVED0;                    /*!< 0050:                                                              */
   __IO uint32_t  CLMD;                         /*!< 0054: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLMS;                         /*!< 0058: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM4;                         /*!< 005C: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM3;                         /*!< 0060: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM2;                         /*!< 0064: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM1;                         /*!< 0068: Minus-Side General Calibration Value                         */
   __IO uint32_t  CLM0;                         /*!< 006C: Minus-Side General Calibration Value                         */
} ADC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC1 Bit Fields                           ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FUL << ADC_SC1_ADCH_SHIFT)                      /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       0                                                   /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_ADCH_SHIFT))&ADC_SC1_ADCH_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_DIFF_MASK                        (0x01UL << ADC_SC1_DIFF_SHIFT)                      /*!< ADC0_SC1: DIFF Mask                     */
#define ADC_SC1_DIFF_SHIFT                       5                                                   /*!< ADC0_SC1: DIFF Position                 */
#define ADC_SC1_AIEN_MASK                        (0x01UL << ADC_SC1_AIEN_SHIFT)                      /*!< ADC0_SC1: AIEN Mask                     */
#define ADC_SC1_AIEN_SHIFT                       6                                                   /*!< ADC0_SC1: AIEN Position                 */
#define ADC_SC1_COCO_MASK                        (0x01UL << ADC_SC1_COCO_SHIFT)                      /*!< ADC0_SC1: COCO Mask                     */
#define ADC_SC1_COCO_SHIFT                       7                                                   /*!< ADC0_SC1: COCO Position                 */
/* ------- CFG1 Bit Fields                          ------ */
#define ADC_CFG1_ADICLK_MASK                     (0x03UL << ADC_CFG1_ADICLK_SHIFT)                   /*!< ADC0_CFG1: ADICLK Mask                  */
#define ADC_CFG1_ADICLK_SHIFT                    0                                                   /*!< ADC0_CFG1: ADICLK Position              */
#define ADC_CFG1_ADICLK(x)                       (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_ADICLK_SHIFT))&ADC_CFG1_ADICLK_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_MODE_MASK                       (0x03UL << ADC_CFG1_MODE_SHIFT)                     /*!< ADC0_CFG1: MODE Mask                    */
#define ADC_CFG1_MODE_SHIFT                      2                                                   /*!< ADC0_CFG1: MODE Position                */
#define ADC_CFG1_MODE(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_MODE_SHIFT))&ADC_CFG1_MODE_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLSMP_MASK                     (0x01UL << ADC_CFG1_ADLSMP_SHIFT)                   /*!< ADC0_CFG1: ADLSMP Mask                  */
#define ADC_CFG1_ADLSMP_SHIFT                    4                                                   /*!< ADC0_CFG1: ADLSMP Position              */
#define ADC_CFG1_ADIV_MASK                       (0x03UL << ADC_CFG1_ADIV_SHIFT)                     /*!< ADC0_CFG1: ADIV Mask                    */
#define ADC_CFG1_ADIV_SHIFT                      5                                                   /*!< ADC0_CFG1: ADIV Position                */
#define ADC_CFG1_ADIV(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CFG1_ADIV_SHIFT))&ADC_CFG1_ADIV_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLPC_MASK                      (0x01UL << ADC_CFG1_ADLPC_SHIFT)                    /*!< ADC0_CFG1: ADLPC Mask                   */
#define ADC_CFG1_ADLPC_SHIFT                     7                                                   /*!< ADC0_CFG1: ADLPC Position               */
/* ------- CFG2 Bit Fields                          ------ */
#define ADC_CFG2_ADLSTS_MASK                     (0x03UL << ADC_CFG2_ADLSTS_SHIFT)                   /*!< ADC0_CFG2: ADLSTS Mask                  */
#define ADC_CFG2_ADLSTS_SHIFT                    0                                                   /*!< ADC0_CFG2: ADLSTS Position              */
#define ADC_CFG2_ADLSTS(x)                       (((uint32_t)(((uint32_t)(x))<<ADC_CFG2_ADLSTS_SHIFT))&ADC_CFG2_ADLSTS_MASK) /*!< ADC0_CFG2                               */
#define ADC_CFG2_ADHSC_MASK                      (0x01UL << ADC_CFG2_ADHSC_SHIFT)                    /*!< ADC0_CFG2: ADHSC Mask                   */
#define ADC_CFG2_ADHSC_SHIFT                     2                                                   /*!< ADC0_CFG2: ADHSC Position               */
#define ADC_CFG2_ADACKEN_MASK                    (0x01UL << ADC_CFG2_ADACKEN_SHIFT)                  /*!< ADC0_CFG2: ADACKEN Mask                 */
#define ADC_CFG2_ADACKEN_SHIFT                   3                                                   /*!< ADC0_CFG2: ADACKEN Position             */
#define ADC_CFG2_MUXSEL_MASK                     (0x01UL << ADC_CFG2_MUXSEL_SHIFT)                   /*!< ADC0_CFG2: MUXSEL Mask                  */
#define ADC_CFG2_MUXSEL_SHIFT                    4                                                   /*!< ADC0_CFG2: MUXSEL Position              */
/* ------- R Bit Fields                             ------ */
#define ADC_R_D_MASK                             (0xFFFFUL << ADC_R_D_SHIFT)                         /*!< ADC0_R: D Mask                          */
#define ADC_R_D_SHIFT                            0                                                   /*!< ADC0_R: D Position                      */
#define ADC_R_D(x)                               (((uint32_t)(((uint32_t)(x))<<ADC_R_D_SHIFT))&ADC_R_D_MASK) /*!< ADC0_R                                  */
/* ------- CV Bit Fields                            ------ */
#define ADC_CV_CV_MASK                           (0xFFFFUL << ADC_CV_CV_SHIFT)                       /*!< ADC0_CV: CV Mask                        */
#define ADC_CV_CV_SHIFT                          0                                                   /*!< ADC0_CV: CV Position                    */
#define ADC_CV_CV(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_CV_CV_SHIFT))&ADC_CV_CV_MASK) /*!< ADC0_CV                                 */
/* ------- SC2 Bit Fields                           ------ */
#define ADC_SC2_REFSEL_MASK                      (0x03UL << ADC_SC2_REFSEL_SHIFT)                    /*!< ADC0_SC2: REFSEL Mask                   */
#define ADC_SC2_REFSEL_SHIFT                     0                                                   /*!< ADC0_SC2: REFSEL Position               */
#define ADC_SC2_REFSEL(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC2_REFSEL_SHIFT))&ADC_SC2_REFSEL_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_DMAEN_MASK                       (0x01UL << ADC_SC2_DMAEN_SHIFT)                     /*!< ADC0_SC2: DMAEN Mask                    */
#define ADC_SC2_DMAEN_SHIFT                      2                                                   /*!< ADC0_SC2: DMAEN Position                */
#define ADC_SC2_ACREN_MASK                       (0x01UL << ADC_SC2_ACREN_SHIFT)                     /*!< ADC0_SC2: ACREN Mask                    */
#define ADC_SC2_ACREN_SHIFT                      3                                                   /*!< ADC0_SC2: ACREN Position                */
#define ADC_SC2_ACFGT_MASK                       (0x01UL << ADC_SC2_ACFGT_SHIFT)                     /*!< ADC0_SC2: ACFGT Mask                    */
#define ADC_SC2_ACFGT_SHIFT                      4                                                   /*!< ADC0_SC2: ACFGT Position                */
#define ADC_SC2_ACFE_MASK                        (0x01UL << ADC_SC2_ACFE_SHIFT)                      /*!< ADC0_SC2: ACFE Mask                     */
#define ADC_SC2_ACFE_SHIFT                       5                                                   /*!< ADC0_SC2: ACFE Position                 */
#define ADC_SC2_ADTRG_MASK                       (0x01UL << ADC_SC2_ADTRG_SHIFT)                     /*!< ADC0_SC2: ADTRG Mask                    */
#define ADC_SC2_ADTRG_SHIFT                      6                                                   /*!< ADC0_SC2: ADTRG Position                */
#define ADC_SC2_ADACT_MASK                       (0x01UL << ADC_SC2_ADACT_SHIFT)                     /*!< ADC0_SC2: ADACT Mask                    */
#define ADC_SC2_ADACT_SHIFT                      7                                                   /*!< ADC0_SC2: ADACT Position                */
/* ------- SC3 Bit Fields                           ------ */
#define ADC_SC3_AVGS_MASK                        (0x03UL << ADC_SC3_AVGS_SHIFT)                      /*!< ADC0_SC3: AVGS Mask                     */
#define ADC_SC3_AVGS_SHIFT                       0                                                   /*!< ADC0_SC3: AVGS Position                 */
#define ADC_SC3_AVGS(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_AVGS_SHIFT))&ADC_SC3_AVGS_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_AVGE_MASK                        (0x01UL << ADC_SC3_AVGE_SHIFT)                      /*!< ADC0_SC3: AVGE Mask                     */
#define ADC_SC3_AVGE_SHIFT                       2                                                   /*!< ADC0_SC3: AVGE Position                 */
#define ADC_SC3_ADCO_MASK                        (0x01UL << ADC_SC3_ADCO_SHIFT)                      /*!< ADC0_SC3: ADCO Mask                     */
#define ADC_SC3_ADCO_SHIFT                       3                                                   /*!< ADC0_SC3: ADCO Position                 */
#define ADC_SC3_CALF_MASK                        (0x01UL << ADC_SC3_CALF_SHIFT)                      /*!< ADC0_SC3: CALF Mask                     */
#define ADC_SC3_CALF_SHIFT                       6                                                   /*!< ADC0_SC3: CALF Position                 */
#define ADC_SC3_CAL_MASK                         (0x01UL << ADC_SC3_CAL_SHIFT)                       /*!< ADC0_SC3: CAL Mask                      */
#define ADC_SC3_CAL_SHIFT                        7                                                   /*!< ADC0_SC3: CAL Position                  */
/* ------- OFS Bit Fields                           ------ */
#define ADC_OFS_OFS_MASK                         (0xFFFFUL << ADC_OFS_OFS_SHIFT)                     /*!< ADC0_OFS: OFS Mask                      */
#define ADC_OFS_OFS_SHIFT                        0                                                   /*!< ADC0_OFS: OFS Position                  */
#define ADC_OFS_OFS(x)                           (((uint32_t)(((uint32_t)(x))<<ADC_OFS_OFS_SHIFT))&ADC_OFS_OFS_MASK) /*!< ADC0_OFS                                */
/* ------- PG Bit Fields                            ------ */
#define ADC_PG_PG_MASK                           (0xFFFFUL << ADC_PG_PG_SHIFT)                       /*!< ADC0_PG: PG Mask                        */
#define ADC_PG_PG_SHIFT                          0                                                   /*!< ADC0_PG: PG Position                    */
#define ADC_PG_PG(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_PG_PG_SHIFT))&ADC_PG_PG_MASK) /*!< ADC0_PG                                 */
/* ------- MG Bit Fields                            ------ */
#define ADC_MG_MG_MASK                           (0xFFFFUL << ADC_MG_MG_SHIFT)                       /*!< ADC0_MG: MG Mask                        */
#define ADC_MG_MG_SHIFT                          0                                                   /*!< ADC0_MG: MG Position                    */
#define ADC_MG_MG(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_MG_MG_SHIFT))&ADC_MG_MG_MASK) /*!< ADC0_MG                                 */
/* ------- CLPD Bit Fields                          ------ */
#define ADC_CLPD_CLPD_MASK                       (0x3FUL << ADC_CLPD_CLPD_SHIFT)                     /*!< ADC0_CLPD: CLPD Mask                    */
#define ADC_CLPD_CLPD_SHIFT                      0                                                   /*!< ADC0_CLPD: CLPD Position                */
#define ADC_CLPD_CLPD(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLPD_CLPD_SHIFT))&ADC_CLPD_CLPD_MASK) /*!< ADC0_CLPD                               */
/* ------- CLPS Bit Fields                          ------ */
#define ADC_CLPS_CLPS_MASK                       (0x3FUL << ADC_CLPS_CLPS_SHIFT)                     /*!< ADC0_CLPS: CLPS Mask                    */
#define ADC_CLPS_CLPS_SHIFT                      0                                                   /*!< ADC0_CLPS: CLPS Position                */
#define ADC_CLPS_CLPS(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLPS_CLPS_SHIFT))&ADC_CLPS_CLPS_MASK) /*!< ADC0_CLPS                               */
/* ------- CLP4 Bit Fields                          ------ */
#define ADC_CLP4_CLP4_MASK                       (0x3FFUL << ADC_CLP4_CLP4_SHIFT)                    /*!< ADC0_CLP4: CLP4 Mask                    */
#define ADC_CLP4_CLP4_SHIFT                      0                                                   /*!< ADC0_CLP4: CLP4 Position                */
#define ADC_CLP4_CLP4(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP4_CLP4_SHIFT))&ADC_CLP4_CLP4_MASK) /*!< ADC0_CLP4                               */
/* ------- CLP3 Bit Fields                          ------ */
#define ADC_CLP3_CLP3_MASK                       (0x1FFUL << ADC_CLP3_CLP3_SHIFT)                    /*!< ADC0_CLP3: CLP3 Mask                    */
#define ADC_CLP3_CLP3_SHIFT                      0                                                   /*!< ADC0_CLP3: CLP3 Position                */
#define ADC_CLP3_CLP3(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP3_CLP3_SHIFT))&ADC_CLP3_CLP3_MASK) /*!< ADC0_CLP3                               */
/* ------- CLP2 Bit Fields                          ------ */
#define ADC_CLP2_CLP2_MASK                       (0xFFUL << ADC_CLP2_CLP2_SHIFT)                     /*!< ADC0_CLP2: CLP2 Mask                    */
#define ADC_CLP2_CLP2_SHIFT                      0                                                   /*!< ADC0_CLP2: CLP2 Position                */
#define ADC_CLP2_CLP2(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP2_CLP2_SHIFT))&ADC_CLP2_CLP2_MASK) /*!< ADC0_CLP2                               */
/* ------- CLP1 Bit Fields                          ------ */
#define ADC_CLP1_CLP1_MASK                       (0x7FUL << ADC_CLP1_CLP1_SHIFT)                     /*!< ADC0_CLP1: CLP1 Mask                    */
#define ADC_CLP1_CLP1_SHIFT                      0                                                   /*!< ADC0_CLP1: CLP1 Position                */
#define ADC_CLP1_CLP1(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP1_CLP1_SHIFT))&ADC_CLP1_CLP1_MASK) /*!< ADC0_CLP1                               */
/* ------- CLP0 Bit Fields                          ------ */
#define ADC_CLP0_CLP0_MASK                       (0x3FUL << ADC_CLP0_CLP0_SHIFT)                     /*!< ADC0_CLP0: CLP0 Mask                    */
#define ADC_CLP0_CLP0_SHIFT                      0                                                   /*!< ADC0_CLP0: CLP0 Position                */
#define ADC_CLP0_CLP0(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLP0_CLP0_SHIFT))&ADC_CLP0_CLP0_MASK) /*!< ADC0_CLP0                               */
/* ------- CLMD Bit Fields                          ------ */
#define ADC_CLMD_CLMD_MASK                       (0x3FUL << ADC_CLMD_CLMD_SHIFT)                     /*!< ADC0_CLMD: CLMD Mask                    */
#define ADC_CLMD_CLMD_SHIFT                      0                                                   /*!< ADC0_CLMD: CLMD Position                */
#define ADC_CLMD_CLMD(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLMD_CLMD_SHIFT))&ADC_CLMD_CLMD_MASK) /*!< ADC0_CLMD                               */
/* ------- CLMS Bit Fields                          ------ */
#define ADC_CLMS_CLMS_MASK                       (0x3FUL << ADC_CLMS_CLMS_SHIFT)                     /*!< ADC0_CLMS: CLMS Mask                    */
#define ADC_CLMS_CLMS_SHIFT                      0                                                   /*!< ADC0_CLMS: CLMS Position                */
#define ADC_CLMS_CLMS(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLMS_CLMS_SHIFT))&ADC_CLMS_CLMS_MASK) /*!< ADC0_CLMS                               */
/* ------- CLM4 Bit Fields                          ------ */
#define ADC_CLM4_CLM4_MASK                       (0x3FFUL << ADC_CLM4_CLM4_SHIFT)                    /*!< ADC0_CLM4: CLM4 Mask                    */
#define ADC_CLM4_CLM4_SHIFT                      0                                                   /*!< ADC0_CLM4: CLM4 Position                */
#define ADC_CLM4_CLM4(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLM4_CLM4_SHIFT))&ADC_CLM4_CLM4_MASK) /*!< ADC0_CLM4                               */
/* ------- CLM3 Bit Fields                          ------ */
#define ADC_CLM3_CLM3_MASK                       (0x1FFUL << ADC_CLM3_CLM3_SHIFT)                    /*!< ADC0_CLM3: CLM3 Mask                    */
#define ADC_CLM3_CLM3_SHIFT                      0                                                   /*!< ADC0_CLM3: CLM3 Position                */
#define ADC_CLM3_CLM3(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLM3_CLM3_SHIFT))&ADC_CLM3_CLM3_MASK) /*!< ADC0_CLM3                               */
/* ------- CLM2 Bit Fields                          ------ */
#define ADC_CLM2_CLM2_MASK                       (0xFFUL << ADC_CLM2_CLM2_SHIFT)                     /*!< ADC0_CLM2: CLM2 Mask                    */
#define ADC_CLM2_CLM2_SHIFT                      0                                                   /*!< ADC0_CLM2: CLM2 Position                */
#define ADC_CLM2_CLM2(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLM2_CLM2_SHIFT))&ADC_CLM2_CLM2_MASK) /*!< ADC0_CLM2                               */
/* ------- CLM1 Bit Fields                          ------ */
#define ADC_CLM1_CLM1_MASK                       (0x7FUL << ADC_CLM1_CLM1_SHIFT)                     /*!< ADC0_CLM1: CLM1 Mask                    */
#define ADC_CLM1_CLM1_SHIFT                      0                                                   /*!< ADC0_CLM1: CLM1 Position                */
#define ADC_CLM1_CLM1(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLM1_CLM1_SHIFT))&ADC_CLM1_CLM1_MASK) /*!< ADC0_CLM1                               */
/* ------- CLM0 Bit Fields                          ------ */
#define ADC_CLM0_CLM0_MASK                       (0x3FUL << ADC_CLM0_CLM0_SHIFT)                     /*!< ADC0_CLM0: CLM0 Mask                    */
#define ADC_CLM0_CLM0_SHIFT                      0                                                   /*!< ADC0_CLM0: CLM0 Position                */
#define ADC_CLM0_CLM0(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_CLM0_CLM0_SHIFT))&ADC_CLM0_CLM0_MASK) /*!< ADC0_CLM0                               */

/* ADC0 - Peripheral instance base addresses */
#define ADC0_BasePtr                   0x4003B000UL
#define ADC0                           ((ADC_Type *) ADC0_BasePtr)
#define ADC0_BASE_PTR                  (ADC0)

/* ================================================================================ */
/* ================           ADC1 (derived from ADC0)             ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */

/* ADC1 - Peripheral instance base addresses */
#define ADC1_BasePtr                   0x40027000UL
#define ADC1                           ((ADC_Type *) ADC1_BasePtr)
#define ADC1_BASE_PTR                  (ADC1)

/* ================================================================================ */
/* ================           CMP0 (file:CMP0_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Comparator, Voltage Ref, D-to-A Converter and Analog Mux
 */
typedef struct {                                /*!<       CMP0 Structure                                               */
   __IO uint8_t   CR0;                          /*!< 0000: CMP Control Register 0                                       */
   __IO uint8_t   CR1;                          /*!< 0001: CMP Control Register 1                                       */
   __IO uint8_t   FPR;                          /*!< 0002: CMP Filter Period Register                                   */
   __IO uint8_t   SCR;                          /*!< 0003: CMP Status and Control Register                              */
   __IO uint8_t   DACCR;                        /*!< 0004: DAC Control Register                                         */
   __IO uint8_t   MUXCR;                        /*!< 0005: MUX Control Register                                         */
} CMP_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CR0 Bit Fields                           ------ */
#define CMP_CR0_HYSTCTR_MASK                     (0x03UL << CMP_CR0_HYSTCTR_SHIFT)                   /*!< CMP0_CR0: HYSTCTR Mask                  */
#define CMP_CR0_HYSTCTR_SHIFT                    0                                                   /*!< CMP0_CR0: HYSTCTR Position              */
#define CMP_CR0_HYSTCTR(x)                       (((uint8_t)(((uint8_t)(x))<<CMP_CR0_HYSTCTR_SHIFT))&CMP_CR0_HYSTCTR_MASK) /*!< CMP0_CR0                                */
#define CMP_CR0_FILTER_CNT_MASK                  (0x07UL << CMP_CR0_FILTER_CNT_SHIFT)                /*!< CMP0_CR0: FILTER_CNT Mask               */
#define CMP_CR0_FILTER_CNT_SHIFT                 4                                                   /*!< CMP0_CR0: FILTER_CNT Position           */
#define CMP_CR0_FILTER_CNT(x)                    (((uint8_t)(((uint8_t)(x))<<CMP_CR0_FILTER_CNT_SHIFT))&CMP_CR0_FILTER_CNT_MASK) /*!< CMP0_CR0                                */
/* ------- CR1 Bit Fields                           ------ */
#define CMP_CR1_EN_MASK                          (0x01UL << CMP_CR1_EN_SHIFT)                        /*!< CMP0_CR1: EN Mask                       */
#define CMP_CR1_EN_SHIFT                         0                                                   /*!< CMP0_CR1: EN Position                   */
#define CMP_CR1_OPE_MASK                         (0x01UL << CMP_CR1_OPE_SHIFT)                       /*!< CMP0_CR1: OPE Mask                      */
#define CMP_CR1_OPE_SHIFT                        1                                                   /*!< CMP0_CR1: OPE Position                  */
#define CMP_CR1_COS_MASK                         (0x01UL << CMP_CR1_COS_SHIFT)                       /*!< CMP0_CR1: COS Mask                      */
#define CMP_CR1_COS_SHIFT                        2                                                   /*!< CMP0_CR1: COS Position                  */
#define CMP_CR1_INV_MASK                         (0x01UL << CMP_CR1_INV_SHIFT)                       /*!< CMP0_CR1: INV Mask                      */
#define CMP_CR1_INV_SHIFT                        3                                                   /*!< CMP0_CR1: INV Position                  */
#define CMP_CR1_PMODE_MASK                       (0x01UL << CMP_CR1_PMODE_SHIFT)                     /*!< CMP0_CR1: PMODE Mask                    */
#define CMP_CR1_PMODE_SHIFT                      4                                                   /*!< CMP0_CR1: PMODE Position                */
#define CMP_CR1_WE_MASK                          (0x01UL << CMP_CR1_WE_SHIFT)                        /*!< CMP0_CR1: WE Mask                       */
#define CMP_CR1_WE_SHIFT                         6                                                   /*!< CMP0_CR1: WE Position                   */
#define CMP_CR1_SE_MASK                          (0x01UL << CMP_CR1_SE_SHIFT)                        /*!< CMP0_CR1: SE Mask                       */
#define CMP_CR1_SE_SHIFT                         7                                                   /*!< CMP0_CR1: SE Position                   */
/* ------- FPR Bit Fields                           ------ */
#define CMP_FPR_FILT_PER_MASK                    (0xFFUL << CMP_FPR_FILT_PER_SHIFT)                  /*!< CMP0_FPR: FILT_PER Mask                 */
#define CMP_FPR_FILT_PER_SHIFT                   0                                                   /*!< CMP0_FPR: FILT_PER Position             */
#define CMP_FPR_FILT_PER(x)                      (((uint8_t)(((uint8_t)(x))<<CMP_FPR_FILT_PER_SHIFT))&CMP_FPR_FILT_PER_MASK) /*!< CMP0_FPR                                */
/* ------- SCR Bit Fields                           ------ */
#define CMP_SCR_COUT_MASK                        (0x01UL << CMP_SCR_COUT_SHIFT)                      /*!< CMP0_SCR: COUT Mask                     */
#define CMP_SCR_COUT_SHIFT                       0                                                   /*!< CMP0_SCR: COUT Position                 */
#define CMP_SCR_CFF_MASK                         (0x01UL << CMP_SCR_CFF_SHIFT)                       /*!< CMP0_SCR: CFF Mask                      */
#define CMP_SCR_CFF_SHIFT                        1                                                   /*!< CMP0_SCR: CFF Position                  */
#define CMP_SCR_CFR_MASK                         (0x01UL << CMP_SCR_CFR_SHIFT)                       /*!< CMP0_SCR: CFR Mask                      */
#define CMP_SCR_CFR_SHIFT                        2                                                   /*!< CMP0_SCR: CFR Position                  */
#define CMP_SCR_IEF_MASK                         (0x01UL << CMP_SCR_IEF_SHIFT)                       /*!< CMP0_SCR: IEF Mask                      */
#define CMP_SCR_IEF_SHIFT                        3                                                   /*!< CMP0_SCR: IEF Position                  */
#define CMP_SCR_IER_MASK                         (0x01UL << CMP_SCR_IER_SHIFT)                       /*!< CMP0_SCR: IER Mask                      */
#define CMP_SCR_IER_SHIFT                        4                                                   /*!< CMP0_SCR: IER Position                  */
#define CMP_SCR_DMAEN_MASK                       (0x01UL << CMP_SCR_DMAEN_SHIFT)                     /*!< CMP0_SCR: DMAEN Mask                    */
#define CMP_SCR_DMAEN_SHIFT                      6                                                   /*!< CMP0_SCR: DMAEN Position                */
/* ------- DACCR Bit Fields                         ------ */
#define CMP_DACCR_VOSEL_MASK                     (0x3FUL << CMP_DACCR_VOSEL_SHIFT)                   /*!< CMP0_DACCR: VOSEL Mask                  */
#define CMP_DACCR_VOSEL_SHIFT                    0                                                   /*!< CMP0_DACCR: VOSEL Position              */
#define CMP_DACCR_VOSEL(x)                       (((uint8_t)(((uint8_t)(x))<<CMP_DACCR_VOSEL_SHIFT))&CMP_DACCR_VOSEL_MASK) /*!< CMP0_DACCR                              */
#define CMP_DACCR_VRSEL_MASK                     (0x01UL << CMP_DACCR_VRSEL_SHIFT)                   /*!< CMP0_DACCR: VRSEL Mask                  */
#define CMP_DACCR_VRSEL_SHIFT                    6                                                   /*!< CMP0_DACCR: VRSEL Position              */
#define CMP_DACCR_DACEN_MASK                     (0x01UL << CMP_DACCR_DACEN_SHIFT)                   /*!< CMP0_DACCR: DACEN Mask                  */
#define CMP_DACCR_DACEN_SHIFT                    7                                                   /*!< CMP0_DACCR: DACEN Position              */
/* ------- MUXCR Bit Fields                         ------ */
#define CMP_MUXCR_MSEL_MASK                      (0x07UL << CMP_MUXCR_MSEL_SHIFT)                    /*!< CMP0_MUXCR: MSEL Mask                   */
#define CMP_MUXCR_MSEL_SHIFT                     0                                                   /*!< CMP0_MUXCR: MSEL Position               */
#define CMP_MUXCR_MSEL(x)                        (((uint8_t)(((uint8_t)(x))<<CMP_MUXCR_MSEL_SHIFT))&CMP_MUXCR_MSEL_MASK) /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSEL_MASK                      (0x07UL << CMP_MUXCR_PSEL_SHIFT)                    /*!< CMP0_MUXCR: PSEL Mask                   */
#define CMP_MUXCR_PSEL_SHIFT                     3                                                   /*!< CMP0_MUXCR: PSEL Position               */
#define CMP_MUXCR_PSEL(x)                        (((uint8_t)(((uint8_t)(x))<<CMP_MUXCR_PSEL_SHIFT))&CMP_MUXCR_PSEL_MASK) /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSTM_MASK                      (0x01UL << CMP_MUXCR_PSTM_SHIFT)                    /*!< CMP0_MUXCR: PSTM Mask                   */
#define CMP_MUXCR_PSTM_SHIFT                     7                                                   /*!< CMP0_MUXCR: PSTM Position               */

/* CMP0 - Peripheral instance base addresses */
#define CMP0_BasePtr                   0x40073000UL
#define CMP0                           ((CMP_Type *) CMP0_BasePtr)
#define CMP0_BASE_PTR                  (CMP0)

/* ================================================================================ */
/* ================           CMP1 (derived from CMP0)             ================ */
/* ================================================================================ */

/**
 * @brief Comparator, Voltage Ref, D-to-A Converter and Analog Mux
 */

/* CMP1 - Peripheral instance base addresses */
#define CMP1_BasePtr                   0x40073008UL
#define CMP1                           ((CMP_Type *) CMP1_BasePtr)
#define CMP1_BASE_PTR                  (CMP1)

/* ================================================================================ */
/* ================           CRC (file:CRC)                       ================ */
/* ================================================================================ */

/**
 * @brief Cyclic Redundancy Check
 */
typedef struct {                                /*!<       CRC Structure                                                */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  DATA;                      /*!< 0000: Data register                                                */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAL;               /*!< 0000: DATAL register                                               */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   DATALL;           /*!< 0000: DATALL register                                              */
               __IO uint8_t   DATALU;           /*!< 0001: DATALU register                                              */
            };
         };
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  DATAH;               /*!< 0002: DATAH register                                               */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   DATAHL;           /*!< 0002: DATAHL register                                              */
               __IO uint8_t   DATAHU;           /*!< 0003: DATAHU register                                              */
            };
         };
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  GPOLY;                     /*!< 0004: Polynomial register                                          */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYL;              /*!< 0004: GPOLYL register                                              */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYLL;          /*!< 0004: GPOLYLL register                                             */
               __IO uint8_t   GPOLYLU;          /*!< 0005: GPOLYLU register                                             */
            };
         };
         union {                                /*!< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYH;              /*!< 0006: GPOLYH register                                              */
            struct {                            /*!< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYHL;          /*!< 0006: GPOLYHL register                                             */
               __IO uint8_t   GPOLYHU;          /*!< 0007: GPOLYHU register                                             */
            };
         };
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  CTRL;                      /*!< 0008: Control register                                             */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __I  uint8_t   RESERVED0[3];           /*!< 0008:                                                              */
         __IO uint8_t   CTRLHU;                 /*!< 000B: Control register (byte access)                               */
      };
   };
} CRC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CRC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- DATA Bit Fields                          ------ */
#define CRC_DATA_LL_MASK                         (0xFFUL << CRC_DATA_LL_SHIFT)                       /*!< CRC_DATA: LL Mask                       */
#define CRC_DATA_LL_SHIFT                        0                                                   /*!< CRC_DATA: LL Position                   */
#define CRC_DATA_LL(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_LL_SHIFT))&CRC_DATA_LL_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_LU_MASK                         (0xFFUL << CRC_DATA_LU_SHIFT)                       /*!< CRC_DATA: LU Mask                       */
#define CRC_DATA_LU_SHIFT                        8                                                   /*!< CRC_DATA: LU Position                   */
#define CRC_DATA_LU(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_LU_SHIFT))&CRC_DATA_LU_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_HL_MASK                         (0xFFUL << CRC_DATA_HL_SHIFT)                       /*!< CRC_DATA: HL Mask                       */
#define CRC_DATA_HL_SHIFT                        16                                                  /*!< CRC_DATA: HL Position                   */
#define CRC_DATA_HL(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_HL_SHIFT))&CRC_DATA_HL_MASK) /*!< CRC_DATA                                */
#define CRC_DATA_HU_MASK                         (0xFFUL << CRC_DATA_HU_SHIFT)                       /*!< CRC_DATA: HU Mask                       */
#define CRC_DATA_HU_SHIFT                        24                                                  /*!< CRC_DATA: HU Position                   */
#define CRC_DATA_HU(x)                           (((uint32_t)(((uint32_t)(x))<<CRC_DATA_HU_SHIFT))&CRC_DATA_HU_MASK) /*!< CRC_DATA                                */
/* ------- DATAL Bit Fields                         ------ */
#define CRC_DATAL_DATAL_MASK                     (0xFFFFUL << CRC_DATAL_DATAL_SHIFT)                 /*!< CRC_DATAL: DATAL Mask                   */
#define CRC_DATAL_DATAL_SHIFT                    0                                                   /*!< CRC_DATAL: DATAL Position               */
#define CRC_DATAL_DATAL(x)                       (((uint16_t)(((uint16_t)(x))<<CRC_DATAL_DATAL_SHIFT))&CRC_DATAL_DATAL_MASK) /*!< CRC_DATAL                               */
/* ------- DATALL Bit Fields                        ------ */
#define CRC_DATALL_DATALL_MASK                   (0xFFUL << CRC_DATALL_DATALL_SHIFT)                 /*!< CRC_DATALL: DATALL Mask                 */
#define CRC_DATALL_DATALL_SHIFT                  0                                                   /*!< CRC_DATALL: DATALL Position             */
#define CRC_DATALL_DATALL(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATALL_DATALL_SHIFT))&CRC_DATALL_DATALL_MASK) /*!< CRC_DATALL                              */
/* ------- DATALU Bit Fields                        ------ */
#define CRC_DATALU_DATALU_MASK                   (0xFFUL << CRC_DATALU_DATALU_SHIFT)                 /*!< CRC_DATALU: DATALU Mask                 */
#define CRC_DATALU_DATALU_SHIFT                  0                                                   /*!< CRC_DATALU: DATALU Position             */
#define CRC_DATALU_DATALU(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATALU_DATALU_SHIFT))&CRC_DATALU_DATALU_MASK) /*!< CRC_DATALU                              */
/* ------- DATAH Bit Fields                         ------ */
#define CRC_DATAH_DATAH_MASK                     (0xFFFFUL << CRC_DATAH_DATAH_SHIFT)                 /*!< CRC_DATAH: DATAH Mask                   */
#define CRC_DATAH_DATAH_SHIFT                    0                                                   /*!< CRC_DATAH: DATAH Position               */
#define CRC_DATAH_DATAH(x)                       (((uint16_t)(((uint16_t)(x))<<CRC_DATAH_DATAH_SHIFT))&CRC_DATAH_DATAH_MASK) /*!< CRC_DATAH                               */
/* ------- DATAHL Bit Fields                        ------ */
#define CRC_DATAHL_DATAHL_MASK                   (0xFFUL << CRC_DATAHL_DATAHL_SHIFT)                 /*!< CRC_DATAHL: DATAHL Mask                 */
#define CRC_DATAHL_DATAHL_SHIFT                  0                                                   /*!< CRC_DATAHL: DATAHL Position             */
#define CRC_DATAHL_DATAHL(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATAHL_DATAHL_SHIFT))&CRC_DATAHL_DATAHL_MASK) /*!< CRC_DATAHL                              */
/* ------- DATAHU Bit Fields                        ------ */
#define CRC_DATAHU_DATAHU_MASK                   (0xFFUL << CRC_DATAHU_DATAHU_SHIFT)                 /*!< CRC_DATAHU: DATAHU Mask                 */
#define CRC_DATAHU_DATAHU_SHIFT                  0                                                   /*!< CRC_DATAHU: DATAHU Position             */
#define CRC_DATAHU_DATAHU(x)                     (((uint8_t)(((uint8_t)(x))<<CRC_DATAHU_DATAHU_SHIFT))&CRC_DATAHU_DATAHU_MASK) /*!< CRC_DATAHU                              */
/* ------- GPOLY Bit Fields                         ------ */
#define CRC_GPOLY_LOW_MASK                       (0xFFFFUL << CRC_GPOLY_LOW_SHIFT)                   /*!< CRC_GPOLY: LOW Mask                     */
#define CRC_GPOLY_LOW_SHIFT                      0                                                   /*!< CRC_GPOLY: LOW Position                 */
#define CRC_GPOLY_LOW(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_LOW_SHIFT))&CRC_GPOLY_LOW_MASK) /*!< CRC_GPOLY                               */
#define CRC_GPOLY_HIGH_MASK                      (0xFFFFUL << CRC_GPOLY_HIGH_SHIFT)                  /*!< CRC_GPOLY: HIGH Mask                    */
#define CRC_GPOLY_HIGH_SHIFT                     16                                                  /*!< CRC_GPOLY: HIGH Position                */
#define CRC_GPOLY_HIGH(x)                        (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_HIGH_SHIFT))&CRC_GPOLY_HIGH_MASK) /*!< CRC_GPOLY                               */
/* ------- GPOLYL Bit Fields                        ------ */
#define CRC_GPOLYL_GPOLYL_MASK                   (0xFFFFUL << CRC_GPOLYL_GPOLYL_SHIFT)               /*!< CRC_GPOLYL: GPOLYL Mask                 */
#define CRC_GPOLYL_GPOLYL_SHIFT                  0                                                   /*!< CRC_GPOLYL: GPOLYL Position             */
#define CRC_GPOLYL_GPOLYL(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYL_GPOLYL_SHIFT))&CRC_GPOLYL_GPOLYL_MASK) /*!< CRC_GPOLYL                              */
/* ------- GPOLYLL Bit Fields                       ------ */
#define CRC_GPOLYLL_GPOLYLL_MASK                 (0xFFUL << CRC_GPOLYLL_GPOLYLL_SHIFT)               /*!< CRC_GPOLYLL: GPOLYLL Mask               */
#define CRC_GPOLYLL_GPOLYLL_SHIFT                0                                                   /*!< CRC_GPOLYLL: GPOLYLL Position           */
#define CRC_GPOLYLL_GPOLYLL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLL_GPOLYLL_SHIFT))&CRC_GPOLYLL_GPOLYLL_MASK) /*!< CRC_GPOLYLL                             */
/* ------- GPOLYLU Bit Fields                       ------ */
#define CRC_GPOLYLU_GPOLYLU_MASK                 (0xFFUL << CRC_GPOLYLU_GPOLYLU_SHIFT)               /*!< CRC_GPOLYLU: GPOLYLU Mask               */
#define CRC_GPOLYLU_GPOLYLU_SHIFT                0                                                   /*!< CRC_GPOLYLU: GPOLYLU Position           */
#define CRC_GPOLYLU_GPOLYLU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLU_GPOLYLU_SHIFT))&CRC_GPOLYLU_GPOLYLU_MASK) /*!< CRC_GPOLYLU                             */
/* ------- GPOLYH Bit Fields                        ------ */
#define CRC_GPOLYH_GPOLYH_MASK                   (0xFFFFUL << CRC_GPOLYH_GPOLYH_SHIFT)               /*!< CRC_GPOLYH: GPOLYH Mask                 */
#define CRC_GPOLYH_GPOLYH_SHIFT                  0                                                   /*!< CRC_GPOLYH: GPOLYH Position             */
#define CRC_GPOLYH_GPOLYH(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYH_GPOLYH_SHIFT))&CRC_GPOLYH_GPOLYH_MASK) /*!< CRC_GPOLYH                              */
/* ------- GPOLYHL Bit Fields                       ------ */
#define CRC_GPOLYHL_GPOLYHL_MASK                 (0xFFUL << CRC_GPOLYHL_GPOLYHL_SHIFT)               /*!< CRC_GPOLYHL: GPOLYHL Mask               */
#define CRC_GPOLYHL_GPOLYHL_SHIFT                0                                                   /*!< CRC_GPOLYHL: GPOLYHL Position           */
#define CRC_GPOLYHL_GPOLYHL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHL_GPOLYHL_SHIFT))&CRC_GPOLYHL_GPOLYHL_MASK) /*!< CRC_GPOLYHL                             */
/* ------- GPOLYHU Bit Fields                       ------ */
#define CRC_GPOLYHU_GPOLYHU_MASK                 (0xFFUL << CRC_GPOLYHU_GPOLYHU_SHIFT)               /*!< CRC_GPOLYHU: GPOLYHU Mask               */
#define CRC_GPOLYHU_GPOLYHU_SHIFT                0                                                   /*!< CRC_GPOLYHU: GPOLYHU Position           */
#define CRC_GPOLYHU_GPOLYHU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHU_GPOLYHU_SHIFT))&CRC_GPOLYHU_GPOLYHU_MASK) /*!< CRC_GPOLYHU                             */
/* ------- CTRL Bit Fields                          ------ */
#define CRC_CTRL_TCRC_MASK                       (0x01UL << CRC_CTRL_TCRC_SHIFT)                     /*!< CRC_CTRL: TCRC Mask                     */
#define CRC_CTRL_TCRC_SHIFT                      24                                                  /*!< CRC_CTRL: TCRC Position                 */
#define CRC_CTRL_WAS_MASK                        (0x01UL << CRC_CTRL_WAS_SHIFT)                      /*!< CRC_CTRL: WAS Mask                      */
#define CRC_CTRL_WAS_SHIFT                       25                                                  /*!< CRC_CTRL: WAS Position                  */
#define CRC_CTRL_FXOR_MASK                       (0x01UL << CRC_CTRL_FXOR_SHIFT)                     /*!< CRC_CTRL: FXOR Mask                     */
#define CRC_CTRL_FXOR_SHIFT                      26                                                  /*!< CRC_CTRL: FXOR Position                 */
#define CRC_CTRL_TOTR_MASK                       (0x03UL << CRC_CTRL_TOTR_SHIFT)                     /*!< CRC_CTRL: TOTR Mask                     */
#define CRC_CTRL_TOTR_SHIFT                      28                                                  /*!< CRC_CTRL: TOTR Position                 */
#define CRC_CTRL_TOTR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOTR_SHIFT))&CRC_CTRL_TOTR_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_TOT_MASK                        (0x03UL << CRC_CTRL_TOT_SHIFT)                      /*!< CRC_CTRL: TOT Mask                      */
#define CRC_CTRL_TOT_SHIFT                       30                                                  /*!< CRC_CTRL: TOT Position                  */
#define CRC_CTRL_TOT(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOT_SHIFT))&CRC_CTRL_TOT_MASK) /*!< CRC_CTRL                                */
/* ------- CTRLHU Bit Fields                        ------ */
#define CRC_CTRLHU_TCRC_MASK                     (0x01UL << CRC_CTRLHU_TCRC_SHIFT)                   /*!< CRC_CTRLHU: TCRC Mask                   */
#define CRC_CTRLHU_TCRC_SHIFT                    0                                                   /*!< CRC_CTRLHU: TCRC Position               */
#define CRC_CTRLHU_WAS_MASK                      (0x01UL << CRC_CTRLHU_WAS_SHIFT)                    /*!< CRC_CTRLHU: WAS Mask                    */
#define CRC_CTRLHU_WAS_SHIFT                     1                                                   /*!< CRC_CTRLHU: WAS Position                */
#define CRC_CTRLHU_FXOR_MASK                     (0x01UL << CRC_CTRLHU_FXOR_SHIFT)                   /*!< CRC_CTRLHU: FXOR Mask                   */
#define CRC_CTRLHU_FXOR_SHIFT                    2                                                   /*!< CRC_CTRLHU: FXOR Position               */
#define CRC_CTRLHU_TOTR_MASK                     (0x03UL << CRC_CTRLHU_TOTR_SHIFT)                   /*!< CRC_CTRLHU: TOTR Mask                   */
#define CRC_CTRLHU_TOTR_SHIFT                    4                                                   /*!< CRC_CTRLHU: TOTR Position               */
#define CRC_CTRLHU_TOTR(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOTR_SHIFT))&CRC_CTRLHU_TOTR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOT_MASK                      (0x03UL << CRC_CTRLHU_TOT_SHIFT)                    /*!< CRC_CTRLHU: TOT Mask                    */
#define CRC_CTRLHU_TOT_SHIFT                     6                                                   /*!< CRC_CTRLHU: TOT Position                */
#define CRC_CTRLHU_TOT(x)                        (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOT_SHIFT))&CRC_CTRLHU_TOT_MASK) /*!< CRC_CTRLHU                              */

/* CRC - Peripheral instance base addresses */
#define CRC_BasePtr                    0x40032000UL
#define CRC                            ((CRC_Type *) CRC_BasePtr)
#define CRC_BASE_PTR                   (CRC)

/* ================================================================================ */
/* ================           DAC0 (file:DAC0_MK_0x40028000)       ================ */
/* ================================================================================ */

/**
 * @brief 12-Bit Digital-to-Analog Converter
 */
typedef struct {                                /*!<       DAC0 Structure                                               */
   union {                                      /*!< 0000: (size=0020)                                                  */
      __IO uint16_t  DATA[16];                  /*!< 0000: Data Register                                                */
      struct { /* (cluster) */                  /*!< 0000: (size=0x0020, 32)                                            */
         __IO uint8_t   DATL;                   /*!< 0000: Data Low Register                                            */
         __IO uint8_t   DATH;                   /*!< 0001: Data High Register                                           */
      } DAT[16];
   };
   __IO uint8_t   SR;                           /*!< 0020: Status Register                                              */
   __IO uint8_t   C0;                           /*!< 0021: Control Register 0                                           */
   __IO uint8_t   C1;                           /*!< 0022: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0023: Control Register 2                                           */
} DAC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DAC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- DATA Bit Fields                          ------ */
#define DAC_DATA_DATA_MASK                       (0xFFFUL << DAC_DATA_DATA_SHIFT)                    /*!< DAC0_DATA: DATA Mask                    */
#define DAC_DATA_DATA_SHIFT                      0                                                   /*!< DAC0_DATA: DATA Position                */
#define DAC_DATA_DATA(x)                         (((uint16_t)(((uint16_t)(x))<<DAC_DATA_DATA_SHIFT))&DAC_DATA_DATA_MASK) /*!< DAC0_DATA                               */
/* ------- DATL Bit Fields                          ------ */
#define DAC_DATL_DATA_MASK                       (0xFFUL << DAC_DATL_DATA_SHIFT)                     /*!< DAC0_DATL: DATA Mask                    */
#define DAC_DATL_DATA_SHIFT                      0                                                   /*!< DAC0_DATL: DATA Position                */
#define DAC_DATL_DATA(x)                         (((uint8_t)(((uint8_t)(x))<<DAC_DATL_DATA_SHIFT))&DAC_DATL_DATA_MASK) /*!< DAC0_DATL                               */
/* ------- DATH Bit Fields                          ------ */
#define DAC_DATH_DATA_MASK                       (0x0FUL << DAC_DATH_DATA_SHIFT)                     /*!< DAC0_DATH: DATA Mask                    */
#define DAC_DATH_DATA_SHIFT                      0                                                   /*!< DAC0_DATH: DATA Position                */
#define DAC_DATH_DATA(x)                         (((uint8_t)(((uint8_t)(x))<<DAC_DATH_DATA_SHIFT))&DAC_DATH_DATA_MASK) /*!< DAC0_DATH                               */
/* ------- SR Bit Fields                            ------ */
#define DAC_SR_DACBFRPBF_MASK                    (0x01UL << DAC_SR_DACBFRPBF_SHIFT)                  /*!< DAC0_SR: DACBFRPBF Mask                 */
#define DAC_SR_DACBFRPBF_SHIFT                   0                                                   /*!< DAC0_SR: DACBFRPBF Position             */
#define DAC_SR_DACBFRPTF_MASK                    (0x01UL << DAC_SR_DACBFRPTF_SHIFT)                  /*!< DAC0_SR: DACBFRPTF Mask                 */
#define DAC_SR_DACBFRPTF_SHIFT                   1                                                   /*!< DAC0_SR: DACBFRPTF Position             */
#define DAC_SR_DACBFWMF_MASK                     (0x01UL << DAC_SR_DACBFWMF_SHIFT)                   /*!< DAC0_SR: DACBFWMF Mask                  */
#define DAC_SR_DACBFWMF_SHIFT                    2                                                   /*!< DAC0_SR: DACBFWMF Position              */
/* ------- C0 Bit Fields                            ------ */
#define DAC_C0_DACBBIEN_MASK                     (0x01UL << DAC_C0_DACBBIEN_SHIFT)                   /*!< DAC0_C0: DACBBIEN Mask                  */
#define DAC_C0_DACBBIEN_SHIFT                    0                                                   /*!< DAC0_C0: DACBBIEN Position              */
#define DAC_C0_DACBTIEN_MASK                     (0x01UL << DAC_C0_DACBTIEN_SHIFT)                   /*!< DAC0_C0: DACBTIEN Mask                  */
#define DAC_C0_DACBTIEN_SHIFT                    1                                                   /*!< DAC0_C0: DACBTIEN Position              */
#define DAC_C0_DACBWIEN_MASK                     (0x01UL << DAC_C0_DACBWIEN_SHIFT)                   /*!< DAC0_C0: DACBWIEN Mask                  */
#define DAC_C0_DACBWIEN_SHIFT                    2                                                   /*!< DAC0_C0: DACBWIEN Position              */
#define DAC_C0_LPEN_MASK                         (0x01UL << DAC_C0_LPEN_SHIFT)                       /*!< DAC0_C0: LPEN Mask                      */
#define DAC_C0_LPEN_SHIFT                        3                                                   /*!< DAC0_C0: LPEN Position                  */
#define DAC_C0_DACSWTRG_MASK                     (0x01UL << DAC_C0_DACSWTRG_SHIFT)                   /*!< DAC0_C0: DACSWTRG Mask                  */
#define DAC_C0_DACSWTRG_SHIFT                    4                                                   /*!< DAC0_C0: DACSWTRG Position              */
#define DAC_C0_DACTRGSEL_MASK                    (0x01UL << DAC_C0_DACTRGSEL_SHIFT)                  /*!< DAC0_C0: DACTRGSEL Mask                 */
#define DAC_C0_DACTRGSEL_SHIFT                   5                                                   /*!< DAC0_C0: DACTRGSEL Position             */
#define DAC_C0_DACRFS_MASK                       (0x01UL << DAC_C0_DACRFS_SHIFT)                     /*!< DAC0_C0: DACRFS Mask                    */
#define DAC_C0_DACRFS_SHIFT                      6                                                   /*!< DAC0_C0: DACRFS Position                */
#define DAC_C0_DACEN_MASK                        (0x01UL << DAC_C0_DACEN_SHIFT)                      /*!< DAC0_C0: DACEN Mask                     */
#define DAC_C0_DACEN_SHIFT                       7                                                   /*!< DAC0_C0: DACEN Position                 */
/* ------- C1 Bit Fields                            ------ */
#define DAC_C1_DACBFEN_MASK                      (0x01UL << DAC_C1_DACBFEN_SHIFT)                    /*!< DAC0_C1: DACBFEN Mask                   */
#define DAC_C1_DACBFEN_SHIFT                     0                                                   /*!< DAC0_C1: DACBFEN Position               */
#define DAC_C1_DACBFMD_MASK                      (0x03UL << DAC_C1_DACBFMD_SHIFT)                    /*!< DAC0_C1: DACBFMD Mask                   */
#define DAC_C1_DACBFMD_SHIFT                     1                                                   /*!< DAC0_C1: DACBFMD Position               */
#define DAC_C1_DACBFMD(x)                        (((uint8_t)(((uint8_t)(x))<<DAC_C1_DACBFMD_SHIFT))&DAC_C1_DACBFMD_MASK) /*!< DAC0_C1                                 */
#define DAC_C1_DACBFWM_MASK                      (0x03UL << DAC_C1_DACBFWM_SHIFT)                    /*!< DAC0_C1: DACBFWM Mask                   */
#define DAC_C1_DACBFWM_SHIFT                     3                                                   /*!< DAC0_C1: DACBFWM Position               */
#define DAC_C1_DACBFWM(x)                        (((uint8_t)(((uint8_t)(x))<<DAC_C1_DACBFWM_SHIFT))&DAC_C1_DACBFWM_MASK) /*!< DAC0_C1                                 */
#define DAC_C1_DMAEN_MASK                        (0x01UL << DAC_C1_DMAEN_SHIFT)                      /*!< DAC0_C1: DMAEN Mask                     */
#define DAC_C1_DMAEN_SHIFT                       7                                                   /*!< DAC0_C1: DMAEN Position                 */
/* ------- C2 Bit Fields                            ------ */
#define DAC_C2_DACBFUP_MASK                      (0x0FUL << DAC_C2_DACBFUP_SHIFT)                    /*!< DAC0_C2: DACBFUP Mask                   */
#define DAC_C2_DACBFUP_SHIFT                     0                                                   /*!< DAC0_C2: DACBFUP Position               */
#define DAC_C2_DACBFUP(x)                        (((uint8_t)(((uint8_t)(x))<<DAC_C2_DACBFUP_SHIFT))&DAC_C2_DACBFUP_MASK) /*!< DAC0_C2                                 */
#define DAC_C2_DACBFRP_MASK                      (0x0FUL << DAC_C2_DACBFRP_SHIFT)                    /*!< DAC0_C2: DACBFRP Mask                   */
#define DAC_C2_DACBFRP_SHIFT                     4                                                   /*!< DAC0_C2: DACBFRP Position               */
#define DAC_C2_DACBFRP(x)                        (((uint8_t)(((uint8_t)(x))<<DAC_C2_DACBFRP_SHIFT))&DAC_C2_DACBFRP_MASK) /*!< DAC0_C2                                 */

/* DAC0 - Peripheral instance base addresses */
#define DAC0_BasePtr                   0x40028000UL
#define DAC0                           ((DAC_Type *) DAC0_BasePtr)
#define DAC0_BASE_PTR                  (DAC0)

/* ================================================================================ */
/* ================           DAC1 (derived from DAC0)             ================ */
/* ================================================================================ */

/**
 * @brief 12-Bit Digital-to-Analog Converter
 */

/* DAC1 - Peripheral instance base addresses */
#define DAC1_BasePtr                   0x4003F000UL
#define DAC1                           ((DAC_Type *) DAC1_BasePtr)
#define DAC1_BASE_PTR                  (DAC1)

/* ================================================================================ */
/* ================           DMA (file:DMA_MK_16CH_EARS)          ================ */
/* ================================================================================ */

/**
 * @brief Enhanced direct memory access controller
 */
typedef struct {                                /*!<       DMA Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: Control Register                                             */
   __I  uint32_t  ES;                           /*!< 0004: Error Status Register                                        */
   __I  uint32_t  RESERVED0;                    /*!< 0008:                                                              */
   __IO uint32_t  ERQ;                          /*!< 000C: Enable Request Register                                      */
   __I  uint32_t  RESERVED1;                    /*!< 0010:                                                              */
   __IO uint32_t  EEI;                          /*!< 0014: Enable Error Interrupt Register                              */
   __O  uint8_t   CEEI;                         /*!< 0018: Clear Enable Error Interrupt Register                        */
   __O  uint8_t   SEEI;                         /*!< 0019: Set Enable Error Interrupt Register                          */
   __O  uint8_t   CERQ;                         /*!< 001A: Clear Enable Request Register                                */
   __O  uint8_t   SERQ;                         /*!< 001B: Set Enable Request Register                                  */
   __O  uint8_t   CDNE;                         /*!< 001C: Clear DONE Status Bit Register                               */
   __O  uint8_t   SSRT;                         /*!< 001D: Set START Bit Register                                       */
   __O  uint8_t   CERR;                         /*!< 001E: Clear Error Register                                         */
   __O  uint8_t   CINT;                         /*!< 001F: Clear Interrupt Request Register                             */
   __I  uint32_t  RESERVED2;                    /*!< 0020:                                                              */
   __IO uint32_t  INT;                          /*!< 0024: Interrupt Request Register                                   */
   __I  uint32_t  RESERVED3;                    /*!< 0028:                                                              */
   __IO uint32_t  ERR;                          /*!< 002C: Error Register                                               */
   __I  uint32_t  RESERVED4;                    /*!< 0030:                                                              */
   __IO uint32_t  HRS;                          /*!< 0034: Hardware Request Status Register                             */
   __I  uint32_t  RESERVED5[3];                 /*!< 0038:                                                              */
   __IO uint32_t  EARS;                         /*!< 0044: Enable Asynchronous Request in Stop Register                 */
   __I  uint32_t  RESERVED6[46];                /*!< 0048:                                                              */
   __IO uint8_t   DCHPRI3;                      /*!< 0100: Channel 3 Priority Register                                  */
   __IO uint8_t   DCHPRI2;                      /*!< 0101: Channel 2 Priority Register                                  */
   __IO uint8_t   DCHPRI1;                      /*!< 0102: Channel 1 Priority Register                                  */
   __IO uint8_t   DCHPRI0;                      /*!< 0103: Channel 0 Priority Register                                  */
   __IO uint8_t   DCHPRI7;                      /*!< 0104: Channel 7 Priority Register                                  */
   __IO uint8_t   DCHPRI6;                      /*!< 0105: Channel 6 Priority Register                                  */
   __IO uint8_t   DCHPRI5;                      /*!< 0106: Channel 5 Priority Register                                  */
   __IO uint8_t   DCHPRI4;                      /*!< 0107: Channel 4 Priority Register                                  */
   __IO uint8_t   DCHPRI11;                     /*!< 0108: Channel 11 Priority Register                                 */
   __IO uint8_t   DCHPRI10;                     /*!< 0109: Channel 10 Priority Register                                 */
   __IO uint8_t   DCHPRI9;                      /*!< 010A: Channel 9 Priority Register                                  */
   __IO uint8_t   DCHPRI8;                      /*!< 010B: Channel 8 Priority Register                                  */
   __IO uint8_t   DCHPRI15;                     /*!< 010C: Channel 15 Priority Register                                 */
   __IO uint8_t   DCHPRI14;                     /*!< 010D: Channel 14 Priority Register                                 */
   __IO uint8_t   DCHPRI13;                     /*!< 010E: Channel 13 Priority Register                                 */
   __IO uint8_t   DCHPRI12;                     /*!< 010F: Channel 12 Priority Register                                 */
   __I  uint32_t  RESERVED7[956];               /*!< 0110:                                                              */
   struct { /* (cluster) */                     /*!< 1000: (size=0x0200, 512)                                           */
      __IO uint32_t  SADDR;                     /*!< 1000: Source Address                                               */
      __IO uint16_t  SOFF;                      /*!< 1004: Signed Source Address Offset                                 */
      __IO uint16_t  ATTR;                      /*!< 1006: Transfer Attributes                                          */
      union {                                   /*!< 1000: (size=0004)                                                  */
         __IO uint32_t  NBYTES_MLNO;            /*!< 1008: Minor Byte Count (Minor Loop Disabled)                       */
         __IO uint32_t  NBYTES_MLOFFNO;         /*!< 1008: Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled) */
         __IO uint32_t  NBYTES_MLOFFYES;        /*!< 1008: Signed Minor Loop Offset (Minor Loop and Offset Enabled)     */
      };
      __IO uint32_t  SLAST;                     /*!< 100C: Last Source Address Adjustment                               */
      __IO uint32_t  DADDR;                     /*!< 1010: Destination Address                                          */
      __IO uint16_t  DOFF;                      /*!< 1014: Signed Destination Address Offset                            */
      union {                                   /*!< 1000: (size=0002)                                                  */
         __IO uint16_t  CITER_ELINKNO;          /*!< 1016: Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  CITER_ELINKYES;         /*!< 1016: Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
      __IO uint32_t  DLAST_SGA;                 /*!< 1018: Last Destination Address Adjustment/Scatter Gather Address   */
      __IO uint16_t  CSR;                       /*!< 101C: Control and Status                                           */
      union {                                   /*!< 1000: (size=0002)                                                  */
         __IO uint16_t  BITER_ELINKNO;          /*!< 101E: Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
         __IO uint16_t  BITER_ELINKYES;         /*!< 101E: Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
      };
   } TCD[16];
} DMA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CR Bit Fields                            ------ */
#define DMA_CR_EDBG_MASK                         (0x01UL << DMA_CR_EDBG_SHIFT)                       /*!< DMA_CR: EDBG Mask                       */
#define DMA_CR_EDBG_SHIFT                        1                                                   /*!< DMA_CR: EDBG Position                   */
#define DMA_CR_ERCA_MASK                         (0x01UL << DMA_CR_ERCA_SHIFT)                       /*!< DMA_CR: ERCA Mask                       */
#define DMA_CR_ERCA_SHIFT                        2                                                   /*!< DMA_CR: ERCA Position                   */
#define DMA_CR_HOE_MASK                          (0x01UL << DMA_CR_HOE_SHIFT)                        /*!< DMA_CR: HOE Mask                        */
#define DMA_CR_HOE_SHIFT                         4                                                   /*!< DMA_CR: HOE Position                    */
#define DMA_CR_HALT_MASK                         (0x01UL << DMA_CR_HALT_SHIFT)                       /*!< DMA_CR: HALT Mask                       */
#define DMA_CR_HALT_SHIFT                        5                                                   /*!< DMA_CR: HALT Position                   */
#define DMA_CR_CLM_MASK                          (0x01UL << DMA_CR_CLM_SHIFT)                        /*!< DMA_CR: CLM Mask                        */
#define DMA_CR_CLM_SHIFT                         6                                                   /*!< DMA_CR: CLM Position                    */
#define DMA_CR_EMLM_MASK                         (0x01UL << DMA_CR_EMLM_SHIFT)                       /*!< DMA_CR: EMLM Mask                       */
#define DMA_CR_EMLM_SHIFT                        7                                                   /*!< DMA_CR: EMLM Position                   */
#define DMA_CR_ECX_MASK                          (0x01UL << DMA_CR_ECX_SHIFT)                        /*!< DMA_CR: ECX Mask                        */
#define DMA_CR_ECX_SHIFT                         16                                                  /*!< DMA_CR: ECX Position                    */
#define DMA_CR_CX_MASK                           (0x01UL << DMA_CR_CX_SHIFT)                         /*!< DMA_CR: CX Mask                         */
#define DMA_CR_CX_SHIFT                          17                                                  /*!< DMA_CR: CX Position                     */
/* ------- ES Bit Fields                            ------ */
#define DMA_ES_DBE_MASK                          (0x01UL << DMA_ES_DBE_SHIFT)                        /*!< DMA_ES: DBE Mask                        */
#define DMA_ES_DBE_SHIFT                         0                                                   /*!< DMA_ES: DBE Position                    */
#define DMA_ES_SBE_MASK                          (0x01UL << DMA_ES_SBE_SHIFT)                        /*!< DMA_ES: SBE Mask                        */
#define DMA_ES_SBE_SHIFT                         1                                                   /*!< DMA_ES: SBE Position                    */
#define DMA_ES_SGE_MASK                          (0x01UL << DMA_ES_SGE_SHIFT)                        /*!< DMA_ES: SGE Mask                        */
#define DMA_ES_SGE_SHIFT                         2                                                   /*!< DMA_ES: SGE Position                    */
#define DMA_ES_NCE_MASK                          (0x01UL << DMA_ES_NCE_SHIFT)                        /*!< DMA_ES: NCE Mask                        */
#define DMA_ES_NCE_SHIFT                         3                                                   /*!< DMA_ES: NCE Position                    */
#define DMA_ES_DOE_MASK                          (0x01UL << DMA_ES_DOE_SHIFT)                        /*!< DMA_ES: DOE Mask                        */
#define DMA_ES_DOE_SHIFT                         4                                                   /*!< DMA_ES: DOE Position                    */
#define DMA_ES_DAE_MASK                          (0x01UL << DMA_ES_DAE_SHIFT)                        /*!< DMA_ES: DAE Mask                        */
#define DMA_ES_DAE_SHIFT                         5                                                   /*!< DMA_ES: DAE Position                    */
#define DMA_ES_SOE_MASK                          (0x01UL << DMA_ES_SOE_SHIFT)                        /*!< DMA_ES: SOE Mask                        */
#define DMA_ES_SOE_SHIFT                         6                                                   /*!< DMA_ES: SOE Position                    */
#define DMA_ES_SAE_MASK                          (0x01UL << DMA_ES_SAE_SHIFT)                        /*!< DMA_ES: SAE Mask                        */
#define DMA_ES_SAE_SHIFT                         7                                                   /*!< DMA_ES: SAE Position                    */
#define DMA_ES_ERRCHN_MASK                       (0x0FUL << DMA_ES_ERRCHN_SHIFT)                     /*!< DMA_ES: ERRCHN Mask                     */
#define DMA_ES_ERRCHN_SHIFT                      8                                                   /*!< DMA_ES: ERRCHN Position                 */
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ES_ERRCHN_SHIFT))&DMA_ES_ERRCHN_MASK) /*!< DMA_ES                                  */
#define DMA_ES_CPE_MASK                          (0x01UL << DMA_ES_CPE_SHIFT)                        /*!< DMA_ES: CPE Mask                        */
#define DMA_ES_CPE_SHIFT                         14                                                  /*!< DMA_ES: CPE Position                    */
#define DMA_ES_ECX_MASK                          (0x01UL << DMA_ES_ECX_SHIFT)                        /*!< DMA_ES: ECX Mask                        */
#define DMA_ES_ECX_SHIFT                         16                                                  /*!< DMA_ES: ECX Position                    */
#define DMA_ES_VLD_MASK                          (0x01UL << DMA_ES_VLD_SHIFT)                        /*!< DMA_ES: VLD Mask                        */
#define DMA_ES_VLD_SHIFT                         31                                                  /*!< DMA_ES: VLD Position                    */
/* ------- ERQ Bit Fields                           ------ */
#define DMA_ERQ_ERQ0_MASK                        (0x01UL << DMA_ERQ_ERQ0_SHIFT)                      /*!< DMA_ERQ: ERQ0 Mask                      */
#define DMA_ERQ_ERQ0_SHIFT                       0                                                   /*!< DMA_ERQ: ERQ0 Position                  */
#define DMA_ERQ_ERQ1_MASK                        (0x01UL << DMA_ERQ_ERQ1_SHIFT)                      /*!< DMA_ERQ: ERQ1 Mask                      */
#define DMA_ERQ_ERQ1_SHIFT                       1                                                   /*!< DMA_ERQ: ERQ1 Position                  */
#define DMA_ERQ_ERQ2_MASK                        (0x01UL << DMA_ERQ_ERQ2_SHIFT)                      /*!< DMA_ERQ: ERQ2 Mask                      */
#define DMA_ERQ_ERQ2_SHIFT                       2                                                   /*!< DMA_ERQ: ERQ2 Position                  */
#define DMA_ERQ_ERQ3_MASK                        (0x01UL << DMA_ERQ_ERQ3_SHIFT)                      /*!< DMA_ERQ: ERQ3 Mask                      */
#define DMA_ERQ_ERQ3_SHIFT                       3                                                   /*!< DMA_ERQ: ERQ3 Position                  */
#define DMA_ERQ_ERQ4_MASK                        (0x01UL << DMA_ERQ_ERQ4_SHIFT)                      /*!< DMA_ERQ: ERQ4 Mask                      */
#define DMA_ERQ_ERQ4_SHIFT                       4                                                   /*!< DMA_ERQ: ERQ4 Position                  */
#define DMA_ERQ_ERQ5_MASK                        (0x01UL << DMA_ERQ_ERQ5_SHIFT)                      /*!< DMA_ERQ: ERQ5 Mask                      */
#define DMA_ERQ_ERQ5_SHIFT                       5                                                   /*!< DMA_ERQ: ERQ5 Position                  */
#define DMA_ERQ_ERQ6_MASK                        (0x01UL << DMA_ERQ_ERQ6_SHIFT)                      /*!< DMA_ERQ: ERQ6 Mask                      */
#define DMA_ERQ_ERQ6_SHIFT                       6                                                   /*!< DMA_ERQ: ERQ6 Position                  */
#define DMA_ERQ_ERQ7_MASK                        (0x01UL << DMA_ERQ_ERQ7_SHIFT)                      /*!< DMA_ERQ: ERQ7 Mask                      */
#define DMA_ERQ_ERQ7_SHIFT                       7                                                   /*!< DMA_ERQ: ERQ7 Position                  */
#define DMA_ERQ_ERQ8_MASK                        (0x01UL << DMA_ERQ_ERQ8_SHIFT)                      /*!< DMA_ERQ: ERQ8 Mask                      */
#define DMA_ERQ_ERQ8_SHIFT                       8                                                   /*!< DMA_ERQ: ERQ8 Position                  */
#define DMA_ERQ_ERQ9_MASK                        (0x01UL << DMA_ERQ_ERQ9_SHIFT)                      /*!< DMA_ERQ: ERQ9 Mask                      */
#define DMA_ERQ_ERQ9_SHIFT                       9                                                   /*!< DMA_ERQ: ERQ9 Position                  */
#define DMA_ERQ_ERQ10_MASK                       (0x01UL << DMA_ERQ_ERQ10_SHIFT)                     /*!< DMA_ERQ: ERQ10 Mask                     */
#define DMA_ERQ_ERQ10_SHIFT                      10                                                  /*!< DMA_ERQ: ERQ10 Position                 */
#define DMA_ERQ_ERQ11_MASK                       (0x01UL << DMA_ERQ_ERQ11_SHIFT)                     /*!< DMA_ERQ: ERQ11 Mask                     */
#define DMA_ERQ_ERQ11_SHIFT                      11                                                  /*!< DMA_ERQ: ERQ11 Position                 */
#define DMA_ERQ_ERQ12_MASK                       (0x01UL << DMA_ERQ_ERQ12_SHIFT)                     /*!< DMA_ERQ: ERQ12 Mask                     */
#define DMA_ERQ_ERQ12_SHIFT                      12                                                  /*!< DMA_ERQ: ERQ12 Position                 */
#define DMA_ERQ_ERQ13_MASK                       (0x01UL << DMA_ERQ_ERQ13_SHIFT)                     /*!< DMA_ERQ: ERQ13 Mask                     */
#define DMA_ERQ_ERQ13_SHIFT                      13                                                  /*!< DMA_ERQ: ERQ13 Position                 */
#define DMA_ERQ_ERQ14_MASK                       (0x01UL << DMA_ERQ_ERQ14_SHIFT)                     /*!< DMA_ERQ: ERQ14 Mask                     */
#define DMA_ERQ_ERQ14_SHIFT                      14                                                  /*!< DMA_ERQ: ERQ14 Position                 */
#define DMA_ERQ_ERQ15_MASK                       (0x01UL << DMA_ERQ_ERQ15_SHIFT)                     /*!< DMA_ERQ: ERQ15 Mask                     */
#define DMA_ERQ_ERQ15_SHIFT                      15                                                  /*!< DMA_ERQ: ERQ15 Position                 */
/* ------- EEI Bit Fields                           ------ */
#define DMA_EEI_EEI0_MASK                        (0x01UL << DMA_EEI_EEI0_SHIFT)                      /*!< DMA_EEI: EEI0 Mask                      */
#define DMA_EEI_EEI0_SHIFT                       0                                                   /*!< DMA_EEI: EEI0 Position                  */
#define DMA_EEI_EEI1_MASK                        (0x01UL << DMA_EEI_EEI1_SHIFT)                      /*!< DMA_EEI: EEI1 Mask                      */
#define DMA_EEI_EEI1_SHIFT                       1                                                   /*!< DMA_EEI: EEI1 Position                  */
#define DMA_EEI_EEI2_MASK                        (0x01UL << DMA_EEI_EEI2_SHIFT)                      /*!< DMA_EEI: EEI2 Mask                      */
#define DMA_EEI_EEI2_SHIFT                       2                                                   /*!< DMA_EEI: EEI2 Position                  */
#define DMA_EEI_EEI3_MASK                        (0x01UL << DMA_EEI_EEI3_SHIFT)                      /*!< DMA_EEI: EEI3 Mask                      */
#define DMA_EEI_EEI3_SHIFT                       3                                                   /*!< DMA_EEI: EEI3 Position                  */
#define DMA_EEI_EEI4_MASK                        (0x01UL << DMA_EEI_EEI4_SHIFT)                      /*!< DMA_EEI: EEI4 Mask                      */
#define DMA_EEI_EEI4_SHIFT                       4                                                   /*!< DMA_EEI: EEI4 Position                  */
#define DMA_EEI_EEI5_MASK                        (0x01UL << DMA_EEI_EEI5_SHIFT)                      /*!< DMA_EEI: EEI5 Mask                      */
#define DMA_EEI_EEI5_SHIFT                       5                                                   /*!< DMA_EEI: EEI5 Position                  */
#define DMA_EEI_EEI6_MASK                        (0x01UL << DMA_EEI_EEI6_SHIFT)                      /*!< DMA_EEI: EEI6 Mask                      */
#define DMA_EEI_EEI6_SHIFT                       6                                                   /*!< DMA_EEI: EEI6 Position                  */
#define DMA_EEI_EEI7_MASK                        (0x01UL << DMA_EEI_EEI7_SHIFT)                      /*!< DMA_EEI: EEI7 Mask                      */
#define DMA_EEI_EEI7_SHIFT                       7                                                   /*!< DMA_EEI: EEI7 Position                  */
#define DMA_EEI_EEI8_MASK                        (0x01UL << DMA_EEI_EEI8_SHIFT)                      /*!< DMA_EEI: EEI8 Mask                      */
#define DMA_EEI_EEI8_SHIFT                       8                                                   /*!< DMA_EEI: EEI8 Position                  */
#define DMA_EEI_EEI9_MASK                        (0x01UL << DMA_EEI_EEI9_SHIFT)                      /*!< DMA_EEI: EEI9 Mask                      */
#define DMA_EEI_EEI9_SHIFT                       9                                                   /*!< DMA_EEI: EEI9 Position                  */
#define DMA_EEI_EEI10_MASK                       (0x01UL << DMA_EEI_EEI10_SHIFT)                     /*!< DMA_EEI: EEI10 Mask                     */
#define DMA_EEI_EEI10_SHIFT                      10                                                  /*!< DMA_EEI: EEI10 Position                 */
#define DMA_EEI_EEI11_MASK                       (0x01UL << DMA_EEI_EEI11_SHIFT)                     /*!< DMA_EEI: EEI11 Mask                     */
#define DMA_EEI_EEI11_SHIFT                      11                                                  /*!< DMA_EEI: EEI11 Position                 */
#define DMA_EEI_EEI12_MASK                       (0x01UL << DMA_EEI_EEI12_SHIFT)                     /*!< DMA_EEI: EEI12 Mask                     */
#define DMA_EEI_EEI12_SHIFT                      12                                                  /*!< DMA_EEI: EEI12 Position                 */
#define DMA_EEI_EEI13_MASK                       (0x01UL << DMA_EEI_EEI13_SHIFT)                     /*!< DMA_EEI: EEI13 Mask                     */
#define DMA_EEI_EEI13_SHIFT                      13                                                  /*!< DMA_EEI: EEI13 Position                 */
#define DMA_EEI_EEI14_MASK                       (0x01UL << DMA_EEI_EEI14_SHIFT)                     /*!< DMA_EEI: EEI14 Mask                     */
#define DMA_EEI_EEI14_SHIFT                      14                                                  /*!< DMA_EEI: EEI14 Position                 */
#define DMA_EEI_EEI15_MASK                       (0x01UL << DMA_EEI_EEI15_SHIFT)                     /*!< DMA_EEI: EEI15 Mask                     */
#define DMA_EEI_EEI15_SHIFT                      15                                                  /*!< DMA_EEI: EEI15 Position                 */
/* ------- CEEI Bit Fields                          ------ */
#define DMA_CEEI_CEEI_MASK                       (0x0FUL << DMA_CEEI_CEEI_SHIFT)                     /*!< DMA_CEEI: CEEI Mask                     */
#define DMA_CEEI_CEEI_SHIFT                      0                                                   /*!< DMA_CEEI: CEEI Position                 */
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_CEEI_SHIFT))&DMA_CEEI_CEEI_MASK) /*!< DMA_CEEI                                */
#define DMA_CEEI_CAEE_MASK                       (0x01UL << DMA_CEEI_CAEE_SHIFT)                     /*!< DMA_CEEI: CAEE Mask                     */
#define DMA_CEEI_CAEE_SHIFT                      6                                                   /*!< DMA_CEEI: CAEE Position                 */
#define DMA_CEEI_NOP_MASK                        (0x01UL << DMA_CEEI_NOP_SHIFT)                      /*!< DMA_CEEI: NOP Mask                      */
#define DMA_CEEI_NOP_SHIFT                       7                                                   /*!< DMA_CEEI: NOP Position                  */
/* ------- SEEI Bit Fields                          ------ */
#define DMA_SEEI_SEEI_MASK                       (0x0FUL << DMA_SEEI_SEEI_SHIFT)                     /*!< DMA_SEEI: SEEI Mask                     */
#define DMA_SEEI_SEEI_SHIFT                      0                                                   /*!< DMA_SEEI: SEEI Position                 */
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_SEEI_SHIFT))&DMA_SEEI_SEEI_MASK) /*!< DMA_SEEI                                */
#define DMA_SEEI_SAEE_MASK                       (0x01UL << DMA_SEEI_SAEE_SHIFT)                     /*!< DMA_SEEI: SAEE Mask                     */
#define DMA_SEEI_SAEE_SHIFT                      6                                                   /*!< DMA_SEEI: SAEE Position                 */
#define DMA_SEEI_NOP_MASK                        (0x01UL << DMA_SEEI_NOP_SHIFT)                      /*!< DMA_SEEI: NOP Mask                      */
#define DMA_SEEI_NOP_SHIFT                       7                                                   /*!< DMA_SEEI: NOP Position                  */
/* ------- CERQ Bit Fields                          ------ */
#define DMA_CERQ_CERQ_MASK                       (0x0FUL << DMA_CERQ_CERQ_SHIFT)                     /*!< DMA_CERQ: CERQ Mask                     */
#define DMA_CERQ_CERQ_SHIFT                      0                                                   /*!< DMA_CERQ: CERQ Position                 */
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_CERQ_SHIFT))&DMA_CERQ_CERQ_MASK) /*!< DMA_CERQ                                */
#define DMA_CERQ_CAER_MASK                       (0x01UL << DMA_CERQ_CAER_SHIFT)                     /*!< DMA_CERQ: CAER Mask                     */
#define DMA_CERQ_CAER_SHIFT                      6                                                   /*!< DMA_CERQ: CAER Position                 */
#define DMA_CERQ_NOP_MASK                        (0x01UL << DMA_CERQ_NOP_SHIFT)                      /*!< DMA_CERQ: NOP Mask                      */
#define DMA_CERQ_NOP_SHIFT                       7                                                   /*!< DMA_CERQ: NOP Position                  */
/* ------- SERQ Bit Fields                          ------ */
#define DMA_SERQ_SERQ_MASK                       (0x0FUL << DMA_SERQ_SERQ_SHIFT)                     /*!< DMA_SERQ: SERQ Mask                     */
#define DMA_SERQ_SERQ_SHIFT                      0                                                   /*!< DMA_SERQ: SERQ Position                 */
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_SERQ_SHIFT))&DMA_SERQ_SERQ_MASK) /*!< DMA_SERQ                                */
#define DMA_SERQ_SAER_MASK                       (0x01UL << DMA_SERQ_SAER_SHIFT)                     /*!< DMA_SERQ: SAER Mask                     */
#define DMA_SERQ_SAER_SHIFT                      6                                                   /*!< DMA_SERQ: SAER Position                 */
#define DMA_SERQ_NOP_MASK                        (0x01UL << DMA_SERQ_NOP_SHIFT)                      /*!< DMA_SERQ: NOP Mask                      */
#define DMA_SERQ_NOP_SHIFT                       7                                                   /*!< DMA_SERQ: NOP Position                  */
/* ------- CDNE Bit Fields                          ------ */
#define DMA_CDNE_CDNE_MASK                       (0x0FUL << DMA_CDNE_CDNE_SHIFT)                     /*!< DMA_CDNE: CDNE Mask                     */
#define DMA_CDNE_CDNE_SHIFT                      0                                                   /*!< DMA_CDNE: CDNE Position                 */
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_CDNE_SHIFT))&DMA_CDNE_CDNE_MASK) /*!< DMA_CDNE                                */
#define DMA_CDNE_CADN_MASK                       (0x01UL << DMA_CDNE_CADN_SHIFT)                     /*!< DMA_CDNE: CADN Mask                     */
#define DMA_CDNE_CADN_SHIFT                      6                                                   /*!< DMA_CDNE: CADN Position                 */
#define DMA_CDNE_NOP_MASK                        (0x01UL << DMA_CDNE_NOP_SHIFT)                      /*!< DMA_CDNE: NOP Mask                      */
#define DMA_CDNE_NOP_SHIFT                       7                                                   /*!< DMA_CDNE: NOP Position                  */
/* ------- SSRT Bit Fields                          ------ */
#define DMA_SSRT_SSRT_MASK                       (0x0FUL << DMA_SSRT_SSRT_SHIFT)                     /*!< DMA_SSRT: SSRT Mask                     */
#define DMA_SSRT_SSRT_SHIFT                      0                                                   /*!< DMA_SSRT: SSRT Position                 */
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_SSRT_SHIFT))&DMA_SSRT_SSRT_MASK) /*!< DMA_SSRT                                */
#define DMA_SSRT_SAST_MASK                       (0x01UL << DMA_SSRT_SAST_SHIFT)                     /*!< DMA_SSRT: SAST Mask                     */
#define DMA_SSRT_SAST_SHIFT                      6                                                   /*!< DMA_SSRT: SAST Position                 */
#define DMA_SSRT_NOP_MASK                        (0x01UL << DMA_SSRT_NOP_SHIFT)                      /*!< DMA_SSRT: NOP Mask                      */
#define DMA_SSRT_NOP_SHIFT                       7                                                   /*!< DMA_SSRT: NOP Position                  */
/* ------- CERR Bit Fields                          ------ */
#define DMA_CERR_CERR_MASK                       (0x0FUL << DMA_CERR_CERR_SHIFT)                     /*!< DMA_CERR: CERR Mask                     */
#define DMA_CERR_CERR_SHIFT                      0                                                   /*!< DMA_CERR: CERR Position                 */
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERR_CERR_SHIFT))&DMA_CERR_CERR_MASK) /*!< DMA_CERR                                */
#define DMA_CERR_CAEI_MASK                       (0x01UL << DMA_CERR_CAEI_SHIFT)                     /*!< DMA_CERR: CAEI Mask                     */
#define DMA_CERR_CAEI_SHIFT                      6                                                   /*!< DMA_CERR: CAEI Position                 */
#define DMA_CERR_NOP_MASK                        (0x01UL << DMA_CERR_NOP_SHIFT)                      /*!< DMA_CERR: NOP Mask                      */
#define DMA_CERR_NOP_SHIFT                       7                                                   /*!< DMA_CERR: NOP Position                  */
/* ------- CINT Bit Fields                          ------ */
#define DMA_CINT_CINT_MASK                       (0x0FUL << DMA_CINT_CINT_SHIFT)                     /*!< DMA_CINT: CINT Mask                     */
#define DMA_CINT_CINT_SHIFT                      0                                                   /*!< DMA_CINT: CINT Position                 */
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CINT_CINT_SHIFT))&DMA_CINT_CINT_MASK) /*!< DMA_CINT                                */
#define DMA_CINT_CAIR_MASK                       (0x01UL << DMA_CINT_CAIR_SHIFT)                     /*!< DMA_CINT: CAIR Mask                     */
#define DMA_CINT_CAIR_SHIFT                      6                                                   /*!< DMA_CINT: CAIR Position                 */
#define DMA_CINT_NOP_MASK                        (0x01UL << DMA_CINT_NOP_SHIFT)                      /*!< DMA_CINT: NOP Mask                      */
#define DMA_CINT_NOP_SHIFT                       7                                                   /*!< DMA_CINT: NOP Position                  */
/* ------- INT Bit Fields                           ------ */
#define DMA_INT_INT0_MASK                        (0x01UL << DMA_INT_INT0_SHIFT)                      /*!< DMA_INT: INT0 Mask                      */
#define DMA_INT_INT0_SHIFT                       0                                                   /*!< DMA_INT: INT0 Position                  */
#define DMA_INT_INT1_MASK                        (0x01UL << DMA_INT_INT1_SHIFT)                      /*!< DMA_INT: INT1 Mask                      */
#define DMA_INT_INT1_SHIFT                       1                                                   /*!< DMA_INT: INT1 Position                  */
#define DMA_INT_INT2_MASK                        (0x01UL << DMA_INT_INT2_SHIFT)                      /*!< DMA_INT: INT2 Mask                      */
#define DMA_INT_INT2_SHIFT                       2                                                   /*!< DMA_INT: INT2 Position                  */
#define DMA_INT_INT3_MASK                        (0x01UL << DMA_INT_INT3_SHIFT)                      /*!< DMA_INT: INT3 Mask                      */
#define DMA_INT_INT3_SHIFT                       3                                                   /*!< DMA_INT: INT3 Position                  */
#define DMA_INT_INT4_MASK                        (0x01UL << DMA_INT_INT4_SHIFT)                      /*!< DMA_INT: INT4 Mask                      */
#define DMA_INT_INT4_SHIFT                       4                                                   /*!< DMA_INT: INT4 Position                  */
#define DMA_INT_INT5_MASK                        (0x01UL << DMA_INT_INT5_SHIFT)                      /*!< DMA_INT: INT5 Mask                      */
#define DMA_INT_INT5_SHIFT                       5                                                   /*!< DMA_INT: INT5 Position                  */
#define DMA_INT_INT6_MASK                        (0x01UL << DMA_INT_INT6_SHIFT)                      /*!< DMA_INT: INT6 Mask                      */
#define DMA_INT_INT6_SHIFT                       6                                                   /*!< DMA_INT: INT6 Position                  */
#define DMA_INT_INT7_MASK                        (0x01UL << DMA_INT_INT7_SHIFT)                      /*!< DMA_INT: INT7 Mask                      */
#define DMA_INT_INT7_SHIFT                       7                                                   /*!< DMA_INT: INT7 Position                  */
#define DMA_INT_INT8_MASK                        (0x01UL << DMA_INT_INT8_SHIFT)                      /*!< DMA_INT: INT8 Mask                      */
#define DMA_INT_INT8_SHIFT                       8                                                   /*!< DMA_INT: INT8 Position                  */
#define DMA_INT_INT9_MASK                        (0x01UL << DMA_INT_INT9_SHIFT)                      /*!< DMA_INT: INT9 Mask                      */
#define DMA_INT_INT9_SHIFT                       9                                                   /*!< DMA_INT: INT9 Position                  */
#define DMA_INT_INT10_MASK                       (0x01UL << DMA_INT_INT10_SHIFT)                     /*!< DMA_INT: INT10 Mask                     */
#define DMA_INT_INT10_SHIFT                      10                                                  /*!< DMA_INT: INT10 Position                 */
#define DMA_INT_INT11_MASK                       (0x01UL << DMA_INT_INT11_SHIFT)                     /*!< DMA_INT: INT11 Mask                     */
#define DMA_INT_INT11_SHIFT                      11                                                  /*!< DMA_INT: INT11 Position                 */
#define DMA_INT_INT12_MASK                       (0x01UL << DMA_INT_INT12_SHIFT)                     /*!< DMA_INT: INT12 Mask                     */
#define DMA_INT_INT12_SHIFT                      12                                                  /*!< DMA_INT: INT12 Position                 */
#define DMA_INT_INT13_MASK                       (0x01UL << DMA_INT_INT13_SHIFT)                     /*!< DMA_INT: INT13 Mask                     */
#define DMA_INT_INT13_SHIFT                      13                                                  /*!< DMA_INT: INT13 Position                 */
#define DMA_INT_INT14_MASK                       (0x01UL << DMA_INT_INT14_SHIFT)                     /*!< DMA_INT: INT14 Mask                     */
#define DMA_INT_INT14_SHIFT                      14                                                  /*!< DMA_INT: INT14 Position                 */
#define DMA_INT_INT15_MASK                       (0x01UL << DMA_INT_INT15_SHIFT)                     /*!< DMA_INT: INT15 Mask                     */
#define DMA_INT_INT15_SHIFT                      15                                                  /*!< DMA_INT: INT15 Position                 */
/* ------- ERR Bit Fields                           ------ */
#define DMA_ERR_ERR0_MASK                        (0x01UL << DMA_ERR_ERR0_SHIFT)                      /*!< DMA_ERR: ERR0 Mask                      */
#define DMA_ERR_ERR0_SHIFT                       0                                                   /*!< DMA_ERR: ERR0 Position                  */
#define DMA_ERR_ERR1_MASK                        (0x01UL << DMA_ERR_ERR1_SHIFT)                      /*!< DMA_ERR: ERR1 Mask                      */
#define DMA_ERR_ERR1_SHIFT                       1                                                   /*!< DMA_ERR: ERR1 Position                  */
#define DMA_ERR_ERR2_MASK                        (0x01UL << DMA_ERR_ERR2_SHIFT)                      /*!< DMA_ERR: ERR2 Mask                      */
#define DMA_ERR_ERR2_SHIFT                       2                                                   /*!< DMA_ERR: ERR2 Position                  */
#define DMA_ERR_ERR3_MASK                        (0x01UL << DMA_ERR_ERR3_SHIFT)                      /*!< DMA_ERR: ERR3 Mask                      */
#define DMA_ERR_ERR3_SHIFT                       3                                                   /*!< DMA_ERR: ERR3 Position                  */
#define DMA_ERR_ERR4_MASK                        (0x01UL << DMA_ERR_ERR4_SHIFT)                      /*!< DMA_ERR: ERR4 Mask                      */
#define DMA_ERR_ERR4_SHIFT                       4                                                   /*!< DMA_ERR: ERR4 Position                  */
#define DMA_ERR_ERR5_MASK                        (0x01UL << DMA_ERR_ERR5_SHIFT)                      /*!< DMA_ERR: ERR5 Mask                      */
#define DMA_ERR_ERR5_SHIFT                       5                                                   /*!< DMA_ERR: ERR5 Position                  */
#define DMA_ERR_ERR6_MASK                        (0x01UL << DMA_ERR_ERR6_SHIFT)                      /*!< DMA_ERR: ERR6 Mask                      */
#define DMA_ERR_ERR6_SHIFT                       6                                                   /*!< DMA_ERR: ERR6 Position                  */
#define DMA_ERR_ERR7_MASK                        (0x01UL << DMA_ERR_ERR7_SHIFT)                      /*!< DMA_ERR: ERR7 Mask                      */
#define DMA_ERR_ERR7_SHIFT                       7                                                   /*!< DMA_ERR: ERR7 Position                  */
#define DMA_ERR_ERR8_MASK                        (0x01UL << DMA_ERR_ERR8_SHIFT)                      /*!< DMA_ERR: ERR8 Mask                      */
#define DMA_ERR_ERR8_SHIFT                       8                                                   /*!< DMA_ERR: ERR8 Position                  */
#define DMA_ERR_ERR9_MASK                        (0x01UL << DMA_ERR_ERR9_SHIFT)                      /*!< DMA_ERR: ERR9 Mask                      */
#define DMA_ERR_ERR9_SHIFT                       9                                                   /*!< DMA_ERR: ERR9 Position                  */
#define DMA_ERR_ERR10_MASK                       (0x01UL << DMA_ERR_ERR10_SHIFT)                     /*!< DMA_ERR: ERR10 Mask                     */
#define DMA_ERR_ERR10_SHIFT                      10                                                  /*!< DMA_ERR: ERR10 Position                 */
#define DMA_ERR_ERR11_MASK                       (0x01UL << DMA_ERR_ERR11_SHIFT)                     /*!< DMA_ERR: ERR11 Mask                     */
#define DMA_ERR_ERR11_SHIFT                      11                                                  /*!< DMA_ERR: ERR11 Position                 */
#define DMA_ERR_ERR12_MASK                       (0x01UL << DMA_ERR_ERR12_SHIFT)                     /*!< DMA_ERR: ERR12 Mask                     */
#define DMA_ERR_ERR12_SHIFT                      12                                                  /*!< DMA_ERR: ERR12 Position                 */
#define DMA_ERR_ERR13_MASK                       (0x01UL << DMA_ERR_ERR13_SHIFT)                     /*!< DMA_ERR: ERR13 Mask                     */
#define DMA_ERR_ERR13_SHIFT                      13                                                  /*!< DMA_ERR: ERR13 Position                 */
#define DMA_ERR_ERR14_MASK                       (0x01UL << DMA_ERR_ERR14_SHIFT)                     /*!< DMA_ERR: ERR14 Mask                     */
#define DMA_ERR_ERR14_SHIFT                      14                                                  /*!< DMA_ERR: ERR14 Position                 */
#define DMA_ERR_ERR15_MASK                       (0x01UL << DMA_ERR_ERR15_SHIFT)                     /*!< DMA_ERR: ERR15 Mask                     */
#define DMA_ERR_ERR15_SHIFT                      15                                                  /*!< DMA_ERR: ERR15 Position                 */
/* ------- HRS Bit Fields                           ------ */
#define DMA_HRS_HRS0_MASK                        (0x01UL << DMA_HRS_HRS0_SHIFT)                      /*!< DMA_HRS: HRS0 Mask                      */
#define DMA_HRS_HRS0_SHIFT                       0                                                   /*!< DMA_HRS: HRS0 Position                  */
#define DMA_HRS_HRS1_MASK                        (0x01UL << DMA_HRS_HRS1_SHIFT)                      /*!< DMA_HRS: HRS1 Mask                      */
#define DMA_HRS_HRS1_SHIFT                       1                                                   /*!< DMA_HRS: HRS1 Position                  */
#define DMA_HRS_HRS2_MASK                        (0x01UL << DMA_HRS_HRS2_SHIFT)                      /*!< DMA_HRS: HRS2 Mask                      */
#define DMA_HRS_HRS2_SHIFT                       2                                                   /*!< DMA_HRS: HRS2 Position                  */
#define DMA_HRS_HRS3_MASK                        (0x01UL << DMA_HRS_HRS3_SHIFT)                      /*!< DMA_HRS: HRS3 Mask                      */
#define DMA_HRS_HRS3_SHIFT                       3                                                   /*!< DMA_HRS: HRS3 Position                  */
#define DMA_HRS_HRS4_MASK                        (0x01UL << DMA_HRS_HRS4_SHIFT)                      /*!< DMA_HRS: HRS4 Mask                      */
#define DMA_HRS_HRS4_SHIFT                       4                                                   /*!< DMA_HRS: HRS4 Position                  */
#define DMA_HRS_HRS5_MASK                        (0x01UL << DMA_HRS_HRS5_SHIFT)                      /*!< DMA_HRS: HRS5 Mask                      */
#define DMA_HRS_HRS5_SHIFT                       5                                                   /*!< DMA_HRS: HRS5 Position                  */
#define DMA_HRS_HRS6_MASK                        (0x01UL << DMA_HRS_HRS6_SHIFT)                      /*!< DMA_HRS: HRS6 Mask                      */
#define DMA_HRS_HRS6_SHIFT                       6                                                   /*!< DMA_HRS: HRS6 Position                  */
#define DMA_HRS_HRS7_MASK                        (0x01UL << DMA_HRS_HRS7_SHIFT)                      /*!< DMA_HRS: HRS7 Mask                      */
#define DMA_HRS_HRS7_SHIFT                       7                                                   /*!< DMA_HRS: HRS7 Position                  */
#define DMA_HRS_HRS8_MASK                        (0x01UL << DMA_HRS_HRS8_SHIFT)                      /*!< DMA_HRS: HRS8 Mask                      */
#define DMA_HRS_HRS8_SHIFT                       8                                                   /*!< DMA_HRS: HRS8 Position                  */
#define DMA_HRS_HRS9_MASK                        (0x01UL << DMA_HRS_HRS9_SHIFT)                      /*!< DMA_HRS: HRS9 Mask                      */
#define DMA_HRS_HRS9_SHIFT                       9                                                   /*!< DMA_HRS: HRS9 Position                  */
#define DMA_HRS_HRS10_MASK                       (0x01UL << DMA_HRS_HRS10_SHIFT)                     /*!< DMA_HRS: HRS10 Mask                     */
#define DMA_HRS_HRS10_SHIFT                      10                                                  /*!< DMA_HRS: HRS10 Position                 */
#define DMA_HRS_HRS11_MASK                       (0x01UL << DMA_HRS_HRS11_SHIFT)                     /*!< DMA_HRS: HRS11 Mask                     */
#define DMA_HRS_HRS11_SHIFT                      11                                                  /*!< DMA_HRS: HRS11 Position                 */
#define DMA_HRS_HRS12_MASK                       (0x01UL << DMA_HRS_HRS12_SHIFT)                     /*!< DMA_HRS: HRS12 Mask                     */
#define DMA_HRS_HRS12_SHIFT                      12                                                  /*!< DMA_HRS: HRS12 Position                 */
#define DMA_HRS_HRS13_MASK                       (0x01UL << DMA_HRS_HRS13_SHIFT)                     /*!< DMA_HRS: HRS13 Mask                     */
#define DMA_HRS_HRS13_SHIFT                      13                                                  /*!< DMA_HRS: HRS13 Position                 */
#define DMA_HRS_HRS14_MASK                       (0x01UL << DMA_HRS_HRS14_SHIFT)                     /*!< DMA_HRS: HRS14 Mask                     */
#define DMA_HRS_HRS14_SHIFT                      14                                                  /*!< DMA_HRS: HRS14 Position                 */
#define DMA_HRS_HRS15_MASK                       (0x01UL << DMA_HRS_HRS15_SHIFT)                     /*!< DMA_HRS: HRS15 Mask                     */
#define DMA_HRS_HRS15_SHIFT                      15                                                  /*!< DMA_HRS: HRS15 Position                 */
/* ------- EARS Bit Fields                          ------ */
#define DMA_EARS_EDREQ_0_MASK                    (0x01UL << DMA_EARS_EDREQ_0_SHIFT)                  /*!< DMA_EARS: EDREQ_0 Mask                  */
#define DMA_EARS_EDREQ_0_SHIFT                   0                                                   /*!< DMA_EARS: EDREQ_0 Position              */
#define DMA_EARS_EDREQ_1_MASK                    (0x01UL << DMA_EARS_EDREQ_1_SHIFT)                  /*!< DMA_EARS: EDREQ_1 Mask                  */
#define DMA_EARS_EDREQ_1_SHIFT                   1                                                   /*!< DMA_EARS: EDREQ_1 Position              */
#define DMA_EARS_EDREQ_2_MASK                    (0x01UL << DMA_EARS_EDREQ_2_SHIFT)                  /*!< DMA_EARS: EDREQ_2 Mask                  */
#define DMA_EARS_EDREQ_2_SHIFT                   2                                                   /*!< DMA_EARS: EDREQ_2 Position              */
#define DMA_EARS_EDREQ_3_MASK                    (0x01UL << DMA_EARS_EDREQ_3_SHIFT)                  /*!< DMA_EARS: EDREQ_3 Mask                  */
#define DMA_EARS_EDREQ_3_SHIFT                   3                                                   /*!< DMA_EARS: EDREQ_3 Position              */
/* ------- DCHPRI Bit Fields                        ------ */
#define DMA_DCHPRI_CHPRI_MASK                    (0x0FUL << DMA_DCHPRI_CHPRI_SHIFT)                  /*!< DMA_DCHPRI: CHPRI Mask                  */
#define DMA_DCHPRI_CHPRI_SHIFT                   0                                                   /*!< DMA_DCHPRI: CHPRI Position              */
#define DMA_DCHPRI_CHPRI(x)                      (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_CHPRI_SHIFT))&DMA_DCHPRI_CHPRI_MASK) /*!< DMA_DCHPRI                              */
#define DMA_DCHPRI_DPA_MASK                      (0x01UL << DMA_DCHPRI_DPA_SHIFT)                    /*!< DMA_DCHPRI: DPA Mask                    */
#define DMA_DCHPRI_DPA_SHIFT                     6                                                   /*!< DMA_DCHPRI: DPA Position                */
#define DMA_DCHPRI_ECP_MASK                      (0x01UL << DMA_DCHPRI_ECP_SHIFT)                    /*!< DMA_DCHPRI: ECP Mask                    */
#define DMA_DCHPRI_ECP_SHIFT                     7                                                   /*!< DMA_DCHPRI: ECP Position                */
/* ------- SADDR Bit Fields                         ------ */
#define DMA_SADDR_SADDR_MASK                     (0xFFFFFFFFUL << DMA_SADDR_SADDR_SHIFT)             /*!< DMA_SADDR: SADDR Mask                   */
#define DMA_SADDR_SADDR_SHIFT                    0                                                   /*!< DMA_SADDR: SADDR Position               */
#define DMA_SADDR_SADDR(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_SADDR_SADDR_SHIFT))&DMA_SADDR_SADDR_MASK) /*!< DMA_SADDR                               */
/* ------- SOFF Bit Fields                          ------ */
#define DMA_SOFF_SOFF_MASK                       (0xFFFFUL << DMA_SOFF_SOFF_SHIFT)                   /*!< DMA_SOFF: SOFF Mask                     */
#define DMA_SOFF_SOFF_SHIFT                      0                                                   /*!< DMA_SOFF: SOFF Position                 */
#define DMA_SOFF_SOFF(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_SOFF_SOFF_SHIFT))&DMA_SOFF_SOFF_MASK) /*!< DMA_SOFF                                */
/* ------- ATTR Bit Fields                          ------ */
#define DMA_ATTR_DSIZE_MASK                      (0x07UL << DMA_ATTR_DSIZE_SHIFT)                    /*!< DMA_ATTR: DSIZE Mask                    */
#define DMA_ATTR_DSIZE_SHIFT                     0                                                   /*!< DMA_ATTR: DSIZE Position                */
#define DMA_ATTR_DSIZE(x)                        (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_DSIZE_SHIFT))&DMA_ATTR_DSIZE_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_DMOD_MASK                       (0x1FUL << DMA_ATTR_DMOD_SHIFT)                     /*!< DMA_ATTR: DMOD Mask                     */
#define DMA_ATTR_DMOD_SHIFT                      3                                                   /*!< DMA_ATTR: DMOD Position                 */
#define DMA_ATTR_DMOD(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_DMOD_SHIFT))&DMA_ATTR_DMOD_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_SSIZE_MASK                      (0x07UL << DMA_ATTR_SSIZE_SHIFT)                    /*!< DMA_ATTR: SSIZE Mask                    */
#define DMA_ATTR_SSIZE_SHIFT                     8                                                   /*!< DMA_ATTR: SSIZE Position                */
#define DMA_ATTR_SSIZE(x)                        (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_SSIZE_SHIFT))&DMA_ATTR_SSIZE_MASK) /*!< DMA_ATTR                                */
#define DMA_ATTR_SMOD_MASK                       (0x1FUL << DMA_ATTR_SMOD_SHIFT)                     /*!< DMA_ATTR: SMOD Mask                     */
#define DMA_ATTR_SMOD_SHIFT                      11                                                  /*!< DMA_ATTR: SMOD Position                 */
#define DMA_ATTR_SMOD(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_ATTR_SMOD_SHIFT))&DMA_ATTR_SMOD_MASK) /*!< DMA_ATTR                                */
/* ------- NBYTES_MLNO Bit Fields                   ------ */
#define DMA_NBYTES_MLNO_NBYTES_MASK              (0xFFFFFFFFUL << DMA_NBYTES_MLNO_NBYTES_SHIFT)      /*!< DMA_NBYTES_MLNO: NBYTES Mask            */
#define DMA_NBYTES_MLNO_NBYTES_SHIFT             0                                                   /*!< DMA_NBYTES_MLNO: NBYTES Position        */
#define DMA_NBYTES_MLNO_NBYTES(x)                (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLNO_NBYTES_SHIFT))&DMA_NBYTES_MLNO_NBYTES_MASK) /*!< DMA_NBYTES_MLNO                         */
/* ------- NBYTES_MLOFFNO Bit Fields                ------ */
#define DMA_NBYTES_MLOFFNO_NBYTES_MASK           (0x3FFFFFFFUL << DMA_NBYTES_MLOFFNO_NBYTES_SHIFT)   /*!< DMA_NBYTES_MLOFFNO: NBYTES Mask         */
#define DMA_NBYTES_MLOFFNO_NBYTES_SHIFT          0                                                   /*!< DMA_NBYTES_MLOFFNO: NBYTES Position     */
#define DMA_NBYTES_MLOFFNO_NBYTES(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFNO_NBYTES_SHIFT))&DMA_NBYTES_MLOFFNO_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFNO                      */
#define DMA_NBYTES_MLOFFNO_DMLOE_MASK            (0x01UL << DMA_NBYTES_MLOFFNO_DMLOE_SHIFT)          /*!< DMA_NBYTES_MLOFFNO: DMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_DMLOE_SHIFT           30                                                  /*!< DMA_NBYTES_MLOFFNO: DMLOE Position      */
#define DMA_NBYTES_MLOFFNO_SMLOE_MASK            (0x01UL << DMA_NBYTES_MLOFFNO_SMLOE_SHIFT)          /*!< DMA_NBYTES_MLOFFNO: SMLOE Mask          */
#define DMA_NBYTES_MLOFFNO_SMLOE_SHIFT           31                                                  /*!< DMA_NBYTES_MLOFFNO: SMLOE Position      */
/* ------- NBYTES_MLOFFYES Bit Fields               ------ */
#define DMA_NBYTES_MLOFFYES_NBYTES_MASK          (0x3FFUL << DMA_NBYTES_MLOFFYES_NBYTES_SHIFT)       /*!< DMA_NBYTES_MLOFFYES: NBYTES Mask        */
#define DMA_NBYTES_MLOFFYES_NBYTES_SHIFT         0                                                   /*!< DMA_NBYTES_MLOFFYES: NBYTES Position    */
#define DMA_NBYTES_MLOFFYES_NBYTES(x)            (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_NBYTES_SHIFT))&DMA_NBYTES_MLOFFYES_NBYTES_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_MLOFF_MASK           (0xFFFFFUL << DMA_NBYTES_MLOFFYES_MLOFF_SHIFT)      /*!< DMA_NBYTES_MLOFFYES: MLOFF Mask         */
#define DMA_NBYTES_MLOFFYES_MLOFF_SHIFT          10                                                  /*!< DMA_NBYTES_MLOFFYES: MLOFF Position     */
#define DMA_NBYTES_MLOFFYES_MLOFF(x)             (((uint32_t)(((uint32_t)(x))<<DMA_NBYTES_MLOFFYES_MLOFF_SHIFT))&DMA_NBYTES_MLOFFYES_MLOFF_MASK) /*!< DMA_NBYTES_MLOFFYES                     */
#define DMA_NBYTES_MLOFFYES_DMLOE_MASK           (0x01UL << DMA_NBYTES_MLOFFYES_DMLOE_SHIFT)         /*!< DMA_NBYTES_MLOFFYES: DMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_DMLOE_SHIFT          30                                                  /*!< DMA_NBYTES_MLOFFYES: DMLOE Position     */
#define DMA_NBYTES_MLOFFYES_SMLOE_MASK           (0x01UL << DMA_NBYTES_MLOFFYES_SMLOE_SHIFT)         /*!< DMA_NBYTES_MLOFFYES: SMLOE Mask         */
#define DMA_NBYTES_MLOFFYES_SMLOE_SHIFT          31                                                  /*!< DMA_NBYTES_MLOFFYES: SMLOE Position     */
/* ------- SLAST Bit Fields                         ------ */
#define DMA_SLAST_SLAST_MASK                     (0xFFFFFFFFUL << DMA_SLAST_SLAST_SHIFT)             /*!< DMA_SLAST: SLAST Mask                   */
#define DMA_SLAST_SLAST_SHIFT                    0                                                   /*!< DMA_SLAST: SLAST Position               */
#define DMA_SLAST_SLAST(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_SLAST_SLAST_SHIFT))&DMA_SLAST_SLAST_MASK) /*!< DMA_SLAST                               */
/* ------- DADDR Bit Fields                         ------ */
#define DMA_DADDR_DADDR_MASK                     (0xFFFFFFFFUL << DMA_DADDR_DADDR_SHIFT)             /*!< DMA_DADDR: DADDR Mask                   */
#define DMA_DADDR_DADDR_SHIFT                    0                                                   /*!< DMA_DADDR: DADDR Position               */
#define DMA_DADDR_DADDR(x)                       (((uint32_t)(((uint32_t)(x))<<DMA_DADDR_DADDR_SHIFT))&DMA_DADDR_DADDR_MASK) /*!< DMA_DADDR                               */
/* ------- DOFF Bit Fields                          ------ */
#define DMA_DOFF_DOFF_MASK                       (0xFFFFUL << DMA_DOFF_DOFF_SHIFT)                   /*!< DMA_DOFF: DOFF Mask                     */
#define DMA_DOFF_DOFF_SHIFT                      0                                                   /*!< DMA_DOFF: DOFF Position                 */
#define DMA_DOFF_DOFF(x)                         (((uint16_t)(((uint16_t)(x))<<DMA_DOFF_DOFF_SHIFT))&DMA_DOFF_DOFF_MASK) /*!< DMA_DOFF                                */
/* ------- CITER_ELINKNO Bit Fields                 ------ */
#define DMA_CITER_ELINKNO_CITER_MASK             (0x7FFFUL << DMA_CITER_ELINKNO_CITER_SHIFT)         /*!< DMA_CITER_ELINKNO: CITER Mask           */
#define DMA_CITER_ELINKNO_CITER_SHIFT            0                                                   /*!< DMA_CITER_ELINKNO: CITER Position       */
#define DMA_CITER_ELINKNO_CITER(x)               (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKNO_CITER_SHIFT))&DMA_CITER_ELINKNO_CITER_MASK) /*!< DMA_CITER_ELINKNO                       */
#define DMA_CITER_ELINKNO_ELINK_MASK             (0x01UL << DMA_CITER_ELINKNO_ELINK_SHIFT)           /*!< DMA_CITER_ELINKNO: ELINK Mask           */
#define DMA_CITER_ELINKNO_ELINK_SHIFT            15                                                  /*!< DMA_CITER_ELINKNO: ELINK Position       */
/* ------- CITER_ELINKYES Bit Fields                ------ */
#define DMA_CITER_ELINKYES_CITER_MASK            (0x1FFUL << DMA_CITER_ELINKYES_CITER_SHIFT)         /*!< DMA_CITER_ELINKYES: CITER Mask          */
#define DMA_CITER_ELINKYES_CITER_SHIFT           0                                                   /*!< DMA_CITER_ELINKYES: CITER Position      */
#define DMA_CITER_ELINKYES_CITER(x)              (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKYES_CITER_SHIFT))&DMA_CITER_ELINKYES_CITER_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_LINKCH_MASK           (0x0FUL << DMA_CITER_ELINKYES_LINKCH_SHIFT)         /*!< DMA_CITER_ELINKYES: LINKCH Mask         */
#define DMA_CITER_ELINKYES_LINKCH_SHIFT          9                                                   /*!< DMA_CITER_ELINKYES: LINKCH Position     */
#define DMA_CITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x))<<DMA_CITER_ELINKYES_LINKCH_SHIFT))&DMA_CITER_ELINKYES_LINKCH_MASK) /*!< DMA_CITER_ELINKYES                      */
#define DMA_CITER_ELINKYES_ELINK_MASK            (0x01UL << DMA_CITER_ELINKYES_ELINK_SHIFT)          /*!< DMA_CITER_ELINKYES: ELINK Mask          */
#define DMA_CITER_ELINKYES_ELINK_SHIFT           15                                                  /*!< DMA_CITER_ELINKYES: ELINK Position      */
/* ------- DLAST_SGA Bit Fields                     ------ */
#define DMA_DLAST_SGA_DLASTSGA_MASK              (0xFFFFFFFFUL << DMA_DLAST_SGA_DLASTSGA_SHIFT)      /*!< DMA_DLAST_SGA: DLASTSGA Mask            */
#define DMA_DLAST_SGA_DLASTSGA_SHIFT             0                                                   /*!< DMA_DLAST_SGA: DLASTSGA Position        */
#define DMA_DLAST_SGA_DLASTSGA(x)                (((uint32_t)(((uint32_t)(x))<<DMA_DLAST_SGA_DLASTSGA_SHIFT))&DMA_DLAST_SGA_DLASTSGA_MASK) /*!< DMA_DLAST_SGA                           */
/* ------- CSR Bit Fields                           ------ */
#define DMA_CSR_START_MASK                       (0x01UL << DMA_CSR_START_SHIFT)                     /*!< DMA_CSR: START Mask                     */
#define DMA_CSR_START_SHIFT                      0                                                   /*!< DMA_CSR: START Position                 */
#define DMA_CSR_INTMAJOR_MASK                    (0x01UL << DMA_CSR_INTMAJOR_SHIFT)                  /*!< DMA_CSR: INTMAJOR Mask                  */
#define DMA_CSR_INTMAJOR_SHIFT                   1                                                   /*!< DMA_CSR: INTMAJOR Position              */
#define DMA_CSR_INTHALF_MASK                     (0x01UL << DMA_CSR_INTHALF_SHIFT)                   /*!< DMA_CSR: INTHALF Mask                   */
#define DMA_CSR_INTHALF_SHIFT                    2                                                   /*!< DMA_CSR: INTHALF Position               */
#define DMA_CSR_DREQ_MASK                        (0x01UL << DMA_CSR_DREQ_SHIFT)                      /*!< DMA_CSR: DREQ Mask                      */
#define DMA_CSR_DREQ_SHIFT                       3                                                   /*!< DMA_CSR: DREQ Position                  */
#define DMA_CSR_ESG_MASK                         (0x01UL << DMA_CSR_ESG_SHIFT)                       /*!< DMA_CSR: ESG Mask                       */
#define DMA_CSR_ESG_SHIFT                        4                                                   /*!< DMA_CSR: ESG Position                   */
#define DMA_CSR_MAJORELINK_MASK                  (0x01UL << DMA_CSR_MAJORELINK_SHIFT)                /*!< DMA_CSR: MAJORELINK Mask                */
#define DMA_CSR_MAJORELINK_SHIFT                 5                                                   /*!< DMA_CSR: MAJORELINK Position            */
#define DMA_CSR_ACTIVE_MASK                      (0x01UL << DMA_CSR_ACTIVE_SHIFT)                    /*!< DMA_CSR: ACTIVE Mask                    */
#define DMA_CSR_ACTIVE_SHIFT                     6                                                   /*!< DMA_CSR: ACTIVE Position                */
#define DMA_CSR_DONE_MASK                        (0x01UL << DMA_CSR_DONE_SHIFT)                      /*!< DMA_CSR: DONE Mask                      */
#define DMA_CSR_DONE_SHIFT                       7                                                   /*!< DMA_CSR: DONE Position                  */
#define DMA_CSR_MAJORLINKCH_MASK                 (0x0FUL << DMA_CSR_MAJORLINKCH_SHIFT)               /*!< DMA_CSR: MAJORLINKCH Mask               */
#define DMA_CSR_MAJORLINKCH_SHIFT                8                                                   /*!< DMA_CSR: MAJORLINKCH Position           */
#define DMA_CSR_MAJORLINKCH(x)                   (((uint16_t)(((uint16_t)(x))<<DMA_CSR_MAJORLINKCH_SHIFT))&DMA_CSR_MAJORLINKCH_MASK) /*!< DMA_CSR                                 */
#define DMA_CSR_BWC_MASK                         (0x03UL << DMA_CSR_BWC_SHIFT)                       /*!< DMA_CSR: BWC Mask                       */
#define DMA_CSR_BWC_SHIFT                        14                                                  /*!< DMA_CSR: BWC Position                   */
#define DMA_CSR_BWC(x)                           (((uint16_t)(((uint16_t)(x))<<DMA_CSR_BWC_SHIFT))&DMA_CSR_BWC_MASK) /*!< DMA_CSR                                 */
/* ------- BITER_ELINKNO Bit Fields                 ------ */
#define DMA_BITER_ELINKNO_BITER_MASK             (0x7FFFUL << DMA_BITER_ELINKNO_BITER_SHIFT)         /*!< DMA_BITER_ELINKNO: BITER Mask           */
#define DMA_BITER_ELINKNO_BITER_SHIFT            0                                                   /*!< DMA_BITER_ELINKNO: BITER Position       */
#define DMA_BITER_ELINKNO_BITER(x)               (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKNO_BITER_SHIFT))&DMA_BITER_ELINKNO_BITER_MASK) /*!< DMA_BITER_ELINKNO                       */
#define DMA_BITER_ELINKNO_ELINK_MASK             (0x01UL << DMA_BITER_ELINKNO_ELINK_SHIFT)           /*!< DMA_BITER_ELINKNO: ELINK Mask           */
#define DMA_BITER_ELINKNO_ELINK_SHIFT            15                                                  /*!< DMA_BITER_ELINKNO: ELINK Position       */
/* ------- BITER_ELINKYES Bit Fields                ------ */
#define DMA_BITER_ELINKYES_BITER_MASK            (0x1FFUL << DMA_BITER_ELINKYES_BITER_SHIFT)         /*!< DMA_BITER_ELINKYES: BITER Mask          */
#define DMA_BITER_ELINKYES_BITER_SHIFT           0                                                   /*!< DMA_BITER_ELINKYES: BITER Position      */
#define DMA_BITER_ELINKYES_BITER(x)              (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKYES_BITER_SHIFT))&DMA_BITER_ELINKYES_BITER_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_LINKCH_MASK           (0x0FUL << DMA_BITER_ELINKYES_LINKCH_SHIFT)         /*!< DMA_BITER_ELINKYES: LINKCH Mask         */
#define DMA_BITER_ELINKYES_LINKCH_SHIFT          9                                                   /*!< DMA_BITER_ELINKYES: LINKCH Position     */
#define DMA_BITER_ELINKYES_LINKCH(x)             (((uint16_t)(((uint16_t)(x))<<DMA_BITER_ELINKYES_LINKCH_SHIFT))&DMA_BITER_ELINKYES_LINKCH_MASK) /*!< DMA_BITER_ELINKYES                      */
#define DMA_BITER_ELINKYES_ELINK_MASK            (0x01UL << DMA_BITER_ELINKYES_ELINK_SHIFT)          /*!< DMA_BITER_ELINKYES: ELINK Mask          */
#define DMA_BITER_ELINKYES_ELINK_SHIFT           15                                                  /*!< DMA_BITER_ELINKYES: ELINK Position      */

/* DMA - Peripheral instance base addresses */
#define DMA_BasePtr                    0x40008000UL
#define DMA                            ((DMA_Type *) DMA_BasePtr)
#define DMA_BASE_PTR                   (DMA)

/* ================================================================================ */
/* ================           DMAMUX (file:DMAMUX_16CH)            ================ */
/* ================================================================================ */

/**
 * @brief DMA channel multiplexor
 */
typedef struct {                                /*!<       DMAMUX Structure                                             */
   __IO uint8_t   CHCFG[16];                    /*!< 0000: Channel Configuration Register                               */
} DMAMUX_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CHCFG Bit Fields                         ------ */
#define DMAMUX_CHCFG_SOURCE_MASK                 (0x3FUL << DMAMUX_CHCFG_SOURCE_SHIFT)               /*!< DMAMUX_CHCFG: SOURCE Mask               */
#define DMAMUX_CHCFG_SOURCE_SHIFT                0                                                   /*!< DMAMUX_CHCFG: SOURCE Position           */
#define DMAMUX_CHCFG_SOURCE(x)                   (((uint8_t)(((uint8_t)(x))<<DMAMUX_CHCFG_SOURCE_SHIFT))&DMAMUX_CHCFG_SOURCE_MASK) /*!< DMAMUX_CHCFG                            */
#define DMAMUX_CHCFG_TRIG_MASK                   (0x01UL << DMAMUX_CHCFG_TRIG_SHIFT)                 /*!< DMAMUX_CHCFG: TRIG Mask                 */
#define DMAMUX_CHCFG_TRIG_SHIFT                  6                                                   /*!< DMAMUX_CHCFG: TRIG Position             */
#define DMAMUX_CHCFG_ENBL_MASK                   (0x01UL << DMAMUX_CHCFG_ENBL_SHIFT)                 /*!< DMAMUX_CHCFG: ENBL Mask                 */
#define DMAMUX_CHCFG_ENBL_SHIFT                  7                                                   /*!< DMAMUX_CHCFG: ENBL Position             */

/* DMAMUX - Peripheral instance base addresses */
#define DMAMUX_BasePtr                 0x40021000UL
#define DMAMUX                         ((DMAMUX_Type *) DMAMUX_BasePtr)
#define DMAMUX_BASE_PTR                (DMAMUX)

/* ================================================================================ */
/* ================           ETF (file:ETF_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Embedded Trace Funnel
 */
typedef struct {                                /*!<       ETF Structure                                                */
   __IO uint32_t  FCR;                          /*!< 0000: Funnel Control Register                                      */
   __IO uint32_t  PCR;                          /*!< 0004: Priority Control Register                                    */
   __I  uint32_t  RESERVED0[953];               /*!< 0008:                                                              */
   __IO uint32_t  ITATBDATA0;                   /*!< 0EEC: Integration Register, ITATBDATA0                             */
   __IO uint32_t  ITATBCTR2;                    /*!< 0EF0: Integration Register, ITATBCTR2                              */
   __IO uint32_t  ITATBCTR1;                    /*!< 0EF4: Integration Register, ITATBCTR1                              */
   __IO uint32_t  ITATBCTR0;                    /*!< 0EF8: Integration Register, ITATBCTR0                              */
   __I  uint32_t  RESERVED1;                    /*!< 0EFC:                                                              */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED2[39];                /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED3[2];                 /*!< 0FA8:                                                              */
   __O  uint32_t  LAR;                          /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LSR;                          /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTATUS;                   /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  RESERVED4[3];                 /*!< 0FBC:                                                              */
   __I  uint32_t  DEVID;                        /*!< 0FC8: Device ID Register                                           */
   __I  uint32_t  DEVTYPE;                      /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PIDR4;                        /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PIDR5;                        /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PIDR6;                        /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PIDR7;                        /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PIDR0;                        /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PIDR1;                        /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PIDR2;                        /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PIDR3;                        /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CIDR0;                        /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CIDR1;                        /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CIDR2;                        /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CIDR3;                        /*!< 0FFC: Component Identification Register 3                          */
} ETF_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ETF' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- FCR Bit Fields                           ------ */
#define ETF_FCR_EnS0_MASK                        (0x01UL << ETF_FCR_EnS0_SHIFT)                      /*!< ETF_FCR: EnS0 Mask                      */
#define ETF_FCR_EnS0_SHIFT                       0                                                   /*!< ETF_FCR: EnS0 Position                  */
#define ETF_FCR_EnS1_MASK                        (0x01UL << ETF_FCR_EnS1_SHIFT)                      /*!< ETF_FCR: EnS1 Mask                      */
#define ETF_FCR_EnS1_SHIFT                       1                                                   /*!< ETF_FCR: EnS1 Position                  */
#define ETF_FCR_EnS2_MASK                        (0x01UL << ETF_FCR_EnS2_SHIFT)                      /*!< ETF_FCR: EnS2 Mask                      */
#define ETF_FCR_EnS2_SHIFT                       2                                                   /*!< ETF_FCR: EnS2 Position                  */
#define ETF_FCR_EnS3_MASK                        (0x01UL << ETF_FCR_EnS3_SHIFT)                      /*!< ETF_FCR: EnS3 Mask                      */
#define ETF_FCR_EnS3_SHIFT                       3                                                   /*!< ETF_FCR: EnS3 Position                  */
#define ETF_FCR_EnS4_MASK                        (0x01UL << ETF_FCR_EnS4_SHIFT)                      /*!< ETF_FCR: EnS4 Mask                      */
#define ETF_FCR_EnS4_SHIFT                       4                                                   /*!< ETF_FCR: EnS4 Position                  */
#define ETF_FCR_EnS5_MASK                        (0x01UL << ETF_FCR_EnS5_SHIFT)                      /*!< ETF_FCR: EnS5 Mask                      */
#define ETF_FCR_EnS5_SHIFT                       5                                                   /*!< ETF_FCR: EnS5 Position                  */
#define ETF_FCR_EnS6_MASK                        (0x01UL << ETF_FCR_EnS6_SHIFT)                      /*!< ETF_FCR: EnS6 Mask                      */
#define ETF_FCR_EnS6_SHIFT                       6                                                   /*!< ETF_FCR: EnS6 Position                  */
#define ETF_FCR_EnS7_MASK                        (0x01UL << ETF_FCR_EnS7_SHIFT)                      /*!< ETF_FCR: EnS7 Mask                      */
#define ETF_FCR_EnS7_SHIFT                       7                                                   /*!< ETF_FCR: EnS7 Position                  */
#define ETF_FCR_HT_MASK                          (0x0FUL << ETF_FCR_HT_SHIFT)                        /*!< ETF_FCR: HT Mask                        */
#define ETF_FCR_HT_SHIFT                         8                                                   /*!< ETF_FCR: HT Position                    */
#define ETF_FCR_HT(x)                            (((uint32_t)(((uint32_t)(x))<<ETF_FCR_HT_SHIFT))&ETF_FCR_HT_MASK) /*!< ETF_FCR                                 */
/* ------- PCR Bit Fields                           ------ */
#define ETF_PCR_PriPort0_MASK                    (0x07UL << ETF_PCR_PriPort0_SHIFT)                  /*!< ETF_PCR: PriPort0 Mask                  */
#define ETF_PCR_PriPort0_SHIFT                   0                                                   /*!< ETF_PCR: PriPort0 Position              */
#define ETF_PCR_PriPort0(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort0_SHIFT))&ETF_PCR_PriPort0_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort1_MASK                    (0x07UL << ETF_PCR_PriPort1_SHIFT)                  /*!< ETF_PCR: PriPort1 Mask                  */
#define ETF_PCR_PriPort1_SHIFT                   3                                                   /*!< ETF_PCR: PriPort1 Position              */
#define ETF_PCR_PriPort1(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort1_SHIFT))&ETF_PCR_PriPort1_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort2_MASK                    (0x07UL << ETF_PCR_PriPort2_SHIFT)                  /*!< ETF_PCR: PriPort2 Mask                  */
#define ETF_PCR_PriPort2_SHIFT                   6                                                   /*!< ETF_PCR: PriPort2 Position              */
#define ETF_PCR_PriPort2(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort2_SHIFT))&ETF_PCR_PriPort2_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort3_MASK                    (0x07UL << ETF_PCR_PriPort3_SHIFT)                  /*!< ETF_PCR: PriPort3 Mask                  */
#define ETF_PCR_PriPort3_SHIFT                   9                                                   /*!< ETF_PCR: PriPort3 Position              */
#define ETF_PCR_PriPort3(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort3_SHIFT))&ETF_PCR_PriPort3_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort4_MASK                    (0x07UL << ETF_PCR_PriPort4_SHIFT)                  /*!< ETF_PCR: PriPort4 Mask                  */
#define ETF_PCR_PriPort4_SHIFT                   12                                                  /*!< ETF_PCR: PriPort4 Position              */
#define ETF_PCR_PriPort4(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort4_SHIFT))&ETF_PCR_PriPort4_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort5_MASK                    (0x07UL << ETF_PCR_PriPort5_SHIFT)                  /*!< ETF_PCR: PriPort5 Mask                  */
#define ETF_PCR_PriPort5_SHIFT                   15                                                  /*!< ETF_PCR: PriPort5 Position              */
#define ETF_PCR_PriPort5(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort5_SHIFT))&ETF_PCR_PriPort5_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort6_MASK                    (0x07UL << ETF_PCR_PriPort6_SHIFT)                  /*!< ETF_PCR: PriPort6 Mask                  */
#define ETF_PCR_PriPort6_SHIFT                   18                                                  /*!< ETF_PCR: PriPort6 Position              */
#define ETF_PCR_PriPort6(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort6_SHIFT))&ETF_PCR_PriPort6_MASK) /*!< ETF_PCR                                 */
#define ETF_PCR_PriPort7_MASK                    (0x07UL << ETF_PCR_PriPort7_SHIFT)                  /*!< ETF_PCR: PriPort7 Mask                  */
#define ETF_PCR_PriPort7_SHIFT                   21                                                  /*!< ETF_PCR: PriPort7 Position              */
#define ETF_PCR_PriPort7(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PCR_PriPort7_SHIFT))&ETF_PCR_PriPort7_MASK) /*!< ETF_PCR                                 */
/* ------- ITATBDATA0 Bit Fields                    ------ */
#define ETF_ITATBDATA0_ATDATA0_MASK              (0x01UL << ETF_ITATBDATA0_ATDATA0_SHIFT)            /*!< ETF_ITATBDATA0: ATDATA0 Mask            */
#define ETF_ITATBDATA0_ATDATA0_SHIFT             0                                                   /*!< ETF_ITATBDATA0: ATDATA0 Position        */
#define ETF_ITATBDATA0_ATDATA7_MASK              (0x01UL << ETF_ITATBDATA0_ATDATA7_SHIFT)            /*!< ETF_ITATBDATA0: ATDATA7 Mask            */
#define ETF_ITATBDATA0_ATDATA7_SHIFT             1                                                   /*!< ETF_ITATBDATA0: ATDATA7 Position        */
#define ETF_ITATBDATA0_ATDATA15_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA15_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA15 Mask           */
#define ETF_ITATBDATA0_ATDATA15_SHIFT            2                                                   /*!< ETF_ITATBDATA0: ATDATA15 Position       */
#define ETF_ITATBDATA0_ATDATA23_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA23_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA23 Mask           */
#define ETF_ITATBDATA0_ATDATA23_SHIFT            3                                                   /*!< ETF_ITATBDATA0: ATDATA23 Position       */
#define ETF_ITATBDATA0_ATDATA31_MASK             (0x01UL << ETF_ITATBDATA0_ATDATA31_SHIFT)           /*!< ETF_ITATBDATA0: ATDATA31 Mask           */
#define ETF_ITATBDATA0_ATDATA31_SHIFT            4                                                   /*!< ETF_ITATBDATA0: ATDATA31 Position       */
/* ------- ITATBCTR2 Bit Fields                     ------ */
#define ETF_ITATBCTR2_ATREADY_MASK               (0x01UL << ETF_ITATBCTR2_ATREADY_SHIFT)             /*!< ETF_ITATBCTR2: ATREADY Mask             */
#define ETF_ITATBCTR2_ATREADY_SHIFT              0                                                   /*!< ETF_ITATBCTR2: ATREADY Position         */
#define ETF_ITATBCTR2_AFVALID_MASK               (0x01UL << ETF_ITATBCTR2_AFVALID_SHIFT)             /*!< ETF_ITATBCTR2: AFVALID Mask             */
#define ETF_ITATBCTR2_AFVALID_SHIFT              1                                                   /*!< ETF_ITATBCTR2: AFVALID Position         */
/* ------- ITATBCTR1 Bit Fields                     ------ */
#define ETF_ITATBCTR1_ATID_MASK                  (0x7FUL << ETF_ITATBCTR1_ATID_SHIFT)                /*!< ETF_ITATBCTR1: ATID Mask                */
#define ETF_ITATBCTR1_ATID_SHIFT                 0                                                   /*!< ETF_ITATBCTR1: ATID Position            */
#define ETF_ITATBCTR1_ATID(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_ITATBCTR1_ATID_SHIFT))&ETF_ITATBCTR1_ATID_MASK) /*!< ETF_ITATBCTR1                           */
/* ------- ITATBCTR0 Bit Fields                     ------ */
#define ETF_ITATBCTR0_ATVALID_MASK               (0x01UL << ETF_ITATBCTR0_ATVALID_SHIFT)             /*!< ETF_ITATBCTR0: ATVALID Mask             */
#define ETF_ITATBCTR0_ATVALID_SHIFT              0                                                   /*!< ETF_ITATBCTR0: ATVALID Position         */
#define ETF_ITATBCTR0_AFREADY_MASK               (0x01UL << ETF_ITATBCTR0_AFREADY_SHIFT)             /*!< ETF_ITATBCTR0: AFREADY Mask             */
#define ETF_ITATBCTR0_AFREADY_SHIFT              1                                                   /*!< ETF_ITATBCTR0: AFREADY Position         */
#define ETF_ITATBCTR0_ATBYTES_MASK               (0x03UL << ETF_ITATBCTR0_ATBYTES_SHIFT)             /*!< ETF_ITATBCTR0: ATBYTES Mask             */
#define ETF_ITATBCTR0_ATBYTES_SHIFT              8                                                   /*!< ETF_ITATBCTR0: ATBYTES Position         */
#define ETF_ITATBCTR0_ATBYTES(x)                 (((uint32_t)(((uint32_t)(x))<<ETF_ITATBCTR0_ATBYTES_SHIFT))&ETF_ITATBCTR0_ATBYTES_MASK) /*!< ETF_ITATBCTR0                           */
/* ------- ITCTRL Bit Fields                        ------ */
#define ETF_ITCTRL_IntegrationMode_MASK          (0x01UL << ETF_ITCTRL_IntegrationMode_SHIFT)        /*!< ETF_ITCTRL: IntegrationMode Mask        */
#define ETF_ITCTRL_IntegrationMode_SHIFT         0                                                   /*!< ETF_ITCTRL: IntegrationMode Position    */
/* ------- CLAIMSET Bit Fields                      ------ */
#define ETF_CLAIMSET_CLAIMSET_MASK               (0x0FUL << ETF_CLAIMSET_CLAIMSET_SHIFT)             /*!< ETF_CLAIMSET: CLAIMSET Mask             */
#define ETF_CLAIMSET_CLAIMSET_SHIFT              0                                                   /*!< ETF_CLAIMSET: CLAIMSET Position         */
#define ETF_CLAIMSET_CLAIMSET(x)                 (((uint32_t)(((uint32_t)(x))<<ETF_CLAIMSET_CLAIMSET_SHIFT))&ETF_CLAIMSET_CLAIMSET_MASK) /*!< ETF_CLAIMSET                            */
/* ------- CLAIMCLR Bit Fields                      ------ */
#define ETF_CLAIMCLR_CLAIMCLR_MASK               (0x0FUL << ETF_CLAIMCLR_CLAIMCLR_SHIFT)             /*!< ETF_CLAIMCLR: CLAIMCLR Mask             */
#define ETF_CLAIMCLR_CLAIMCLR_SHIFT              0                                                   /*!< ETF_CLAIMCLR: CLAIMCLR Position         */
#define ETF_CLAIMCLR_CLAIMCLR(x)                 (((uint32_t)(((uint32_t)(x))<<ETF_CLAIMCLR_CLAIMCLR_SHIFT))&ETF_CLAIMCLR_CLAIMCLR_MASK) /*!< ETF_CLAIMCLR                            */
/* ------- LAR Bit Fields                           ------ */
#define ETF_LAR_WriteAccessCode_MASK             (0xFFFFFFFFUL << ETF_LAR_WriteAccessCode_SHIFT)     /*!< ETF_LAR: WriteAccessCode Mask           */
#define ETF_LAR_WriteAccessCode_SHIFT            0                                                   /*!< ETF_LAR: WriteAccessCode Position       */
#define ETF_LAR_WriteAccessCode(x)               (((uint32_t)(((uint32_t)(x))<<ETF_LAR_WriteAccessCode_SHIFT))&ETF_LAR_WriteAccessCode_MASK) /*!< ETF_LAR                                 */
/* ------- LSR Bit Fields                           ------ */
#define ETF_LSR_IMP_MASK                         (0x01UL << ETF_LSR_IMP_SHIFT)                       /*!< ETF_LSR: IMP Mask                       */
#define ETF_LSR_IMP_SHIFT                        0                                                   /*!< ETF_LSR: IMP Position                   */
#define ETF_LSR_STATUS_MASK                      (0x01UL << ETF_LSR_STATUS_SHIFT)                    /*!< ETF_LSR: STATUS Mask                    */
#define ETF_LSR_STATUS_SHIFT                     1                                                   /*!< ETF_LSR: STATUS Position                */
#define ETF_LSR_s8BIT_MASK                       (0x01UL << ETF_LSR_s8BIT_SHIFT)                     /*!< ETF_LSR: s8BIT Mask                     */
#define ETF_LSR_s8BIT_SHIFT                      2                                                   /*!< ETF_LSR: s8BIT Position                 */
/* ------- AUTHSTATUS Bit Fields                    ------ */
#define ETF_AUTHSTATUS_AuthenticationStatus_MASK (0xFFUL << ETF_AUTHSTATUS_AuthenticationStatus_SHIFT) /*!< ETF_AUTHSTATUS: AuthenticationStatus Mask*/
#define ETF_AUTHSTATUS_AuthenticationStatus_SHIFT 0                                                  /*!< ETF_AUTHSTATUS: AuthenticationStatus Position*/
#define ETF_AUTHSTATUS_AuthenticationStatus(x)   (((uint32_t)(((uint32_t)(x))<<ETF_AUTHSTATUS_AuthenticationStatus_SHIFT))&ETF_AUTHSTATUS_AuthenticationStatus_MASK) /*!< ETF_AUTHSTATUS                          */
/* ------- DEVID Bit Fields                         ------ */
#define ETF_DEVID_PORTCOUNT_MASK                 (0x0FUL << ETF_DEVID_PORTCOUNT_SHIFT)               /*!< ETF_DEVID: PORTCOUNT Mask               */
#define ETF_DEVID_PORTCOUNT_SHIFT                0                                                   /*!< ETF_DEVID: PORTCOUNT Position           */
#define ETF_DEVID_PORTCOUNT(x)                   (((uint32_t)(((uint32_t)(x))<<ETF_DEVID_PORTCOUNT_SHIFT))&ETF_DEVID_PORTCOUNT_MASK) /*!< ETF_DEVID                               */
#define ETF_DEVID_PriorityScheme_MASK            (0x0FUL << ETF_DEVID_PriorityScheme_SHIFT)          /*!< ETF_DEVID: PriorityScheme Mask          */
#define ETF_DEVID_PriorityScheme_SHIFT           4                                                   /*!< ETF_DEVID: PriorityScheme Position      */
#define ETF_DEVID_PriorityScheme(x)              (((uint32_t)(((uint32_t)(x))<<ETF_DEVID_PriorityScheme_SHIFT))&ETF_DEVID_PriorityScheme_MASK) /*!< ETF_DEVID                               */
/* ------- DEVTYPE Bit Fields                       ------ */
#define ETF_DEVTYPE_MajorType_MASK               (0x0FUL << ETF_DEVTYPE_MajorType_SHIFT)             /*!< ETF_DEVTYPE: MajorType Mask             */
#define ETF_DEVTYPE_MajorType_SHIFT              0                                                   /*!< ETF_DEVTYPE: MajorType Position         */
#define ETF_DEVTYPE_MajorType(x)                 (((uint32_t)(((uint32_t)(x))<<ETF_DEVTYPE_MajorType_SHIFT))&ETF_DEVTYPE_MajorType_MASK) /*!< ETF_DEVTYPE                             */
#define ETF_DEVTYPE_SubType_MASK                 (0x0FUL << ETF_DEVTYPE_SubType_SHIFT)               /*!< ETF_DEVTYPE: SubType Mask               */
#define ETF_DEVTYPE_SubType_SHIFT                4                                                   /*!< ETF_DEVTYPE: SubType Position           */
#define ETF_DEVTYPE_SubType(x)                   (((uint32_t)(((uint32_t)(x))<<ETF_DEVTYPE_SubType_SHIFT))&ETF_DEVTYPE_SubType_MASK) /*!< ETF_DEVTYPE                             */
/* ------- PIDR4 Bit Fields                         ------ */
#define ETF_PIDR4_JEP106_MASK                    (0x0FUL << ETF_PIDR4_JEP106_SHIFT)                  /*!< ETF_PIDR4: JEP106 Mask                  */
#define ETF_PIDR4_JEP106_SHIFT                   0                                                   /*!< ETF_PIDR4: JEP106 Position              */
#define ETF_PIDR4_JEP106(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PIDR4_JEP106_SHIFT))&ETF_PIDR4_JEP106_MASK) /*!< ETF_PIDR4                               */
#define ETF_PIDR4_c4KB_MASK                      (0x0FUL << ETF_PIDR4_c4KB_SHIFT)                    /*!< ETF_PIDR4: c4KB Mask                    */
#define ETF_PIDR4_c4KB_SHIFT                     4                                                   /*!< ETF_PIDR4: c4KB Position                */
#define ETF_PIDR4_c4KB(x)                        (((uint32_t)(((uint32_t)(x))<<ETF_PIDR4_c4KB_SHIFT))&ETF_PIDR4_c4KB_MASK) /*!< ETF_PIDR4                               */
/* ------- PIDR5 Bit Fields                         ------ */
/* ------- PIDR6 Bit Fields                         ------ */
/* ------- PIDR7 Bit Fields                         ------ */
/* ------- PIDR0 Bit Fields                         ------ */
#define ETF_PIDR0_PartNumber_MASK                (0xFFUL << ETF_PIDR0_PartNumber_SHIFT)              /*!< ETF_PIDR0: PartNumber Mask              */
#define ETF_PIDR0_PartNumber_SHIFT               0                                                   /*!< ETF_PIDR0: PartNumber Position          */
#define ETF_PIDR0_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<ETF_PIDR0_PartNumber_SHIFT))&ETF_PIDR0_PartNumber_MASK) /*!< ETF_PIDR0                               */
/* ------- PIDR1 Bit Fields                         ------ */
#define ETF_PIDR1_PartNumber_MASK                (0x0FUL << ETF_PIDR1_PartNumber_SHIFT)              /*!< ETF_PIDR1: PartNumber Mask              */
#define ETF_PIDR1_PartNumber_SHIFT               0                                                   /*!< ETF_PIDR1: PartNumber Position          */
#define ETF_PIDR1_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<ETF_PIDR1_PartNumber_SHIFT))&ETF_PIDR1_PartNumber_MASK) /*!< ETF_PIDR1                               */
#define ETF_PIDR1_JEP106_identity_code_MASK      (0x0FUL << ETF_PIDR1_JEP106_identity_code_SHIFT)    /*!< ETF_PIDR1: JEP106_identity_code Mask    */
#define ETF_PIDR1_JEP106_identity_code_SHIFT     4                                                   /*!< ETF_PIDR1: JEP106_identity_code Position*/
#define ETF_PIDR1_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<ETF_PIDR1_JEP106_identity_code_SHIFT))&ETF_PIDR1_JEP106_identity_code_MASK) /*!< ETF_PIDR1                               */
/* ------- PIDR2 Bit Fields                         ------ */
#define ETF_PIDR2_JEP106_identity_code_MASK      (0x07UL << ETF_PIDR2_JEP106_identity_code_SHIFT)    /*!< ETF_PIDR2: JEP106_identity_code Mask    */
#define ETF_PIDR2_JEP106_identity_code_SHIFT     0                                                   /*!< ETF_PIDR2: JEP106_identity_code Position*/
#define ETF_PIDR2_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<ETF_PIDR2_JEP106_identity_code_SHIFT))&ETF_PIDR2_JEP106_identity_code_MASK) /*!< ETF_PIDR2                               */
#define ETF_PIDR2_Revision_MASK                  (0x0FUL << ETF_PIDR2_Revision_SHIFT)                /*!< ETF_PIDR2: Revision Mask                */
#define ETF_PIDR2_Revision_SHIFT                 4                                                   /*!< ETF_PIDR2: Revision Position            */
#define ETF_PIDR2_Revision(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_PIDR2_Revision_SHIFT))&ETF_PIDR2_Revision_MASK) /*!< ETF_PIDR2                               */
/* ------- PIDR3 Bit Fields                         ------ */
#define ETF_PIDR3_CustomerModified_MASK          (0x0FUL << ETF_PIDR3_CustomerModified_SHIFT)        /*!< ETF_PIDR3: CustomerModified Mask        */
#define ETF_PIDR3_CustomerModified_SHIFT         0                                                   /*!< ETF_PIDR3: CustomerModified Position    */
#define ETF_PIDR3_CustomerModified(x)            (((uint32_t)(((uint32_t)(x))<<ETF_PIDR3_CustomerModified_SHIFT))&ETF_PIDR3_CustomerModified_MASK) /*!< ETF_PIDR3                               */
#define ETF_PIDR3_RevAnd_MASK                    (0x0FUL << ETF_PIDR3_RevAnd_SHIFT)                  /*!< ETF_PIDR3: RevAnd Mask                  */
#define ETF_PIDR3_RevAnd_SHIFT                   4                                                   /*!< ETF_PIDR3: RevAnd Position              */
#define ETF_PIDR3_RevAnd(x)                      (((uint32_t)(((uint32_t)(x))<<ETF_PIDR3_RevAnd_SHIFT))&ETF_PIDR3_RevAnd_MASK) /*!< ETF_PIDR3                               */
/* ------- CIDR0 Bit Fields                         ------ */
#define ETF_CIDR0_Preamble_MASK                  (0xFFUL << ETF_CIDR0_Preamble_SHIFT)                /*!< ETF_CIDR0: Preamble Mask                */
#define ETF_CIDR0_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR0: Preamble Position            */
#define ETF_CIDR0_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_CIDR0_Preamble_SHIFT))&ETF_CIDR0_Preamble_MASK) /*!< ETF_CIDR0                               */
/* ------- CIDR1 Bit Fields                         ------ */
#define ETF_CIDR1_Preamble_MASK                  (0x0FUL << ETF_CIDR1_Preamble_SHIFT)                /*!< ETF_CIDR1: Preamble Mask                */
#define ETF_CIDR1_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR1: Preamble Position            */
#define ETF_CIDR1_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_CIDR1_Preamble_SHIFT))&ETF_CIDR1_Preamble_MASK) /*!< ETF_CIDR1                               */
#define ETF_CIDR1_ComponentClass_MASK            (0x0FUL << ETF_CIDR1_ComponentClass_SHIFT)          /*!< ETF_CIDR1: ComponentClass Mask          */
#define ETF_CIDR1_ComponentClass_SHIFT           4                                                   /*!< ETF_CIDR1: ComponentClass Position      */
#define ETF_CIDR1_ComponentClass(x)              (((uint32_t)(((uint32_t)(x))<<ETF_CIDR1_ComponentClass_SHIFT))&ETF_CIDR1_ComponentClass_MASK) /*!< ETF_CIDR1                               */
/* ------- CIDR2 Bit Fields                         ------ */
#define ETF_CIDR2_Preamble_MASK                  (0xFFUL << ETF_CIDR2_Preamble_SHIFT)                /*!< ETF_CIDR2: Preamble Mask                */
#define ETF_CIDR2_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR2: Preamble Position            */
#define ETF_CIDR2_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_CIDR2_Preamble_SHIFT))&ETF_CIDR2_Preamble_MASK) /*!< ETF_CIDR2                               */
/* ------- CIDR3 Bit Fields                         ------ */
#define ETF_CIDR3_Preamble_MASK                  (0xFFUL << ETF_CIDR3_Preamble_SHIFT)                /*!< ETF_CIDR3: Preamble Mask                */
#define ETF_CIDR3_Preamble_SHIFT                 0                                                   /*!< ETF_CIDR3: Preamble Position            */
#define ETF_CIDR3_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETF_CIDR3_Preamble_SHIFT))&ETF_CIDR3_Preamble_MASK) /*!< ETF_CIDR3                               */

/* ETF - Peripheral instance base addresses */
#define ETF_BasePtr                    0xE0043000UL
#define ETF                            ((ETF_Type *) ETF_BasePtr)
#define ETF_BASE_PTR                   (ETF)

/* ================================================================================ */
/* ================           ETM (file:ETM_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Embedded Trace Macrocell
 */
typedef struct {                                /*!<       ETM Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: Main Control Register                                        */
   __I  uint32_t  CCR;                          /*!< 0004: Configuration Code Register                                  */
   __IO uint32_t  TRIGGER;                      /*!< 0008: Trigger Event Register                                       */
   __I  uint32_t  RESERVED0;                    /*!< 000C:                                                              */
   __IO uint32_t  SR;                           /*!< 0010: ETM Status Register                                          */
   __I  uint32_t  SCR;                          /*!< 0014: System Configuration Register                                */
   __I  uint32_t  RESERVED1[2];                 /*!< 0018:                                                              */
   __IO uint32_t  EEVR;                         /*!< 0020: Trace Enable Event Register                                  */
   __IO uint32_t  TECR1;                        /*!< 0024: Trace Enable Control 1 Register                              */
   __IO uint32_t  FFLR;                         /*!< 0028: FIFOFULL Level Register                                      */
   __I  uint32_t  RESERVED2[69];                /*!< 002C:                                                              */
   __IO uint32_t  CNTRLDVR1;                    /*!< 0140: Free-running counter reload value                            */
   __I  uint32_t  RESERVED3[39];                /*!< 0144:                                                              */
   __I  uint32_t  SYNCFR;                       /*!< 01E0: Synchronization Frequency Register                           */
   __I  uint32_t  IDR;                          /*!< 01E4: ID Register                                                  */
   __I  uint32_t  CCER;                         /*!< 01E8: Configuration Code Extension Register                        */
   __I  uint32_t  RESERVED4;                    /*!< 01EC:                                                              */
   __IO uint32_t  TESSEICR;                     /*!< 01F0: TraceEnable Start/Stop EmbeddedICE Control Register          */
   __I  uint32_t  RESERVED5;                    /*!< 01F4:                                                              */
   __IO uint32_t  TSEVR;                        /*!< 01F8: Timestamp Event Register                                     */
   __I  uint32_t  RESERVED6;                    /*!< 01FC:                                                              */
   __IO uint32_t  TRACEIDR;                     /*!< 0200: CoreSight Trace ID Register                                  */
   __I  uint32_t  RESERVED7;                    /*!< 0204:                                                              */
   __I  uint32_t  IDR2;                         /*!< 0208: ETM ID Register 2                                            */
   __I  uint32_t  RESERVED8[66];                /*!< 020C:                                                              */
   __I  uint32_t  PDSR;                         /*!< 0314: Device Power-Down Status Register                            */
   __I  uint32_t  RESERVED9[754];               /*!< 0318:                                                              */
   __I  uint32_t  _ITMISCIN;                    /*!< 0EE0: Integration Test Miscelaneous Inputs Register                */
   __I  uint32_t  RESERVED10;                   /*!< 0EE4:                                                              */
   __O  uint32_t  _ITTRIGOUT;                   /*!< 0EE8: Integration Test Trigger Out Register                        */
   __I  uint32_t  RESERVED11;                   /*!< 0EEC:                                                              */
   __I  uint32_t  _ITATBCTR2;                   /*!< 0EF0: ETM Integration Test ATB Control 2 Register                  */
   __I  uint32_t  RESERVED12;                   /*!< 0EF4:                                                              */
   __O  uint32_t  _ITATBCTR0;                   /*!< 0EF8: ETM Integration Test ATB Control 0 Register                  */
   __I  uint32_t  RESERVED13;                   /*!< 0EFC:                                                              */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED14[39];               /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED15[2];                /*!< 0FA8:                                                              */
   __IO uint32_t  LAR;                          /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LSR;                          /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTATUS;                   /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  RESERVED16[4];                /*!< 0FBC:                                                              */
   __I  uint32_t  DEVTYPE;                      /*!< 0FCC: CoreSight Device Type Register                               */
   __I  uint32_t  PIDR4;                        /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PIDR5;                        /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PIDR6;                        /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PIDR7;                        /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PIDR0;                        /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PIDR1;                        /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PIDR2;                        /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PIDR3;                        /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CIDR0;                        /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CIDR1;                        /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CIDR2;                        /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CIDR3;                        /*!< 0FFC: Component Identification Register 3                          */
} ETM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ETM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CR Bit Fields                            ------ */
#define ETM_CR_ETMPD_MASK                        (0x01UL << ETM_CR_ETMPD_SHIFT)                      /*!< ETM_CR: ETMPD Mask                      */
#define ETM_CR_ETMPD_SHIFT                       0                                                   /*!< ETM_CR: ETMPD Position                  */
#define ETM_CR_PS_MASK                           (0x07UL << ETM_CR_PS_SHIFT)                         /*!< ETM_CR: PS Mask                         */
#define ETM_CR_PS_SHIFT                          4                                                   /*!< ETM_CR: PS Position                     */
#define ETM_CR_PS(x)                             (((uint32_t)(((uint32_t)(x))<<ETM_CR_PS_SHIFT))&ETM_CR_PS_MASK) /*!< ETM_CR                                  */
#define ETM_CR_SP_MASK                           (0x01UL << ETM_CR_SP_SHIFT)                         /*!< ETM_CR: SP Mask                         */
#define ETM_CR_SP_SHIFT                          7                                                   /*!< ETM_CR: SP Position                     */
#define ETM_CR_BO_MASK                           (0x01UL << ETM_CR_BO_SHIFT)                         /*!< ETM_CR: BO Mask                         */
#define ETM_CR_BO_SHIFT                          8                                                   /*!< ETM_CR: BO Position                     */
#define ETM_CR_DRC_MASK                          (0x01UL << ETM_CR_DRC_SHIFT)                        /*!< ETM_CR: DRC Mask                        */
#define ETM_CR_DRC_SHIFT                         9                                                   /*!< ETM_CR: DRC Position                    */
#define ETM_CR_ETMP_MASK                         (0x01UL << ETM_CR_ETMP_SHIFT)                       /*!< ETM_CR: ETMP Mask                       */
#define ETM_CR_ETMP_SHIFT                        10                                                  /*!< ETM_CR: ETMP Position                   */
#define ETM_CR_ETMPS_MASK                        (0x01UL << ETM_CR_ETMPS_SHIFT)                      /*!< ETM_CR: ETMPS Mask                      */
#define ETM_CR_ETMPS_SHIFT                       11                                                  /*!< ETM_CR: ETMPS Position                  */
#define ETM_CR_PM2_MASK                          (0x01UL << ETM_CR_PM2_SHIFT)                        /*!< ETM_CR: PM2 Mask                        */
#define ETM_CR_PM2_SHIFT                         13                                                  /*!< ETM_CR: PM2 Position                    */
#define ETM_CR_PM_MASK                           (0x03UL << ETM_CR_PM_SHIFT)                         /*!< ETM_CR: PM Mask                         */
#define ETM_CR_PM_SHIFT                          16                                                  /*!< ETM_CR: PM Position                     */
#define ETM_CR_PM(x)                             (((uint32_t)(((uint32_t)(x))<<ETM_CR_PM_SHIFT))&ETM_CR_PM_MASK) /*!< ETM_CR                                  */
#define ETM_CR_PS3_MASK                          (0x01UL << ETM_CR_PS3_SHIFT)                        /*!< ETM_CR: PS3 Mask                        */
#define ETM_CR_PS3_SHIFT                         21                                                  /*!< ETM_CR: PS3 Position                    */
#define ETM_CR_TE_MASK                           (0x01UL << ETM_CR_TE_SHIFT)                         /*!< ETM_CR: TE Mask                         */
#define ETM_CR_TE_SHIFT                          28                                                  /*!< ETM_CR: TE Position                     */
/* ------- CCR Bit Fields                           ------ */
#define ETM_CCR_NumberOfAddressComparatorPairs_MASK (0x0FUL << ETM_CCR_NumberOfAddressComparatorPairs_SHIFT) /*!< ETM_CCR: NumberOfAddressComparatorPairs Mask*/
#define ETM_CCR_NumberOfAddressComparatorPairs_SHIFT 0                                               /*!< ETM_CCR: NumberOfAddressComparatorPairs Position*/
#define ETM_CCR_NumberOfAddressComparatorPairs(x) (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NumberOfAddressComparatorPairs_SHIFT))&ETM_CCR_NumberOfAddressComparatorPairs_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_NDVC_MASK                        (0x0FUL << ETM_CCR_NDVC_SHIFT)                      /*!< ETM_CCR: NDVC Mask                      */
#define ETM_CCR_NDVC_SHIFT                       4                                                   /*!< ETM_CCR: NDVC Position                  */
#define ETM_CCR_NDVC(x)                          (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NDVC_SHIFT))&ETM_CCR_NDVC_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_NMMD_MASK                        (0x1FUL << ETM_CCR_NMMD_SHIFT)                      /*!< ETM_CCR: NMMD Mask                      */
#define ETM_CCR_NMMD_SHIFT                       8                                                   /*!< ETM_CCR: NMMD Position                  */
#define ETM_CCR_NMMD(x)                          (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NMMD_SHIFT))&ETM_CCR_NMMD_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_NC_MASK                          (0x07UL << ETM_CCR_NC_SHIFT)                        /*!< ETM_CCR: NC Mask                        */
#define ETM_CCR_NC_SHIFT                         13                                                  /*!< ETM_CCR: NC Position                    */
#define ETM_CCR_NC(x)                            (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NC_SHIFT))&ETM_CCR_NC_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_SP_MASK                          (0x01UL << ETM_CCR_SP_SHIFT)                        /*!< ETM_CCR: SP Mask                        */
#define ETM_CCR_SP_SHIFT                         16                                                  /*!< ETM_CCR: SP Position                    */
#define ETM_CCR_NEI_MASK                         (0x07UL << ETM_CCR_NEI_SHIFT)                       /*!< ETM_CCR: NEI Mask                       */
#define ETM_CCR_NEI_SHIFT                        17                                                  /*!< ETM_CCR: NEI Position                   */
#define ETM_CCR_NEI(x)                           (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NEI_SHIFT))&ETM_CCR_NEI_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_NEO_MASK                         (0x07UL << ETM_CCR_NEO_SHIFT)                       /*!< ETM_CCR: NEO Mask                       */
#define ETM_CCR_NEO_SHIFT                        20                                                  /*!< ETM_CCR: NEO Position                   */
#define ETM_CCR_NEO(x)                           (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NEO_SHIFT))&ETM_CCR_NEO_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_FFLP_MASK                        (0x01UL << ETM_CCR_FFLP_SHIFT)                      /*!< ETM_CCR: FFLP Mask                      */
#define ETM_CCR_FFLP_SHIFT                       23                                                  /*!< ETM_CCR: FFLP Position                  */
#define ETM_CCR_NCIDC_MASK                       (0x03UL << ETM_CCR_NCIDC_SHIFT)                     /*!< ETM_CCR: NCIDC Mask                     */
#define ETM_CCR_NCIDC_SHIFT                      24                                                  /*!< ETM_CCR: NCIDC Position                 */
#define ETM_CCR_NCIDC(x)                         (((uint32_t)(((uint32_t)(x))<<ETM_CCR_NCIDC_SHIFT))&ETM_CCR_NCIDC_MASK) /*!< ETM_CCR                                 */
#define ETM_CCR_TSSBP_MASK                       (0x01UL << ETM_CCR_TSSBP_SHIFT)                     /*!< ETM_CCR: TSSBP Mask                     */
#define ETM_CCR_TSSBP_SHIFT                      26                                                  /*!< ETM_CCR: TSSBP Position                 */
#define ETM_CCR_CMA_MASK                         (0x01UL << ETM_CCR_CMA_SHIFT)                       /*!< ETM_CCR: CMA Mask                       */
#define ETM_CCR_CMA_SHIFT                        27                                                  /*!< ETM_CCR: CMA Position                   */
#define ETM_CCR_ETMIDRP_MASK                     (0x01UL << ETM_CCR_ETMIDRP_SHIFT)                   /*!< ETM_CCR: ETMIDRP Mask                   */
#define ETM_CCR_ETMIDRP_SHIFT                    31                                                  /*!< ETM_CCR: ETMIDRP Position               */
/* ------- TRIGGER Bit Fields                       ------ */
#define ETM_TRIGGER_TriggerEvent_MASK            (0x1FFFFUL << ETM_TRIGGER_TriggerEvent_SHIFT)       /*!< ETM_TRIGGER: TriggerEvent Mask          */
#define ETM_TRIGGER_TriggerEvent_SHIFT           0                                                   /*!< ETM_TRIGGER: TriggerEvent Position      */
#define ETM_TRIGGER_TriggerEvent(x)              (((uint32_t)(((uint32_t)(x))<<ETM_TRIGGER_TriggerEvent_SHIFT))&ETM_TRIGGER_TriggerEvent_MASK) /*!< ETM_TRIGGER                             */
/* ------- SR Bit Fields                            ------ */
#define ETM_SR_UOF_MASK                          (0x01UL << ETM_SR_UOF_SHIFT)                        /*!< ETM_SR: UOF Mask                        */
#define ETM_SR_UOF_SHIFT                         0                                                   /*!< ETM_SR: UOF Position                    */
#define ETM_SR_Progbit_MASK                      (0x01UL << ETM_SR_Progbit_SHIFT)                    /*!< ETM_SR: Progbit Mask                    */
#define ETM_SR_Progbit_SHIFT                     1                                                   /*!< ETM_SR: Progbit Position                */
#define ETM_SR_Status_MASK                       (0x01UL << ETM_SR_Status_SHIFT)                     /*!< ETM_SR: Status Mask                     */
#define ETM_SR_Status_SHIFT                      2                                                   /*!< ETM_SR: Status Position                 */
#define ETM_SR_Trigger_MASK                      (0x01UL << ETM_SR_Trigger_SHIFT)                    /*!< ETM_SR: Trigger Mask                    */
#define ETM_SR_Trigger_SHIFT                     3                                                   /*!< ETM_SR: Trigger Position                */
/* ------- SCR Bit Fields                           ------ */
#define ETM_SCR_MaximumPortSize_MASK             (0x07UL << ETM_SCR_MaximumPortSize_SHIFT)           /*!< ETM_SCR: MaximumPortSize Mask           */
#define ETM_SCR_MaximumPortSize_SHIFT            0                                                   /*!< ETM_SCR: MaximumPortSize Position       */
#define ETM_SCR_MaximumPortSize(x)               (((uint32_t)(((uint32_t)(x))<<ETM_SCR_MaximumPortSize_SHIFT))&ETM_SCR_MaximumPortSize_MASK) /*!< ETM_SCR                                 */
#define ETM_SCR_FIFOFULLsupported_MASK           (0x01UL << ETM_SCR_FIFOFULLsupported_SHIFT)         /*!< ETM_SCR: FIFOFULLsupported Mask         */
#define ETM_SCR_FIFOFULLsupported_SHIFT          8                                                   /*!< ETM_SCR: FIFOFULLsupported Position     */
#define ETM_SCR_MaximumPortSize3_MASK            (0x01UL << ETM_SCR_MaximumPortSize3_SHIFT)          /*!< ETM_SCR: MaximumPortSize3 Mask          */
#define ETM_SCR_MaximumPortSize3_SHIFT           9                                                   /*!< ETM_SCR: MaximumPortSize3 Position      */
#define ETM_SCR_PortSizeSupported_MASK           (0x01UL << ETM_SCR_PortSizeSupported_SHIFT)         /*!< ETM_SCR: PortSizeSupported Mask         */
#define ETM_SCR_PortSizeSupported_SHIFT          10                                                  /*!< ETM_SCR: PortSizeSupported Position     */
#define ETM_SCR_PortModeSupported_MASK           (0x01UL << ETM_SCR_PortModeSupported_SHIFT)         /*!< ETM_SCR: PortModeSupported Mask         */
#define ETM_SCR_PortModeSupported_SHIFT          11                                                  /*!< ETM_SCR: PortModeSupported Position     */
#define ETM_SCR_N_MASK                           (0x07UL << ETM_SCR_N_SHIFT)                         /*!< ETM_SCR: N Mask                         */
#define ETM_SCR_N_SHIFT                          12                                                  /*!< ETM_SCR: N Position                     */
#define ETM_SCR_N(x)                             (((uint32_t)(((uint32_t)(x))<<ETM_SCR_N_SHIFT))&ETM_SCR_N_MASK) /*!< ETM_SCR                                 */
#define ETM_SCR_NoFetchComparisons_MASK          (0x01UL << ETM_SCR_NoFetchComparisons_SHIFT)        /*!< ETM_SCR: NoFetchComparisons Mask        */
#define ETM_SCR_NoFetchComparisons_SHIFT         17                                                  /*!< ETM_SCR: NoFetchComparisons Position    */
/* ------- EEVR Bit Fields                          ------ */
#define ETM_EEVR_TraceEnableEvent_MASK           (0x1FFFFUL << ETM_EEVR_TraceEnableEvent_SHIFT)      /*!< ETM_EEVR: TraceEnableEvent Mask         */
#define ETM_EEVR_TraceEnableEvent_SHIFT          0                                                   /*!< ETM_EEVR: TraceEnableEvent Position     */
#define ETM_EEVR_TraceEnableEvent(x)             (((uint32_t)(((uint32_t)(x))<<ETM_EEVR_TraceEnableEvent_SHIFT))&ETM_EEVR_TraceEnableEvent_MASK) /*!< ETM_EEVR                                */
/* ------- TECR1 Bit Fields                         ------ */
#define ETM_TECR1_TraceControlEnable_MASK        (0x01UL << ETM_TECR1_TraceControlEnable_SHIFT)      /*!< ETM_TECR1: TraceControlEnable Mask      */
#define ETM_TECR1_TraceControlEnable_SHIFT       25                                                  /*!< ETM_TECR1: TraceControlEnable Position  */
/* ------- FFLR Bit Fields                          ------ */
#define ETM_FFLR_FIFOFullLevel_MASK              (0xFFUL << ETM_FFLR_FIFOFullLevel_SHIFT)            /*!< ETM_FFLR: FIFOFullLevel Mask            */
#define ETM_FFLR_FIFOFullLevel_SHIFT             0                                                   /*!< ETM_FFLR: FIFOFullLevel Position        */
#define ETM_FFLR_FIFOFullLevel(x)                (((uint32_t)(((uint32_t)(x))<<ETM_FFLR_FIFOFullLevel_SHIFT))&ETM_FFLR_FIFOFullLevel_MASK) /*!< ETM_FFLR                                */
/* ------- CNTRLDVR1 Bit Fields                     ------ */
#define ETM_CNTRLDVR1_IntitialCount_MASK         (0xFFFFUL << ETM_CNTRLDVR1_IntitialCount_SHIFT)     /*!< ETM_CNTRLDVR1: IntitialCount Mask       */
#define ETM_CNTRLDVR1_IntitialCount_SHIFT        0                                                   /*!< ETM_CNTRLDVR1: IntitialCount Position   */
#define ETM_CNTRLDVR1_IntitialCount(x)           (((uint32_t)(((uint32_t)(x))<<ETM_CNTRLDVR1_IntitialCount_SHIFT))&ETM_CNTRLDVR1_IntitialCount_MASK) /*!< ETM_CNTRLDVR1                           */
/* ------- SYNCFR Bit Fields                        ------ */
#define ETM_SYNCFR_SyncFrequency_MASK            (0xFFFUL << ETM_SYNCFR_SyncFrequency_SHIFT)         /*!< ETM_SYNCFR: SyncFrequency Mask          */
#define ETM_SYNCFR_SyncFrequency_SHIFT           0                                                   /*!< ETM_SYNCFR: SyncFrequency Position      */
#define ETM_SYNCFR_SyncFrequency(x)              (((uint32_t)(((uint32_t)(x))<<ETM_SYNCFR_SyncFrequency_SHIFT))&ETM_SYNCFR_SyncFrequency_MASK) /*!< ETM_SYNCFR                              */
/* ------- IDR Bit Fields                           ------ */
#define ETM_IDR_ImplementationRevision_MASK      (0x0FUL << ETM_IDR_ImplementationRevision_SHIFT)    /*!< ETM_IDR: ImplementationRevision Mask    */
#define ETM_IDR_ImplementationRevision_SHIFT     0                                                   /*!< ETM_IDR: ImplementationRevision Position*/
#define ETM_IDR_ImplementationRevision(x)        (((uint32_t)(((uint32_t)(x))<<ETM_IDR_ImplementationRevision_SHIFT))&ETM_IDR_ImplementationRevision_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_MinorETMarchitectureVersion_MASK (0x0FUL << ETM_IDR_MinorETMarchitectureVersion_SHIFT) /*!< ETM_IDR: MinorETMarchitectureVersion Mask*/
#define ETM_IDR_MinorETMarchitectureVersion_SHIFT 4                                                  /*!< ETM_IDR: MinorETMarchitectureVersion Position*/
#define ETM_IDR_MinorETMarchitectureVersion(x)   (((uint32_t)(((uint32_t)(x))<<ETM_IDR_MinorETMarchitectureVersion_SHIFT))&ETM_IDR_MinorETMarchitectureVersion_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_MajorETMarchitectureVersion_MASK (0x0FUL << ETM_IDR_MajorETMarchitectureVersion_SHIFT) /*!< ETM_IDR: MajorETMarchitectureVersion Mask*/
#define ETM_IDR_MajorETMarchitectureVersion_SHIFT 8                                                  /*!< ETM_IDR: MajorETMarchitectureVersion Position*/
#define ETM_IDR_MajorETMarchitectureVersion(x)   (((uint32_t)(((uint32_t)(x))<<ETM_IDR_MajorETMarchitectureVersion_SHIFT))&ETM_IDR_MajorETMarchitectureVersion_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_ProcessorFamily_MASK             (0x0FUL << ETM_IDR_ProcessorFamily_SHIFT)           /*!< ETM_IDR: ProcessorFamily Mask           */
#define ETM_IDR_ProcessorFamily_SHIFT            12                                                  /*!< ETM_IDR: ProcessorFamily Position       */
#define ETM_IDR_ProcessorFamily(x)               (((uint32_t)(((uint32_t)(x))<<ETM_IDR_ProcessorFamily_SHIFT))&ETM_IDR_ProcessorFamily_MASK) /*!< ETM_IDR                                 */
#define ETM_IDR_LoadPCfirst_MASK                 (0x01UL << ETM_IDR_LoadPCfirst_SHIFT)               /*!< ETM_IDR: LoadPCfirst Mask               */
#define ETM_IDR_LoadPCfirst_SHIFT                16                                                  /*!< ETM_IDR: LoadPCfirst Position           */
#define ETM_IDR_ThumbInstructionTracing_MASK     (0x01UL << ETM_IDR_ThumbInstructionTracing_SHIFT)   /*!< ETM_IDR: ThumbInstructionTracing Mask   */
#define ETM_IDR_ThumbInstructionTracing_SHIFT    18                                                  /*!< ETM_IDR: ThumbInstructionTracing Position*/
#define ETM_IDR_SecurityExtensionSupport_MASK    (0x01UL << ETM_IDR_SecurityExtensionSupport_SHIFT)  /*!< ETM_IDR: SecurityExtensionSupport Mask  */
#define ETM_IDR_SecurityExtensionSupport_SHIFT   19                                                  /*!< ETM_IDR: SecurityExtensionSupport Position*/
#define ETM_IDR_BranchPacketEncoding_MASK        (0x01UL << ETM_IDR_BranchPacketEncoding_SHIFT)      /*!< ETM_IDR: BranchPacketEncoding Mask      */
#define ETM_IDR_BranchPacketEncoding_SHIFT       20                                                  /*!< ETM_IDR: BranchPacketEncoding Position  */
#define ETM_IDR_ImplementorCode_MASK             (0xFFUL << ETM_IDR_ImplementorCode_SHIFT)           /*!< ETM_IDR: ImplementorCode Mask           */
#define ETM_IDR_ImplementorCode_SHIFT            24                                                  /*!< ETM_IDR: ImplementorCode Position       */
#define ETM_IDR_ImplementorCode(x)               (((uint32_t)(((uint32_t)(x))<<ETM_IDR_ImplementorCode_SHIFT))&ETM_IDR_ImplementorCode_MASK) /*!< ETM_IDR                                 */
/* ------- CCER Bit Fields                          ------ */
#define ETM_CCER_ExtendedExternalInputSelectors_MASK (0x07UL << ETM_CCER_ExtendedExternalInputSelectors_SHIFT) /*!< ETM_CCER: ExtendedExternalInputSelectors Mask*/
#define ETM_CCER_ExtendedExternalInputSelectors_SHIFT 0                                              /*!< ETM_CCER: ExtendedExternalInputSelectors Position*/
#define ETM_CCER_ExtendedExternalInputSelectors(x) (((uint32_t)(((uint32_t)(x))<<ETM_CCER_ExtendedExternalInputSelectors_SHIFT))&ETM_CCER_ExtendedExternalInputSelectors_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_ExtendedExternalInputBus_MASK   (0xFFUL << ETM_CCER_ExtendedExternalInputBus_SHIFT) /*!< ETM_CCER: ExtendedExternalInputBus Mask */
#define ETM_CCER_ExtendedExternalInputBus_SHIFT  3                                                   /*!< ETM_CCER: ExtendedExternalInputBus Position*/
#define ETM_CCER_ExtendedExternalInputBus(x)     (((uint32_t)(((uint32_t)(x))<<ETM_CCER_ExtendedExternalInputBus_SHIFT))&ETM_CCER_ExtendedExternalInputBus_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_ReadableRegisters_MASK          (0x01UL << ETM_CCER_ReadableRegisters_SHIFT)        /*!< ETM_CCER: ReadableRegisters Mask        */
#define ETM_CCER_ReadableRegisters_SHIFT         11                                                  /*!< ETM_CCER: ReadableRegisters Position    */
#define ETM_CCER_DataAddressComparisons_MASK     (0x01UL << ETM_CCER_DataAddressComparisons_SHIFT)   /*!< ETM_CCER: DataAddressComparisons Mask   */
#define ETM_CCER_DataAddressComparisons_SHIFT    12                                                  /*!< ETM_CCER: DataAddressComparisons Position*/
#define ETM_CCER_InstrumentationResources_MASK   (0x07UL << ETM_CCER_InstrumentationResources_SHIFT) /*!< ETM_CCER: InstrumentationResources Mask */
#define ETM_CCER_InstrumentationResources_SHIFT  13                                                  /*!< ETM_CCER: InstrumentationResources Position*/
#define ETM_CCER_InstrumentationResources(x)     (((uint32_t)(((uint32_t)(x))<<ETM_CCER_InstrumentationResources_SHIFT))&ETM_CCER_InstrumentationResources_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_EmbeddedICEwatchpointInputs_MASK (0x0FUL << ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT) /*!< ETM_CCER: EmbeddedICEwatchpointInputs Mask*/
#define ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT 16                                                /*!< ETM_CCER: EmbeddedICEwatchpointInputs Position*/
#define ETM_CCER_EmbeddedICEwatchpointInputs(x)  (((uint32_t)(((uint32_t)(x))<<ETM_CCER_EmbeddedICEwatchpointInputs_SHIFT))&ETM_CCER_EmbeddedICEwatchpointInputs_MASK) /*!< ETM_CCER                                */
#define ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_MASK (0x01UL << ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_SHIFT) /*!< ETM_CCER: TraceStartStopBlockUsesEmbeddedICEwatchpointInputs Mask*/
#define ETM_CCER_TraceStartStopBlockUsesEmbeddedICEwatchpointInputs_SHIFT 20                         /*!< ETM_CCER: TraceStartStopBlockUsesEmbeddedICEwatchpointInputs Position*/
#define ETM_CCER_EmbeddedICEbehaviorControlImplemented_MASK (0x01UL << ETM_CCER_EmbeddedICEbehaviorControlImplemented_SHIFT) /*!< ETM_CCER: EmbeddedICEbehaviorControlImplemented Mask*/
#define ETM_CCER_EmbeddedICEbehaviorControlImplemented_SHIFT 21                                      /*!< ETM_CCER: EmbeddedICEbehaviorControlImplemented Position*/
#define ETM_CCER_TimestampingImplemented_MASK    (0x01UL << ETM_CCER_TimestampingImplemented_SHIFT)  /*!< ETM_CCER: TimestampingImplemented Mask  */
#define ETM_CCER_TimestampingImplemented_SHIFT   22                                                  /*!< ETM_CCER: TimestampingImplemented Position*/
#define ETM_CCER_ReducedFunctionCounter_MASK     (0x01UL << ETM_CCER_ReducedFunctionCounter_SHIFT)   /*!< ETM_CCER: ReducedFunctionCounter Mask   */
#define ETM_CCER_ReducedFunctionCounter_SHIFT    27                                                  /*!< ETM_CCER: ReducedFunctionCounter Position*/
#define ETM_CCER_TimestampEncoding_MASK          (0x01UL << ETM_CCER_TimestampEncoding_SHIFT)        /*!< ETM_CCER: TimestampEncoding Mask        */
#define ETM_CCER_TimestampEncoding_SHIFT         28                                                  /*!< ETM_CCER: TimestampEncoding Position    */
#define ETM_CCER_TimestampSize_MASK              (0x01UL << ETM_CCER_TimestampSize_SHIFT)            /*!< ETM_CCER: TimestampSize Mask            */
#define ETM_CCER_TimestampSize_SHIFT             29                                                  /*!< ETM_CCER: TimestampSize Position        */
/* ------- TESSEICR Bit Fields                      ------ */
#define ETM_TESSEICR_StartResourceSelection_MASK (0x0FUL << ETM_TESSEICR_StartResourceSelection_SHIFT) /*!< ETM_TESSEICR: StartResourceSelection Mask*/
#define ETM_TESSEICR_StartResourceSelection_SHIFT 0                                                  /*!< ETM_TESSEICR: StartResourceSelection Position*/
#define ETM_TESSEICR_StartResourceSelection(x)   (((uint32_t)(((uint32_t)(x))<<ETM_TESSEICR_StartResourceSelection_SHIFT))&ETM_TESSEICR_StartResourceSelection_MASK) /*!< ETM_TESSEICR                            */
#define ETM_TESSEICR_StopResourceSelection_MASK  (0x0FUL << ETM_TESSEICR_StopResourceSelection_SHIFT) /*!< ETM_TESSEICR: StopResourceSelection Mask*/
#define ETM_TESSEICR_StopResourceSelection_SHIFT 16                                                  /*!< ETM_TESSEICR: StopResourceSelection Position*/
#define ETM_TESSEICR_StopResourceSelection(x)    (((uint32_t)(((uint32_t)(x))<<ETM_TESSEICR_StopResourceSelection_SHIFT))&ETM_TESSEICR_StopResourceSelection_MASK) /*!< ETM_TESSEICR                            */
/* ------- TSEVR Bit Fields                         ------ */
#define ETM_TSEVR_TimestampEvent_MASK            (0xFFFUL << ETM_TSEVR_TimestampEvent_SHIFT)         /*!< ETM_TSEVR: TimestampEvent Mask          */
#define ETM_TSEVR_TimestampEvent_SHIFT           0                                                   /*!< ETM_TSEVR: TimestampEvent Position      */
#define ETM_TSEVR_TimestampEvent(x)              (((uint32_t)(((uint32_t)(x))<<ETM_TSEVR_TimestampEvent_SHIFT))&ETM_TSEVR_TimestampEvent_MASK) /*!< ETM_TSEVR                               */
/* ------- TRACEIDR Bit Fields                      ------ */
#define ETM_TRACEIDR_TraceID_MASK                (0x7FUL << ETM_TRACEIDR_TraceID_SHIFT)              /*!< ETM_TRACEIDR: TraceID Mask              */
#define ETM_TRACEIDR_TraceID_SHIFT               0                                                   /*!< ETM_TRACEIDR: TraceID Position          */
#define ETM_TRACEIDR_TraceID(x)                  (((uint32_t)(((uint32_t)(x))<<ETM_TRACEIDR_TraceID_SHIFT))&ETM_TRACEIDR_TraceID_MASK) /*!< ETM_TRACEIDR                            */
/* ------- IDR2 Bit Fields                          ------ */
/* ------- PDSR Bit Fields                          ------ */
#define ETM_PDSR_ETMpoweredup_MASK               (0x01UL << ETM_PDSR_ETMpoweredup_SHIFT)             /*!< ETM_PDSR: ETMpoweredup Mask             */
#define ETM_PDSR_ETMpoweredup_SHIFT              0                                                   /*!< ETM_PDSR: ETMpoweredup Position         */
/* ------- _ITMISCIN Bit Fields                     ------ */
#define ETM__ITMISCIN_EXTIN_MASK                 (0x03UL << ETM__ITMISCIN_EXTIN_SHIFT)               /*!< ETM__ITMISCIN: EXTIN Mask               */
#define ETM__ITMISCIN_EXTIN_SHIFT                0                                                   /*!< ETM__ITMISCIN: EXTIN Position           */
#define ETM__ITMISCIN_EXTIN(x)                   (((uint32_t)(((uint32_t)(x))<<ETM__ITMISCIN_EXTIN_SHIFT))&ETM__ITMISCIN_EXTIN_MASK) /*!< ETM__ITMISCIN                           */
#define ETM__ITMISCIN_COREHALT_MASK              (0x01UL << ETM__ITMISCIN_COREHALT_SHIFT)            /*!< ETM__ITMISCIN: COREHALT Mask            */
#define ETM__ITMISCIN_COREHALT_SHIFT             4                                                   /*!< ETM__ITMISCIN: COREHALT Position        */
/* ------- _ITTRIGOUT Bit Fields                    ------ */
#define ETM__ITTRIGOUT_TRIGGER_MASK              (0x01UL << ETM__ITTRIGOUT_TRIGGER_SHIFT)            /*!< ETM__ITTRIGOUT: TRIGGER Mask            */
#define ETM__ITTRIGOUT_TRIGGER_SHIFT             0                                                   /*!< ETM__ITTRIGOUT: TRIGGER Position        */
/* ------- _ITATBCTR2 Bit Fields                    ------ */
#define ETM__ITATBCTR2_ATREADY_MASK              (0x01UL << ETM__ITATBCTR2_ATREADY_SHIFT)            /*!< ETM__ITATBCTR2: ATREADY Mask            */
#define ETM__ITATBCTR2_ATREADY_SHIFT             0                                                   /*!< ETM__ITATBCTR2: ATREADY Position        */
/* ------- _ITATBCTR0 Bit Fields                    ------ */
#define ETM__ITATBCTR0_ATVALID_MASK              (0x01UL << ETM__ITATBCTR0_ATVALID_SHIFT)            /*!< ETM__ITATBCTR0: ATVALID Mask            */
#define ETM__ITATBCTR0_ATVALID_SHIFT             0                                                   /*!< ETM__ITATBCTR0: ATVALID Position        */
/* ------- ITCTRL Bit Fields                        ------ */
#define ETM_ITCTRL_Mode_MASK                     (0x01UL << ETM_ITCTRL_Mode_SHIFT)                   /*!< ETM_ITCTRL: Mode Mask                   */
#define ETM_ITCTRL_Mode_SHIFT                    0                                                   /*!< ETM_ITCTRL: Mode Position               */
/* ------- CLAIMSET Bit Fields                      ------ */
#define ETM_CLAIMSET_CLAIMSET_MASK               (0x0FUL << ETM_CLAIMSET_CLAIMSET_SHIFT)             /*!< ETM_CLAIMSET: CLAIMSET Mask             */
#define ETM_CLAIMSET_CLAIMSET_SHIFT              0                                                   /*!< ETM_CLAIMSET: CLAIMSET Position         */
#define ETM_CLAIMSET_CLAIMSET(x)                 (((uint32_t)(((uint32_t)(x))<<ETM_CLAIMSET_CLAIMSET_SHIFT))&ETM_CLAIMSET_CLAIMSET_MASK) /*!< ETM_CLAIMSET                            */
/* ------- CLAIMCLR Bit Fields                      ------ */
#define ETM_CLAIMCLR_CLAIMCLR_MASK               (0x0FUL << ETM_CLAIMCLR_CLAIMCLR_SHIFT)             /*!< ETM_CLAIMCLR: CLAIMCLR Mask             */
#define ETM_CLAIMCLR_CLAIMCLR_SHIFT              0                                                   /*!< ETM_CLAIMCLR: CLAIMCLR Position         */
#define ETM_CLAIMCLR_CLAIMCLR(x)                 (((uint32_t)(((uint32_t)(x))<<ETM_CLAIMCLR_CLAIMCLR_SHIFT))&ETM_CLAIMCLR_CLAIMCLR_MASK) /*!< ETM_CLAIMCLR                            */
/* ------- LAR Bit Fields                           ------ */
#define ETM_LAR_WriteAccessCode_MASK             (0xFFFFFFFFUL << ETM_LAR_WriteAccessCode_SHIFT)     /*!< ETM_LAR: WriteAccessCode Mask           */
#define ETM_LAR_WriteAccessCode_SHIFT            0                                                   /*!< ETM_LAR: WriteAccessCode Position       */
#define ETM_LAR_WriteAccessCode(x)               (((uint32_t)(((uint32_t)(x))<<ETM_LAR_WriteAccessCode_SHIFT))&ETM_LAR_WriteAccessCode_MASK) /*!< ETM_LAR                                 */
/* ------- LSR Bit Fields                           ------ */
#define ETM_LSR_IMP_MASK                         (0x01UL << ETM_LSR_IMP_SHIFT)                       /*!< ETM_LSR: IMP Mask                       */
#define ETM_LSR_IMP_SHIFT                        0                                                   /*!< ETM_LSR: IMP Position                   */
#define ETM_LSR_STATUS_MASK                      (0x01UL << ETM_LSR_STATUS_SHIFT)                    /*!< ETM_LSR: STATUS Mask                    */
#define ETM_LSR_STATUS_SHIFT                     1                                                   /*!< ETM_LSR: STATUS Position                */
#define ETM_LSR_s8BIT_MASK                       (0x01UL << ETM_LSR_s8BIT_SHIFT)                     /*!< ETM_LSR: s8BIT Mask                     */
#define ETM_LSR_s8BIT_SHIFT                      2                                                   /*!< ETM_LSR: s8BIT Position                 */
/* ------- AUTHSTATUS Bit Fields                    ------ */
#define ETM_AUTHSTATUS_NSID_MASK                 (0x03UL << ETM_AUTHSTATUS_NSID_SHIFT)               /*!< ETM_AUTHSTATUS: NSID Mask               */
#define ETM_AUTHSTATUS_NSID_SHIFT                0                                                   /*!< ETM_AUTHSTATUS: NSID Position           */
#define ETM_AUTHSTATUS_NSID(x)                   (((uint32_t)(((uint32_t)(x))<<ETM_AUTHSTATUS_NSID_SHIFT))&ETM_AUTHSTATUS_NSID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_NSNID_MASK                (0x03UL << ETM_AUTHSTATUS_NSNID_SHIFT)              /*!< ETM_AUTHSTATUS: NSNID Mask              */
#define ETM_AUTHSTATUS_NSNID_SHIFT               2                                                   /*!< ETM_AUTHSTATUS: NSNID Position          */
#define ETM_AUTHSTATUS_NSNID(x)                  (((uint32_t)(((uint32_t)(x))<<ETM_AUTHSTATUS_NSNID_SHIFT))&ETM_AUTHSTATUS_NSNID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_SID_MASK                  (0x03UL << ETM_AUTHSTATUS_SID_SHIFT)                /*!< ETM_AUTHSTATUS: SID Mask                */
#define ETM_AUTHSTATUS_SID_SHIFT                 4                                                   /*!< ETM_AUTHSTATUS: SID Position            */
#define ETM_AUTHSTATUS_SID(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_AUTHSTATUS_SID_SHIFT))&ETM_AUTHSTATUS_SID_MASK) /*!< ETM_AUTHSTATUS                          */
#define ETM_AUTHSTATUS_SNID_MASK                 (0x03UL << ETM_AUTHSTATUS_SNID_SHIFT)               /*!< ETM_AUTHSTATUS: SNID Mask               */
#define ETM_AUTHSTATUS_SNID_SHIFT                6                                                   /*!< ETM_AUTHSTATUS: SNID Position           */
#define ETM_AUTHSTATUS_SNID(x)                   (((uint32_t)(((uint32_t)(x))<<ETM_AUTHSTATUS_SNID_SHIFT))&ETM_AUTHSTATUS_SNID_MASK) /*!< ETM_AUTHSTATUS                          */
/* ------- DEVTYPE Bit Fields                       ------ */
#define ETM_DEVTYPE_MajorType_MASK               (0x0FUL << ETM_DEVTYPE_MajorType_SHIFT)             /*!< ETM_DEVTYPE: MajorType Mask             */
#define ETM_DEVTYPE_MajorType_SHIFT              0                                                   /*!< ETM_DEVTYPE: MajorType Position         */
#define ETM_DEVTYPE_MajorType(x)                 (((uint32_t)(((uint32_t)(x))<<ETM_DEVTYPE_MajorType_SHIFT))&ETM_DEVTYPE_MajorType_MASK) /*!< ETM_DEVTYPE                             */
#define ETM_DEVTYPE_SubType_MASK                 (0x0FUL << ETM_DEVTYPE_SubType_SHIFT)               /*!< ETM_DEVTYPE: SubType Mask               */
#define ETM_DEVTYPE_SubType_SHIFT                4                                                   /*!< ETM_DEVTYPE: SubType Position           */
#define ETM_DEVTYPE_SubType(x)                   (((uint32_t)(((uint32_t)(x))<<ETM_DEVTYPE_SubType_SHIFT))&ETM_DEVTYPE_SubType_MASK) /*!< ETM_DEVTYPE                             */
/* ------- PIDR4 Bit Fields                         ------ */
#define ETM_PIDR4_JEP106_MASK                    (0x0FUL << ETM_PIDR4_JEP106_SHIFT)                  /*!< ETM_PIDR4: JEP106 Mask                  */
#define ETM_PIDR4_JEP106_SHIFT                   0                                                   /*!< ETM_PIDR4: JEP106 Position              */
#define ETM_PIDR4_JEP106(x)                      (((uint32_t)(((uint32_t)(x))<<ETM_PIDR4_JEP106_SHIFT))&ETM_PIDR4_JEP106_MASK) /*!< ETM_PIDR4                               */
#define ETM_PIDR4_c4KB_MASK                      (0x0FUL << ETM_PIDR4_c4KB_SHIFT)                    /*!< ETM_PIDR4: c4KB Mask                    */
#define ETM_PIDR4_c4KB_SHIFT                     4                                                   /*!< ETM_PIDR4: c4KB Position                */
#define ETM_PIDR4_c4KB(x)                        (((uint32_t)(((uint32_t)(x))<<ETM_PIDR4_c4KB_SHIFT))&ETM_PIDR4_c4KB_MASK) /*!< ETM_PIDR4                               */
/* ------- PIDR5 Bit Fields                         ------ */
/* ------- PIDR6 Bit Fields                         ------ */
/* ------- PIDR7 Bit Fields                         ------ */
/* ------- PIDR0 Bit Fields                         ------ */
#define ETM_PIDR0_PartNumber_MASK                (0xFFUL << ETM_PIDR0_PartNumber_SHIFT)              /*!< ETM_PIDR0: PartNumber Mask              */
#define ETM_PIDR0_PartNumber_SHIFT               0                                                   /*!< ETM_PIDR0: PartNumber Position          */
#define ETM_PIDR0_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<ETM_PIDR0_PartNumber_SHIFT))&ETM_PIDR0_PartNumber_MASK) /*!< ETM_PIDR0                               */
/* ------- PIDR1 Bit Fields                         ------ */
#define ETM_PIDR1_PartNumber_MASK                (0x0FUL << ETM_PIDR1_PartNumber_SHIFT)              /*!< ETM_PIDR1: PartNumber Mask              */
#define ETM_PIDR1_PartNumber_SHIFT               0                                                   /*!< ETM_PIDR1: PartNumber Position          */
#define ETM_PIDR1_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<ETM_PIDR1_PartNumber_SHIFT))&ETM_PIDR1_PartNumber_MASK) /*!< ETM_PIDR1                               */
#define ETM_PIDR1_JEP106_identity_code_MASK      (0x0FUL << ETM_PIDR1_JEP106_identity_code_SHIFT)    /*!< ETM_PIDR1: JEP106_identity_code Mask    */
#define ETM_PIDR1_JEP106_identity_code_SHIFT     4                                                   /*!< ETM_PIDR1: JEP106_identity_code Position*/
#define ETM_PIDR1_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<ETM_PIDR1_JEP106_identity_code_SHIFT))&ETM_PIDR1_JEP106_identity_code_MASK) /*!< ETM_PIDR1                               */
/* ------- PIDR2 Bit Fields                         ------ */
#define ETM_PIDR2_JEP106_identity_code_MASK      (0x07UL << ETM_PIDR2_JEP106_identity_code_SHIFT)    /*!< ETM_PIDR2: JEP106_identity_code Mask    */
#define ETM_PIDR2_JEP106_identity_code_SHIFT     0                                                   /*!< ETM_PIDR2: JEP106_identity_code Position*/
#define ETM_PIDR2_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<ETM_PIDR2_JEP106_identity_code_SHIFT))&ETM_PIDR2_JEP106_identity_code_MASK) /*!< ETM_PIDR2                               */
#define ETM_PIDR2_Revision_MASK                  (0x0FUL << ETM_PIDR2_Revision_SHIFT)                /*!< ETM_PIDR2: Revision Mask                */
#define ETM_PIDR2_Revision_SHIFT                 4                                                   /*!< ETM_PIDR2: Revision Position            */
#define ETM_PIDR2_Revision(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_PIDR2_Revision_SHIFT))&ETM_PIDR2_Revision_MASK) /*!< ETM_PIDR2                               */
/* ------- PIDR3 Bit Fields                         ------ */
#define ETM_PIDR3_CustomerModified_MASK          (0x0FUL << ETM_PIDR3_CustomerModified_SHIFT)        /*!< ETM_PIDR3: CustomerModified Mask        */
#define ETM_PIDR3_CustomerModified_SHIFT         0                                                   /*!< ETM_PIDR3: CustomerModified Position    */
#define ETM_PIDR3_CustomerModified(x)            (((uint32_t)(((uint32_t)(x))<<ETM_PIDR3_CustomerModified_SHIFT))&ETM_PIDR3_CustomerModified_MASK) /*!< ETM_PIDR3                               */
#define ETM_PIDR3_RevAnd_MASK                    (0x0FUL << ETM_PIDR3_RevAnd_SHIFT)                  /*!< ETM_PIDR3: RevAnd Mask                  */
#define ETM_PIDR3_RevAnd_SHIFT                   4                                                   /*!< ETM_PIDR3: RevAnd Position              */
#define ETM_PIDR3_RevAnd(x)                      (((uint32_t)(((uint32_t)(x))<<ETM_PIDR3_RevAnd_SHIFT))&ETM_PIDR3_RevAnd_MASK) /*!< ETM_PIDR3                               */
/* ------- CIDR0 Bit Fields                         ------ */
#define ETM_CIDR0_Preamble_MASK                  (0xFFUL << ETM_CIDR0_Preamble_SHIFT)                /*!< ETM_CIDR0: Preamble Mask                */
#define ETM_CIDR0_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR0: Preamble Position            */
#define ETM_CIDR0_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_CIDR0_Preamble_SHIFT))&ETM_CIDR0_Preamble_MASK) /*!< ETM_CIDR0                               */
/* ------- CIDR1 Bit Fields                         ------ */
#define ETM_CIDR1_Preamble_MASK                  (0x0FUL << ETM_CIDR1_Preamble_SHIFT)                /*!< ETM_CIDR1: Preamble Mask                */
#define ETM_CIDR1_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR1: Preamble Position            */
#define ETM_CIDR1_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_CIDR1_Preamble_SHIFT))&ETM_CIDR1_Preamble_MASK) /*!< ETM_CIDR1                               */
#define ETM_CIDR1_ComponentClass_MASK            (0x0FUL << ETM_CIDR1_ComponentClass_SHIFT)          /*!< ETM_CIDR1: ComponentClass Mask          */
#define ETM_CIDR1_ComponentClass_SHIFT           4                                                   /*!< ETM_CIDR1: ComponentClass Position      */
#define ETM_CIDR1_ComponentClass(x)              (((uint32_t)(((uint32_t)(x))<<ETM_CIDR1_ComponentClass_SHIFT))&ETM_CIDR1_ComponentClass_MASK) /*!< ETM_CIDR1                               */
/* ------- CIDR2 Bit Fields                         ------ */
#define ETM_CIDR2_Preamble_MASK                  (0xFFUL << ETM_CIDR2_Preamble_SHIFT)                /*!< ETM_CIDR2: Preamble Mask                */
#define ETM_CIDR2_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR2: Preamble Position            */
#define ETM_CIDR2_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_CIDR2_Preamble_SHIFT))&ETM_CIDR2_Preamble_MASK) /*!< ETM_CIDR2                               */
/* ------- CIDR3 Bit Fields                         ------ */
#define ETM_CIDR3_Preamble_MASK                  (0xFFUL << ETM_CIDR3_Preamble_SHIFT)                /*!< ETM_CIDR3: Preamble Mask                */
#define ETM_CIDR3_Preamble_SHIFT                 0                                                   /*!< ETM_CIDR3: Preamble Position            */
#define ETM_CIDR3_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<ETM_CIDR3_Preamble_SHIFT))&ETM_CIDR3_Preamble_MASK) /*!< ETM_CIDR3                               */

/* ETM - Peripheral instance base addresses */
#define ETM_BasePtr                    0xE0041000UL
#define ETM                            ((ETM_Type *) ETM_BasePtr)
#define ETM_BASE_PTR                   (ETM)

/* ================================================================================ */
/* ================           EWM (file:EWM_MK_0)                  ================ */
/* ================================================================================ */

/**
 * @brief External Watchdog Monitor
 */
typedef struct {                                /*!<       EWM Structure                                                */
   __IO uint8_t   CTRL;                         /*!< 0000: Control Register                                             */
   __O  uint8_t   SERV;                         /*!< 0001: Service Register                                             */
   __IO uint8_t   CMPL;                         /*!< 0002: Compare Low Register                                         */
   __IO uint8_t   CMPH;                         /*!< 0003: Compare High Register                                        */
} EWM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'EWM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CTRL Bit Fields                          ------ */
#define EWM_CTRL_EWMEN_MASK                      (0x01UL << EWM_CTRL_EWMEN_SHIFT)                    /*!< EWM_CTRL: EWMEN Mask                    */
#define EWM_CTRL_EWMEN_SHIFT                     0                                                   /*!< EWM_CTRL: EWMEN Position                */
#define EWM_CTRL_ASSIN_MASK                      (0x01UL << EWM_CTRL_ASSIN_SHIFT)                    /*!< EWM_CTRL: ASSIN Mask                    */
#define EWM_CTRL_ASSIN_SHIFT                     1                                                   /*!< EWM_CTRL: ASSIN Position                */
#define EWM_CTRL_INEN_MASK                       (0x01UL << EWM_CTRL_INEN_SHIFT)                     /*!< EWM_CTRL: INEN Mask                     */
#define EWM_CTRL_INEN_SHIFT                      2                                                   /*!< EWM_CTRL: INEN Position                 */
#define EWM_CTRL_INTEN_MASK                      (0x01UL << EWM_CTRL_INTEN_SHIFT)                    /*!< EWM_CTRL: INTEN Mask                    */
#define EWM_CTRL_INTEN_SHIFT                     3                                                   /*!< EWM_CTRL: INTEN Position                */
/* ------- SERV Bit Fields                          ------ */
#define EWM_SERV_SERVICE_MASK                    (0xFFUL << EWM_SERV_SERVICE_SHIFT)                  /*!< EWM_SERV: SERVICE Mask                  */
#define EWM_SERV_SERVICE_SHIFT                   0                                                   /*!< EWM_SERV: SERVICE Position              */
#define EWM_SERV_SERVICE(x)                      (((uint8_t)(((uint8_t)(x))<<EWM_SERV_SERVICE_SHIFT))&EWM_SERV_SERVICE_MASK) /*!< EWM_SERV                                */
/* ------- CMPL Bit Fields                          ------ */
#define EWM_CMPL_COMPAREL_MASK                   (0xFFUL << EWM_CMPL_COMPAREL_SHIFT)                 /*!< EWM_CMPL: COMPAREL Mask                 */
#define EWM_CMPL_COMPAREL_SHIFT                  0                                                   /*!< EWM_CMPL: COMPAREL Position             */
#define EWM_CMPL_COMPAREL(x)                     (((uint8_t)(((uint8_t)(x))<<EWM_CMPL_COMPAREL_SHIFT))&EWM_CMPL_COMPAREL_MASK) /*!< EWM_CMPL                                */
/* ------- CMPH Bit Fields                          ------ */
#define EWM_CMPH_COMPAREH_MASK                   (0xFFUL << EWM_CMPH_COMPAREH_SHIFT)                 /*!< EWM_CMPH: COMPAREH Mask                 */
#define EWM_CMPH_COMPAREH_SHIFT                  0                                                   /*!< EWM_CMPH: COMPAREH Position             */
#define EWM_CMPH_COMPAREH(x)                     (((uint8_t)(((uint8_t)(x))<<EWM_CMPH_COMPAREH_SHIFT))&EWM_CMPH_COMPAREH_MASK) /*!< EWM_CMPH                                */

/* EWM - Peripheral instance base addresses */
#define EWM_BasePtr                    0x40061000UL
#define EWM                            ((EWM_Type *) EWM_BasePtr)
#define EWM_BASE_PTR                   (EWM)

/* ================================================================================ */
/* ================           FB (file:FB_0)                       ================ */
/* ================================================================================ */

/**
 * @brief FlexBus external bus interface
 */
typedef struct {                                /*!<       FB Structure                                                 */
   struct { /* (cluster) */                     /*!< 0000: (size=0x0048, 72)                                            */
      __IO uint32_t  CSAR;                      /*!< 0000: Chip Select Address Register                                 */
      __IO uint32_t  CSMR;                      /*!< 0004: Chip Select Mask Register                                    */
      __IO uint32_t  CSCR;                      /*!< 0008: Chip Select Control Register                                 */
   } CS[6];
   __I  uint32_t  RESERVED0[6];                 /*!< 0048:                                                              */
   __IO uint32_t  CSPMCR;                       /*!< 0060: Chip Select port Multiplexing Control Register               */
} FB_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FB' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CSAR Bit Fields                          ------ */
#define FB_CSAR_BA_MASK                          (0xFFFFUL << FB_CSAR_BA_SHIFT)                      /*!< FB_CSAR: BA Mask                        */
#define FB_CSAR_BA_SHIFT                         16                                                  /*!< FB_CSAR: BA Position                    */
#define FB_CSAR_BA(x)                            (((uint32_t)(((uint32_t)(x))<<FB_CSAR_BA_SHIFT))&FB_CSAR_BA_MASK) /*!< FB_CSAR                                 */
/* ------- CSMR Bit Fields                          ------ */
#define FB_CSMR_V_MASK                           (0x01UL << FB_CSMR_V_SHIFT)                         /*!< FB_CSMR: V Mask                         */
#define FB_CSMR_V_SHIFT                          0                                                   /*!< FB_CSMR: V Position                     */
#define FB_CSMR_WP_MASK                          (0x01UL << FB_CSMR_WP_SHIFT)                        /*!< FB_CSMR: WP Mask                        */
#define FB_CSMR_WP_SHIFT                         8                                                   /*!< FB_CSMR: WP Position                    */
#define FB_CSMR_BAM_MASK                         (0xFFFFUL << FB_CSMR_BAM_SHIFT)                     /*!< FB_CSMR: BAM Mask                       */
#define FB_CSMR_BAM_SHIFT                        16                                                  /*!< FB_CSMR: BAM Position                   */
#define FB_CSMR_BAM(x)                           (((uint32_t)(((uint32_t)(x))<<FB_CSMR_BAM_SHIFT))&FB_CSMR_BAM_MASK) /*!< FB_CSMR                                 */
/* ------- CSCR Bit Fields                          ------ */
#define FB_CSCR_BSTW_MASK                        (0x01UL << FB_CSCR_BSTW_SHIFT)                      /*!< FB_CSCR: BSTW Mask                      */
#define FB_CSCR_BSTW_SHIFT                       3                                                   /*!< FB_CSCR: BSTW Position                  */
#define FB_CSCR_BSTR_MASK                        (0x01UL << FB_CSCR_BSTR_SHIFT)                      /*!< FB_CSCR: BSTR Mask                      */
#define FB_CSCR_BSTR_SHIFT                       4                                                   /*!< FB_CSCR: BSTR Position                  */
#define FB_CSCR_BEM_MASK                         (0x01UL << FB_CSCR_BEM_SHIFT)                       /*!< FB_CSCR: BEM Mask                       */
#define FB_CSCR_BEM_SHIFT                        5                                                   /*!< FB_CSCR: BEM Position                   */
#define FB_CSCR_PS_MASK                          (0x03UL << FB_CSCR_PS_SHIFT)                        /*!< FB_CSCR: PS Mask                        */
#define FB_CSCR_PS_SHIFT                         6                                                   /*!< FB_CSCR: PS Position                    */
#define FB_CSCR_PS(x)                            (((uint32_t)(((uint32_t)(x))<<FB_CSCR_PS_SHIFT))&FB_CSCR_PS_MASK) /*!< FB_CSCR                                 */
#define FB_CSCR_AA_MASK                          (0x01UL << FB_CSCR_AA_SHIFT)                        /*!< FB_CSCR: AA Mask                        */
#define FB_CSCR_AA_SHIFT                         8                                                   /*!< FB_CSCR: AA Position                    */
#define FB_CSCR_BLS_MASK                         (0x01UL << FB_CSCR_BLS_SHIFT)                       /*!< FB_CSCR: BLS Mask                       */
#define FB_CSCR_BLS_SHIFT                        9                                                   /*!< FB_CSCR: BLS Position                   */
#define FB_CSCR_WS_MASK                          (0x3FUL << FB_CSCR_WS_SHIFT)                        /*!< FB_CSCR: WS Mask                        */
#define FB_CSCR_WS_SHIFT                         10                                                  /*!< FB_CSCR: WS Position                    */
#define FB_CSCR_WS(x)                            (((uint32_t)(((uint32_t)(x))<<FB_CSCR_WS_SHIFT))&FB_CSCR_WS_MASK) /*!< FB_CSCR                                 */
#define FB_CSCR_WRAH_MASK                        (0x03UL << FB_CSCR_WRAH_SHIFT)                      /*!< FB_CSCR: WRAH Mask                      */
#define FB_CSCR_WRAH_SHIFT                       16                                                  /*!< FB_CSCR: WRAH Position                  */
#define FB_CSCR_WRAH(x)                          (((uint32_t)(((uint32_t)(x))<<FB_CSCR_WRAH_SHIFT))&FB_CSCR_WRAH_MASK) /*!< FB_CSCR                                 */
#define FB_CSCR_RDAH_MASK                        (0x03UL << FB_CSCR_RDAH_SHIFT)                      /*!< FB_CSCR: RDAH Mask                      */
#define FB_CSCR_RDAH_SHIFT                       18                                                  /*!< FB_CSCR: RDAH Position                  */
#define FB_CSCR_RDAH(x)                          (((uint32_t)(((uint32_t)(x))<<FB_CSCR_RDAH_SHIFT))&FB_CSCR_RDAH_MASK) /*!< FB_CSCR                                 */
#define FB_CSCR_ASET_MASK                        (0x03UL << FB_CSCR_ASET_SHIFT)                      /*!< FB_CSCR: ASET Mask                      */
#define FB_CSCR_ASET_SHIFT                       20                                                  /*!< FB_CSCR: ASET Position                  */
#define FB_CSCR_ASET(x)                          (((uint32_t)(((uint32_t)(x))<<FB_CSCR_ASET_SHIFT))&FB_CSCR_ASET_MASK) /*!< FB_CSCR                                 */
#define FB_CSCR_EXTS_MASK                        (0x01UL << FB_CSCR_EXTS_SHIFT)                      /*!< FB_CSCR: EXTS Mask                      */
#define FB_CSCR_EXTS_SHIFT                       22                                                  /*!< FB_CSCR: EXTS Position                  */
#define FB_CSCR_SWSEN_MASK                       (0x01UL << FB_CSCR_SWSEN_SHIFT)                     /*!< FB_CSCR: SWSEN Mask                     */
#define FB_CSCR_SWSEN_SHIFT                      23                                                  /*!< FB_CSCR: SWSEN Position                 */
#define FB_CSCR_SWS_MASK                         (0x3FUL << FB_CSCR_SWS_SHIFT)                       /*!< FB_CSCR: SWS Mask                       */
#define FB_CSCR_SWS_SHIFT                        26                                                  /*!< FB_CSCR: SWS Position                   */
#define FB_CSCR_SWS(x)                           (((uint32_t)(((uint32_t)(x))<<FB_CSCR_SWS_SHIFT))&FB_CSCR_SWS_MASK) /*!< FB_CSCR                                 */
/* ------- CSPMCR Bit Fields                        ------ */
#define FB_CSPMCR_GROUP5_MASK                    (0x0FUL << FB_CSPMCR_GROUP5_SHIFT)                  /*!< FB_CSPMCR: GROUP5 Mask                  */
#define FB_CSPMCR_GROUP5_SHIFT                   12                                                  /*!< FB_CSPMCR: GROUP5 Position              */
#define FB_CSPMCR_GROUP5(x)                      (((uint32_t)(((uint32_t)(x))<<FB_CSPMCR_GROUP5_SHIFT))&FB_CSPMCR_GROUP5_MASK) /*!< FB_CSPMCR                               */
#define FB_CSPMCR_GROUP4_MASK                    (0x0FUL << FB_CSPMCR_GROUP4_SHIFT)                  /*!< FB_CSPMCR: GROUP4 Mask                  */
#define FB_CSPMCR_GROUP4_SHIFT                   16                                                  /*!< FB_CSPMCR: GROUP4 Position              */
#define FB_CSPMCR_GROUP4(x)                      (((uint32_t)(((uint32_t)(x))<<FB_CSPMCR_GROUP4_SHIFT))&FB_CSPMCR_GROUP4_MASK) /*!< FB_CSPMCR                               */
#define FB_CSPMCR_GROUP3_MASK                    (0x0FUL << FB_CSPMCR_GROUP3_SHIFT)                  /*!< FB_CSPMCR: GROUP3 Mask                  */
#define FB_CSPMCR_GROUP3_SHIFT                   20                                                  /*!< FB_CSPMCR: GROUP3 Position              */
#define FB_CSPMCR_GROUP3(x)                      (((uint32_t)(((uint32_t)(x))<<FB_CSPMCR_GROUP3_SHIFT))&FB_CSPMCR_GROUP3_MASK) /*!< FB_CSPMCR                               */
#define FB_CSPMCR_GROUP2_MASK                    (0x0FUL << FB_CSPMCR_GROUP2_SHIFT)                  /*!< FB_CSPMCR: GROUP2 Mask                  */
#define FB_CSPMCR_GROUP2_SHIFT                   24                                                  /*!< FB_CSPMCR: GROUP2 Position              */
#define FB_CSPMCR_GROUP2(x)                      (((uint32_t)(((uint32_t)(x))<<FB_CSPMCR_GROUP2_SHIFT))&FB_CSPMCR_GROUP2_MASK) /*!< FB_CSPMCR                               */
#define FB_CSPMCR_GROUP1_MASK                    (0x0FUL << FB_CSPMCR_GROUP1_SHIFT)                  /*!< FB_CSPMCR: GROUP1 Mask                  */
#define FB_CSPMCR_GROUP1_SHIFT                   28                                                  /*!< FB_CSPMCR: GROUP1 Position              */
#define FB_CSPMCR_GROUP1(x)                      (((uint32_t)(((uint32_t)(x))<<FB_CSPMCR_GROUP1_SHIFT))&FB_CSPMCR_GROUP1_MASK) /*!< FB_CSPMCR                               */

/* FB - Peripheral instance base addresses */
#define FB_BasePtr                     0x4000C000UL
#define FB                             ((FB_Type *) FB_BasePtr)
#define FB_BASE_PTR                    (FB)

/* ================================================================================ */
/* ================           FMC (file:FMC_MK22F12)               ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Controller
 */
typedef struct {                                /*!<       FMC Structure                                                */
   __IO uint32_t  PFAPR;                        /*!< 0000: Flash Access Protection Register                             */
   __IO uint32_t  PFB0CR;                       /*!< 0004: Flash Bank 0 Control Register                                */
   __IO uint32_t  PFB1CR;                       /*!< 0008: Flash Bank 1 Control Register                                */
   __I  uint32_t  RESERVED0[61];                /*!< 000C:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0040, 64)                                            */
      __IO uint32_t  S0;                        /*!< 0100: Cache Tag Storage                                            */
      __IO uint32_t  S1;                        /*!< 0104: Cache Tag Storage                                            */
      __IO uint32_t  S2;                        /*!< 0108: Cache Tag Storage                                            */
      __IO uint32_t  S3;                        /*!< 010C: Cache Tag Storage                                            */
   } TAGVDW[4];
   __I  uint32_t  RESERVED1[48];                /*!< 0140:                                                              */
   struct { /* (cluster) */                     /*!< 0200: (size=0x0100, 256)                                           */
      __IO uint32_t  S0UM;                      /*!< 0200: Cache Data Storage (uppermost word)                          */
      __IO uint32_t  S0MU;                      /*!< 0204: Cache Data Storage (mid-upper word)                          */
      __IO uint32_t  S0ML;                      /*!< 0208: Cache Data Storage (mid-lower word)                          */
      __IO uint32_t  S0LM;                      /*!< 020C: Cache Data Storage (lowermost word)                          */
      __IO uint32_t  S1UM;                      /*!< 0210: Cache Data Storage (uppermost word)                          */
      __IO uint32_t  S1MU;                      /*!< 0214: Cache Data Storage (mid-upper word)                          */
      __IO uint32_t  S1ML;                      /*!< 0218: Cache Data Storage (mid-lower word)                          */
      __IO uint32_t  S1LM;                      /*!< 021C: Cache Data Storage (lowermost word)                          */
      __IO uint32_t  S2UM;                      /*!< 0220: Cache Data Storage (uppermost word)                          */
      __IO uint32_t  S2MU;                      /*!< 0224: Cache Data Storage (mid-upper word)                          */
      __IO uint32_t  S2ML;                      /*!< 0228: Cache Data Storage (mid-lower word)                          */
      __IO uint32_t  S2LM;                      /*!< 022C: Cache Data Storage (lowermost word)                          */
      __IO uint32_t  S3UM;                      /*!< 0230: Cache Data Storage (uppermost word)                          */
      __IO uint32_t  S3MU;                      /*!< 0234: Cache Data Storage (mid-upper word)                          */
      __IO uint32_t  S3ML;                      /*!< 0238: Cache Data Storage (mid-lower word)                          */
      __IO uint32_t  S3LM;                      /*!< 023C: Cache Data Storage (lowermost word)                          */
   } DATAW[4];
} FMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PFAPR Bit Fields                         ------ */
#define FMC_PFAPR_M0AP_MASK                      (0x03UL << FMC_PFAPR_M0AP_SHIFT)                    /*!< FMC_PFAPR: M0AP Mask                    */
#define FMC_PFAPR_M0AP_SHIFT                     0                                                   /*!< FMC_PFAPR: M0AP Position                */
#define FMC_PFAPR_M0AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M0AP_SHIFT))&FMC_PFAPR_M0AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M1AP_MASK                      (0x03UL << FMC_PFAPR_M1AP_SHIFT)                    /*!< FMC_PFAPR: M1AP Mask                    */
#define FMC_PFAPR_M1AP_SHIFT                     2                                                   /*!< FMC_PFAPR: M1AP Position                */
#define FMC_PFAPR_M1AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M1AP_SHIFT))&FMC_PFAPR_M1AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M2AP_MASK                      (0x03UL << FMC_PFAPR_M2AP_SHIFT)                    /*!< FMC_PFAPR: M2AP Mask                    */
#define FMC_PFAPR_M2AP_SHIFT                     4                                                   /*!< FMC_PFAPR: M2AP Position                */
#define FMC_PFAPR_M2AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M2AP_SHIFT))&FMC_PFAPR_M2AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M3AP_MASK                      (0x03UL << FMC_PFAPR_M3AP_SHIFT)                    /*!< FMC_PFAPR: M3AP Mask                    */
#define FMC_PFAPR_M3AP_SHIFT                     6                                                   /*!< FMC_PFAPR: M3AP Position                */
#define FMC_PFAPR_M3AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M3AP_SHIFT))&FMC_PFAPR_M3AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M4AP_MASK                      (0x03UL << FMC_PFAPR_M4AP_SHIFT)                    /*!< FMC_PFAPR: M4AP Mask                    */
#define FMC_PFAPR_M4AP_SHIFT                     8                                                   /*!< FMC_PFAPR: M4AP Position                */
#define FMC_PFAPR_M4AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M4AP_SHIFT))&FMC_PFAPR_M4AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M5AP_MASK                      (0x03UL << FMC_PFAPR_M5AP_SHIFT)                    /*!< FMC_PFAPR: M5AP Mask                    */
#define FMC_PFAPR_M5AP_SHIFT                     10                                                  /*!< FMC_PFAPR: M5AP Position                */
#define FMC_PFAPR_M5AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M5AP_SHIFT))&FMC_PFAPR_M5AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M6AP_MASK                      (0x03UL << FMC_PFAPR_M6AP_SHIFT)                    /*!< FMC_PFAPR: M6AP Mask                    */
#define FMC_PFAPR_M6AP_SHIFT                     12                                                  /*!< FMC_PFAPR: M6AP Position                */
#define FMC_PFAPR_M6AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M6AP_SHIFT))&FMC_PFAPR_M6AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M7AP_MASK                      (0x03UL << FMC_PFAPR_M7AP_SHIFT)                    /*!< FMC_PFAPR: M7AP Mask                    */
#define FMC_PFAPR_M7AP_SHIFT                     14                                                  /*!< FMC_PFAPR: M7AP Position                */
#define FMC_PFAPR_M7AP(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFAPR_M7AP_SHIFT))&FMC_PFAPR_M7AP_MASK) /*!< FMC_PFAPR                               */
#define FMC_PFAPR_M0PFD_MASK                     (0x01UL << FMC_PFAPR_M0PFD_SHIFT)                   /*!< FMC_PFAPR: M0PFD Mask                   */
#define FMC_PFAPR_M0PFD_SHIFT                    16                                                  /*!< FMC_PFAPR: M0PFD Position               */
#define FMC_PFAPR_M1PFD_MASK                     (0x01UL << FMC_PFAPR_M1PFD_SHIFT)                   /*!< FMC_PFAPR: M1PFD Mask                   */
#define FMC_PFAPR_M1PFD_SHIFT                    17                                                  /*!< FMC_PFAPR: M1PFD Position               */
#define FMC_PFAPR_M2PFD_MASK                     (0x01UL << FMC_PFAPR_M2PFD_SHIFT)                   /*!< FMC_PFAPR: M2PFD Mask                   */
#define FMC_PFAPR_M2PFD_SHIFT                    18                                                  /*!< FMC_PFAPR: M2PFD Position               */
#define FMC_PFAPR_M3PFD_MASK                     (0x01UL << FMC_PFAPR_M3PFD_SHIFT)                   /*!< FMC_PFAPR: M3PFD Mask                   */
#define FMC_PFAPR_M3PFD_SHIFT                    19                                                  /*!< FMC_PFAPR: M3PFD Position               */
#define FMC_PFAPR_M4PFD_MASK                     (0x01UL << FMC_PFAPR_M4PFD_SHIFT)                   /*!< FMC_PFAPR: M4PFD Mask                   */
#define FMC_PFAPR_M4PFD_SHIFT                    20                                                  /*!< FMC_PFAPR: M4PFD Position               */
#define FMC_PFAPR_M5PFD_MASK                     (0x01UL << FMC_PFAPR_M5PFD_SHIFT)                   /*!< FMC_PFAPR: M5PFD Mask                   */
#define FMC_PFAPR_M5PFD_SHIFT                    21                                                  /*!< FMC_PFAPR: M5PFD Position               */
#define FMC_PFAPR_M6PFD_MASK                     (0x01UL << FMC_PFAPR_M6PFD_SHIFT)                   /*!< FMC_PFAPR: M6PFD Mask                   */
#define FMC_PFAPR_M6PFD_SHIFT                    22                                                  /*!< FMC_PFAPR: M6PFD Position               */
#define FMC_PFAPR_M7PFD_MASK                     (0x01UL << FMC_PFAPR_M7PFD_SHIFT)                   /*!< FMC_PFAPR: M7PFD Mask                   */
#define FMC_PFAPR_M7PFD_SHIFT                    23                                                  /*!< FMC_PFAPR: M7PFD Position               */
/* ------- PFB0CR Bit Fields                        ------ */
#define FMC_PFB0CR_B0SEBE_MASK                   (0x01UL << FMC_PFB0CR_B0SEBE_SHIFT)                 /*!< FMC_PFB0CR: B0SEBE Mask                 */
#define FMC_PFB0CR_B0SEBE_SHIFT                  0                                                   /*!< FMC_PFB0CR: B0SEBE Position             */
#define FMC_PFB0CR_B0IPE_MASK                    (0x01UL << FMC_PFB0CR_B0IPE_SHIFT)                  /*!< FMC_PFB0CR: B0IPE Mask                  */
#define FMC_PFB0CR_B0IPE_SHIFT                   1                                                   /*!< FMC_PFB0CR: B0IPE Position              */
#define FMC_PFB0CR_B0DPE_MASK                    (0x01UL << FMC_PFB0CR_B0DPE_SHIFT)                  /*!< FMC_PFB0CR: B0DPE Mask                  */
#define FMC_PFB0CR_B0DPE_SHIFT                   2                                                   /*!< FMC_PFB0CR: B0DPE Position              */
#define FMC_PFB0CR_B0ICE_MASK                    (0x01UL << FMC_PFB0CR_B0ICE_SHIFT)                  /*!< FMC_PFB0CR: B0ICE Mask                  */
#define FMC_PFB0CR_B0ICE_SHIFT                   3                                                   /*!< FMC_PFB0CR: B0ICE Position              */
#define FMC_PFB0CR_B0DCE_MASK                    (0x01UL << FMC_PFB0CR_B0DCE_SHIFT)                  /*!< FMC_PFB0CR: B0DCE Mask                  */
#define FMC_PFB0CR_B0DCE_SHIFT                   4                                                   /*!< FMC_PFB0CR: B0DCE Position              */
#define FMC_PFB0CR_CRC_MASK                      (0x07UL << FMC_PFB0CR_CRC_SHIFT)                    /*!< FMC_PFB0CR: CRC Mask                    */
#define FMC_PFB0CR_CRC_SHIFT                     5                                                   /*!< FMC_PFB0CR: CRC Position                */
#define FMC_PFB0CR_CRC(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_PFB0CR_CRC_SHIFT))&FMC_PFB0CR_CRC_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_B0MW_MASK                     (0x03UL << FMC_PFB0CR_B0MW_SHIFT)                   /*!< FMC_PFB0CR: B0MW Mask                   */
#define FMC_PFB0CR_B0MW_SHIFT                    17                                                  /*!< FMC_PFB0CR: B0MW Position               */
#define FMC_PFB0CR_B0MW(x)                       (((uint32_t)(((uint32_t)(x))<<FMC_PFB0CR_B0MW_SHIFT))&FMC_PFB0CR_B0MW_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_S_B_INV_MASK                  (0x01UL << FMC_PFB0CR_S_B_INV_SHIFT)                /*!< FMC_PFB0CR: S_B_INV Mask                */
#define FMC_PFB0CR_S_B_INV_SHIFT                 19                                                  /*!< FMC_PFB0CR: S_B_INV Position            */
#define FMC_PFB0CR_CINV_WAY_MASK                 (0x0FUL << FMC_PFB0CR_CINV_WAY_SHIFT)               /*!< FMC_PFB0CR: CINV_WAY Mask               */
#define FMC_PFB0CR_CINV_WAY_SHIFT                20                                                  /*!< FMC_PFB0CR: CINV_WAY Position           */
#define FMC_PFB0CR_CINV_WAY(x)                   (((uint32_t)(((uint32_t)(x))<<FMC_PFB0CR_CINV_WAY_SHIFT))&FMC_PFB0CR_CINV_WAY_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_CLCK_WAY_MASK                 (0x0FUL << FMC_PFB0CR_CLCK_WAY_SHIFT)               /*!< FMC_PFB0CR: CLCK_WAY Mask               */
#define FMC_PFB0CR_CLCK_WAY_SHIFT                24                                                  /*!< FMC_PFB0CR: CLCK_WAY Position           */
#define FMC_PFB0CR_CLCK_WAY(x)                   (((uint32_t)(((uint32_t)(x))<<FMC_PFB0CR_CLCK_WAY_SHIFT))&FMC_PFB0CR_CLCK_WAY_MASK) /*!< FMC_PFB0CR                              */
#define FMC_PFB0CR_B0RWSC_MASK                   (0x0FUL << FMC_PFB0CR_B0RWSC_SHIFT)                 /*!< FMC_PFB0CR: B0RWSC Mask                 */
#define FMC_PFB0CR_B0RWSC_SHIFT                  28                                                  /*!< FMC_PFB0CR: B0RWSC Position             */
#define FMC_PFB0CR_B0RWSC(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_PFB0CR_B0RWSC_SHIFT))&FMC_PFB0CR_B0RWSC_MASK) /*!< FMC_PFB0CR                              */
/* ------- PFB1CR Bit Fields                        ------ */
#define FMC_PFB1CR_B1SEBE_MASK                   (0x01UL << FMC_PFB1CR_B1SEBE_SHIFT)                 /*!< FMC_PFB1CR: B1SEBE Mask                 */
#define FMC_PFB1CR_B1SEBE_SHIFT                  0                                                   /*!< FMC_PFB1CR: B1SEBE Position             */
#define FMC_PFB1CR_B1IPE_MASK                    (0x01UL << FMC_PFB1CR_B1IPE_SHIFT)                  /*!< FMC_PFB1CR: B1IPE Mask                  */
#define FMC_PFB1CR_B1IPE_SHIFT                   1                                                   /*!< FMC_PFB1CR: B1IPE Position              */
#define FMC_PFB1CR_B1DPE_MASK                    (0x01UL << FMC_PFB1CR_B1DPE_SHIFT)                  /*!< FMC_PFB1CR: B1DPE Mask                  */
#define FMC_PFB1CR_B1DPE_SHIFT                   2                                                   /*!< FMC_PFB1CR: B1DPE Position              */
#define FMC_PFB1CR_B1ICE_MASK                    (0x01UL << FMC_PFB1CR_B1ICE_SHIFT)                  /*!< FMC_PFB1CR: B1ICE Mask                  */
#define FMC_PFB1CR_B1ICE_SHIFT                   3                                                   /*!< FMC_PFB1CR: B1ICE Position              */
#define FMC_PFB1CR_B1DCE_MASK                    (0x01UL << FMC_PFB1CR_B1DCE_SHIFT)                  /*!< FMC_PFB1CR: B1DCE Mask                  */
#define FMC_PFB1CR_B1DCE_SHIFT                   4                                                   /*!< FMC_PFB1CR: B1DCE Position              */
#define FMC_PFB1CR_B1MW_MASK                     (0x03UL << FMC_PFB1CR_B1MW_SHIFT)                   /*!< FMC_PFB1CR: B1MW Mask                   */
#define FMC_PFB1CR_B1MW_SHIFT                    17                                                  /*!< FMC_PFB1CR: B1MW Position               */
#define FMC_PFB1CR_B1MW(x)                       (((uint32_t)(((uint32_t)(x))<<FMC_PFB1CR_B1MW_SHIFT))&FMC_PFB1CR_B1MW_MASK) /*!< FMC_PFB1CR                              */
#define FMC_PFB1CR_B1RWSC_MASK                   (0x0FUL << FMC_PFB1CR_B1RWSC_SHIFT)                 /*!< FMC_PFB1CR: B1RWSC Mask                 */
#define FMC_PFB1CR_B1RWSC_SHIFT                  28                                                  /*!< FMC_PFB1CR: B1RWSC Position             */
#define FMC_PFB1CR_B1RWSC(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_PFB1CR_B1RWSC_SHIFT))&FMC_PFB1CR_B1RWSC_MASK) /*!< FMC_PFB1CR                              */
/* ------- S0 Bit Fields                            ------ */
#define FMC_TAGVD0_valid_MASK                    (0x01UL << FMC_TAGVD0_valid_SHIFT)                  /*!< FMC_TAGVD0: valid Mask                  */
#define FMC_TAGVD0_valid_SHIFT                   0                                                   /*!< FMC_TAGVD0: valid Position              */
#define FMC_TAGVD0_tag_MASK                      (0x1FFFUL << FMC_TAGVD0_tag_SHIFT)                  /*!< FMC_TAGVD0: tag Mask                    */
#define FMC_TAGVD0_tag_SHIFT                     6                                                   /*!< FMC_TAGVD0: tag Position                */
#define FMC_TAGVD0_tag(x)                        (((uint32_t)(((uint32_t)(x))<<FMC_TAGVD0_tag_SHIFT))&FMC_TAGVD0_tag_MASK) /*!< FMC_TAGVD0                              */
/* ------- S0UM Bit Fields                          ------ */
#define FMC_DATAW0UM_data_MASK                   (0xFFFFFFFFUL << FMC_DATAW0UM_data_SHIFT)           /*!< FMC_DATAW0UM: data Mask                 */
#define FMC_DATAW0UM_data_SHIFT                  0                                                   /*!< FMC_DATAW0UM: data Position             */
#define FMC_DATAW0UM_data(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_DATAW0UM_data_SHIFT))&FMC_DATAW0UM_data_MASK) /*!< FMC_DATAW0UM                            */
/* ------- S0MU Bit Fields                          ------ */
#define FMC_DATAW0MU_data_MASK                   (0xFFFFFFFFUL << FMC_DATAW0MU_data_SHIFT)           /*!< FMC_DATAW0MU: data Mask                 */
#define FMC_DATAW0MU_data_SHIFT                  0                                                   /*!< FMC_DATAW0MU: data Position             */
#define FMC_DATAW0MU_data(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_DATAW0MU_data_SHIFT))&FMC_DATAW0MU_data_MASK) /*!< FMC_DATAW0MU                            */
/* ------- S0ML Bit Fields                          ------ */
#define FMC_DATAW0ML_data_MASK                   (0xFFFFFFFFUL << FMC_DATAW0ML_data_SHIFT)           /*!< FMC_DATAW0ML: data Mask                 */
#define FMC_DATAW0ML_data_SHIFT                  0                                                   /*!< FMC_DATAW0ML: data Position             */
#define FMC_DATAW0ML_data(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_DATAW0ML_data_SHIFT))&FMC_DATAW0ML_data_MASK) /*!< FMC_DATAW0ML                            */
/* ------- S0LM Bit Fields                          ------ */
#define FMC_DATAW0LM_data_MASK                   (0xFFFFFFFFUL << FMC_DATAW0LM_data_SHIFT)           /*!< FMC_DATAW0LM: data Mask                 */
#define FMC_DATAW0LM_data_SHIFT                  0                                                   /*!< FMC_DATAW0LM: data Position             */
#define FMC_DATAW0LM_data(x)                     (((uint32_t)(((uint32_t)(x))<<FMC_DATAW0LM_data_SHIFT))&FMC_DATAW0LM_data_MASK) /*!< FMC_DATAW0LM                            */

/* FMC - Peripheral instance base addresses */
#define FMC_BasePtr                    0x4001F000UL
#define FMC                            ((FMC_Type *) FMC_BasePtr)
#define FMC_BASE_PTR                   (FMC)

/* ================================================================================ */
/* ================           FPB (file:FPB)                       ================ */
/* ================================================================================ */

/**
 * @brief Flash Patch and Breakpoint Unit
 */
typedef struct {                                /*!<       FPB Structure                                                */
   __IO uint32_t  CTRL;                         /*!< 0000: FlashPatch Control Register                                  */
   __IO uint32_t  REMAP;                        /*!< 0004: FlashPatch Remap Register                                    */
   __IO uint32_t  COMP[8];                      /*!< 0008: FlashPatch Comparator Register                               */
   __I  uint32_t  RESERVED0[1002];              /*!< 0028:                                                              */
   __I  uint32_t  PID4;                         /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID0;                         /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CID1;                         /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CID2;                         /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CID3;                         /*!< 0FFC: Component Identification Register 3                          */
} FPB_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FPB' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CTRL Bit Fields                          ------ */
#define FPB_CTRL_ENABLE_MASK                     (0x01UL << FPB_CTRL_ENABLE_SHIFT)                   /*!< FPB_CTRL: ENABLE Mask                   */
#define FPB_CTRL_ENABLE_SHIFT                    0                                                   /*!< FPB_CTRL: ENABLE Position               */
#define FPB_CTRL_KEY_MASK                        (0x01UL << FPB_CTRL_KEY_SHIFT)                      /*!< FPB_CTRL: KEY Mask                      */
#define FPB_CTRL_KEY_SHIFT                       1                                                   /*!< FPB_CTRL: KEY Position                  */
#define FPB_CTRL_NUM_CODE_least_MASK             (0x0FUL << FPB_CTRL_NUM_CODE_least_SHIFT)           /*!< FPB_CTRL: NUM_CODE_least Mask           */
#define FPB_CTRL_NUM_CODE_least_SHIFT            4                                                   /*!< FPB_CTRL: NUM_CODE_least Position       */
#define FPB_CTRL_NUM_CODE_least(x)               (((uint32_t)(((uint32_t)(x))<<FPB_CTRL_NUM_CODE_least_SHIFT))&FPB_CTRL_NUM_CODE_least_MASK) /*!< FPB_CTRL                                */
#define FPB_CTRL_NUM_LIT_MASK                    (0x0FUL << FPB_CTRL_NUM_LIT_SHIFT)                  /*!< FPB_CTRL: NUM_LIT Mask                  */
#define FPB_CTRL_NUM_LIT_SHIFT                   8                                                   /*!< FPB_CTRL: NUM_LIT Position              */
#define FPB_CTRL_NUM_LIT(x)                      (((uint32_t)(((uint32_t)(x))<<FPB_CTRL_NUM_LIT_SHIFT))&FPB_CTRL_NUM_LIT_MASK) /*!< FPB_CTRL                                */
#define FPB_CTRL_NUM_CODE_most_MASK              (0x07UL << FPB_CTRL_NUM_CODE_most_SHIFT)            /*!< FPB_CTRL: NUM_CODE_most Mask            */
#define FPB_CTRL_NUM_CODE_most_SHIFT             12                                                  /*!< FPB_CTRL: NUM_CODE_most Position        */
#define FPB_CTRL_NUM_CODE_most(x)                (((uint32_t)(((uint32_t)(x))<<FPB_CTRL_NUM_CODE_most_SHIFT))&FPB_CTRL_NUM_CODE_most_MASK) /*!< FPB_CTRL                                */
/* ------- REMAP Bit Fields                         ------ */
#define FPB_REMAP_REMAP_MASK                     (0xFFFFFFUL << FPB_REMAP_REMAP_SHIFT)               /*!< FPB_REMAP: REMAP Mask                   */
#define FPB_REMAP_REMAP_SHIFT                    5                                                   /*!< FPB_REMAP: REMAP Position               */
#define FPB_REMAP_REMAP(x)                       (((uint32_t)(((uint32_t)(x))<<FPB_REMAP_REMAP_SHIFT))&FPB_REMAP_REMAP_MASK) /*!< FPB_REMAP                               */
#define FPB_REMAP_RMPSPT_MASK                    (0x01UL << FPB_REMAP_RMPSPT_SHIFT)                  /*!< FPB_REMAP: RMPSPT Mask                  */
#define FPB_REMAP_RMPSPT_SHIFT                   29                                                  /*!< FPB_REMAP: RMPSPT Position              */
/* ------- COMP Bit Fields                          ------ */
#define FPB_COMP_ENABLE_MASK                     (0x01UL << FPB_COMP_ENABLE_SHIFT)                   /*!< FPB_COMP: ENABLE Mask                   */
#define FPB_COMP_ENABLE_SHIFT                    0                                                   /*!< FPB_COMP: ENABLE Position               */
#define FPB_COMP_COMP_MASK                       (0x7FFFFFFUL << FPB_COMP_COMP_SHIFT)                /*!< FPB_COMP: COMP Mask                     */
#define FPB_COMP_COMP_SHIFT                      2                                                   /*!< FPB_COMP: COMP Position                 */
#define FPB_COMP_COMP(x)                         (((uint32_t)(((uint32_t)(x))<<FPB_COMP_COMP_SHIFT))&FPB_COMP_COMP_MASK) /*!< FPB_COMP                                */
#define FPB_COMP_REPLACE_MASK                    (0x03UL << FPB_COMP_REPLACE_SHIFT)                  /*!< FPB_COMP: REPLACE Mask                  */
#define FPB_COMP_REPLACE_SHIFT                   30                                                  /*!< FPB_COMP: REPLACE Position              */
#define FPB_COMP_REPLACE(x)                      (((uint32_t)(((uint32_t)(x))<<FPB_COMP_REPLACE_SHIFT))&FPB_COMP_REPLACE_MASK) /*!< FPB_COMP                                */
/* ------- PID4 Bit Fields                          ------ */
#define FPB_PID4_JEP106_MASK                     (0x0FUL << FPB_PID4_JEP106_SHIFT)                   /*!< FPB_PID4: JEP106 Mask                   */
#define FPB_PID4_JEP106_SHIFT                    0                                                   /*!< FPB_PID4: JEP106 Position               */
#define FPB_PID4_JEP106(x)                       (((uint32_t)(((uint32_t)(x))<<FPB_PID4_JEP106_SHIFT))&FPB_PID4_JEP106_MASK) /*!< FPB_PID4                                */
#define FPB_PID4_c4KB_MASK                       (0x0FUL << FPB_PID4_c4KB_SHIFT)                     /*!< FPB_PID4: c4KB Mask                     */
#define FPB_PID4_c4KB_SHIFT                      4                                                   /*!< FPB_PID4: c4KB Position                 */
#define FPB_PID4_c4KB(x)                         (((uint32_t)(((uint32_t)(x))<<FPB_PID4_c4KB_SHIFT))&FPB_PID4_c4KB_MASK) /*!< FPB_PID4                                */
/* ------- PID5 Bit Fields                          ------ */
/* ------- PID6 Bit Fields                          ------ */
/* ------- PID7 Bit Fields                          ------ */
/* ------- PID0 Bit Fields                          ------ */
#define FPB_PID0_PartNumber_MASK                 (0xFFUL << FPB_PID0_PartNumber_SHIFT)               /*!< FPB_PID0: PartNumber Mask               */
#define FPB_PID0_PartNumber_SHIFT                0                                                   /*!< FPB_PID0: PartNumber Position           */
#define FPB_PID0_PartNumber(x)                   (((uint32_t)(((uint32_t)(x))<<FPB_PID0_PartNumber_SHIFT))&FPB_PID0_PartNumber_MASK) /*!< FPB_PID0                                */
/* ------- PID1 Bit Fields                          ------ */
#define FPB_PID1_PartNumber_MASK                 (0x0FUL << FPB_PID1_PartNumber_SHIFT)               /*!< FPB_PID1: PartNumber Mask               */
#define FPB_PID1_PartNumber_SHIFT                0                                                   /*!< FPB_PID1: PartNumber Position           */
#define FPB_PID1_PartNumber(x)                   (((uint32_t)(((uint32_t)(x))<<FPB_PID1_PartNumber_SHIFT))&FPB_PID1_PartNumber_MASK) /*!< FPB_PID1                                */
#define FPB_PID1_JEP106_identity_code_MASK       (0x0FUL << FPB_PID1_JEP106_identity_code_SHIFT)     /*!< FPB_PID1: JEP106_identity_code Mask     */
#define FPB_PID1_JEP106_identity_code_SHIFT      4                                                   /*!< FPB_PID1: JEP106_identity_code Position */
#define FPB_PID1_JEP106_identity_code(x)         (((uint32_t)(((uint32_t)(x))<<FPB_PID1_JEP106_identity_code_SHIFT))&FPB_PID1_JEP106_identity_code_MASK) /*!< FPB_PID1                                */
/* ------- PID2 Bit Fields                          ------ */
#define FPB_PID2_JEP106_identity_code_MASK       (0x07UL << FPB_PID2_JEP106_identity_code_SHIFT)     /*!< FPB_PID2: JEP106_identity_code Mask     */
#define FPB_PID2_JEP106_identity_code_SHIFT      0                                                   /*!< FPB_PID2: JEP106_identity_code Position */
#define FPB_PID2_JEP106_identity_code(x)         (((uint32_t)(((uint32_t)(x))<<FPB_PID2_JEP106_identity_code_SHIFT))&FPB_PID2_JEP106_identity_code_MASK) /*!< FPB_PID2                                */
#define FPB_PID2_Revision_MASK                   (0x0FUL << FPB_PID2_Revision_SHIFT)                 /*!< FPB_PID2: Revision Mask                 */
#define FPB_PID2_Revision_SHIFT                  4                                                   /*!< FPB_PID2: Revision Position             */
#define FPB_PID2_Revision(x)                     (((uint32_t)(((uint32_t)(x))<<FPB_PID2_Revision_SHIFT))&FPB_PID2_Revision_MASK) /*!< FPB_PID2                                */
/* ------- PID3 Bit Fields                          ------ */
#define FPB_PID3_CustomerModified_MASK           (0x0FUL << FPB_PID3_CustomerModified_SHIFT)         /*!< FPB_PID3: CustomerModified Mask         */
#define FPB_PID3_CustomerModified_SHIFT          0                                                   /*!< FPB_PID3: CustomerModified Position     */
#define FPB_PID3_CustomerModified(x)             (((uint32_t)(((uint32_t)(x))<<FPB_PID3_CustomerModified_SHIFT))&FPB_PID3_CustomerModified_MASK) /*!< FPB_PID3                                */
#define FPB_PID3_RevAnd_MASK                     (0x0FUL << FPB_PID3_RevAnd_SHIFT)                   /*!< FPB_PID3: RevAnd Mask                   */
#define FPB_PID3_RevAnd_SHIFT                    4                                                   /*!< FPB_PID3: RevAnd Position               */
#define FPB_PID3_RevAnd(x)                       (((uint32_t)(((uint32_t)(x))<<FPB_PID3_RevAnd_SHIFT))&FPB_PID3_RevAnd_MASK) /*!< FPB_PID3                                */
/* ------- CID0 Bit Fields                          ------ */
#define FPB_CID0_Preamble_MASK                   (0xFFUL << FPB_CID0_Preamble_SHIFT)                 /*!< FPB_CID0: Preamble Mask                 */
#define FPB_CID0_Preamble_SHIFT                  0                                                   /*!< FPB_CID0: Preamble Position             */
#define FPB_CID0_Preamble(x)                     (((uint32_t)(((uint32_t)(x))<<FPB_CID0_Preamble_SHIFT))&FPB_CID0_Preamble_MASK) /*!< FPB_CID0                                */
/* ------- CID1 Bit Fields                          ------ */
#define FPB_CID1_Preamble_MASK                   (0x0FUL << FPB_CID1_Preamble_SHIFT)                 /*!< FPB_CID1: Preamble Mask                 */
#define FPB_CID1_Preamble_SHIFT                  0                                                   /*!< FPB_CID1: Preamble Position             */
#define FPB_CID1_Preamble(x)                     (((uint32_t)(((uint32_t)(x))<<FPB_CID1_Preamble_SHIFT))&FPB_CID1_Preamble_MASK) /*!< FPB_CID1                                */
#define FPB_CID1_ComponentClass_MASK             (0x0FUL << FPB_CID1_ComponentClass_SHIFT)           /*!< FPB_CID1: ComponentClass Mask           */
#define FPB_CID1_ComponentClass_SHIFT            4                                                   /*!< FPB_CID1: ComponentClass Position       */
#define FPB_CID1_ComponentClass(x)               (((uint32_t)(((uint32_t)(x))<<FPB_CID1_ComponentClass_SHIFT))&FPB_CID1_ComponentClass_MASK) /*!< FPB_CID1                                */
/* ------- CID2 Bit Fields                          ------ */
#define FPB_CID2_Preamble_MASK                   (0xFFUL << FPB_CID2_Preamble_SHIFT)                 /*!< FPB_CID2: Preamble Mask                 */
#define FPB_CID2_Preamble_SHIFT                  0                                                   /*!< FPB_CID2: Preamble Position             */
#define FPB_CID2_Preamble(x)                     (((uint32_t)(((uint32_t)(x))<<FPB_CID2_Preamble_SHIFT))&FPB_CID2_Preamble_MASK) /*!< FPB_CID2                                */
/* ------- CID3 Bit Fields                          ------ */
#define FPB_CID3_Preamble_MASK                   (0xFFUL << FPB_CID3_Preamble_SHIFT)                 /*!< FPB_CID3: Preamble Mask                 */
#define FPB_CID3_Preamble_SHIFT                  0                                                   /*!< FPB_CID3: Preamble Position             */
#define FPB_CID3_Preamble(x)                     (((uint32_t)(((uint32_t)(x))<<FPB_CID3_Preamble_SHIFT))&FPB_CID3_Preamble_MASK) /*!< FPB_CID3                                */

/* FPB - Peripheral instance base addresses */
#define FPB_BasePtr                    0xE0002000UL
#define FPB                            ((FPB_Type *) FPB_BasePtr)
#define FPB_BASE_PTR                   (FPB)

/* ================================================================================ */
/* ================           FTFA (file:FTFA_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Interface
 */
typedef struct {                                /*!<       FTFA Structure                                               */
   __IO uint8_t   FSTAT;                        /*!< 0000: Flash Status Register                                        */
   __IO uint8_t   FCNFG;                        /*!< 0001: Flash Configuration Register                                 */
   __I  uint8_t   FSEC;                         /*!< 0002: Flash Security Register                                      */
   __I  uint8_t   FOPT;                         /*!< 0003: Flash Option Register                                        */
   __IO uint8_t   FCCOB3;                       /*!< 0004: FCCOB 3 - Usually Flash address [7..0]                       */
   __IO uint8_t   FCCOB2;                       /*!< 0005: FCCOB 2 - Usually Flash address [15..8]                      */
   __IO uint8_t   FCCOB1;                       /*!< 0006: FCCOB 1 - Usually Flash address [23..16]                     */
   __IO uint8_t   FCCOB0;                       /*!< 0007: FCCOB 0 - Usually FCMD (a code that defines the flash command)  */
   __IO uint8_t   FCCOB7;                       /*!< 0008: FCCOB 7 - Usually Data Byte 3                                */
   __IO uint8_t   FCCOB6;                       /*!< 0009: FCCOB 6 - Usually Data Byte 2                                */
   __IO uint8_t   FCCOB5;                       /*!< 000A: FCCOB 5 - Usually Data Byte 1                                */
   __IO uint8_t   FCCOB4;                       /*!< 000B: FCCOB 4 - Usually Data Byte 0                                */
   __IO uint8_t   FCCOBB;                       /*!< 000C: FCCOB B - Usually Data Byte 7                                */
   __IO uint8_t   FCCOBA;                       /*!< 000D: FCCOB A - Usually Data Byte 6                                */
   __IO uint8_t   FCCOB9;                       /*!< 000E: FCCOB 9 - Usually Data Byte 5                                */
   __IO uint8_t   FCCOB8;                       /*!< 000F: FCCOB 8 - Usually Data Byte 4                                */
   __IO uint8_t   FPROT3;                       /*!< 0010: Program Flash Protection                                     */
   __IO uint8_t   FPROT2;                       /*!< 0011: Program Flash Protection                                     */
   __IO uint8_t   FPROT1;                       /*!< 0012: Program Flash Protection                                     */
   __IO uint8_t   FPROT0;                       /*!< 0013: Program Flash Protection                                     */
   __I  uint32_t  RESERVED0;                    /*!< 0014:                                                              */
   __I  uint8_t   XACCH3;                       /*!< 0018: Execute-only Access Registers (high)                         */
   __I  uint8_t   XACCH2;                       /*!< 0019: Execute-only Access Registers (high)                         */
   __I  uint8_t   XACCH1;                       /*!< 001A: Execute-only Access Registers (high)                         */
   __I  uint8_t   XACCH0;                       /*!< 001B: Execute-only Access Registers (high)                         */
   __I  uint8_t   XACCL3;                       /*!< 001C: Execute-only Access Registers (low)                          */
   __I  uint8_t   XACCL2;                       /*!< 001D: Execute-only Access Registers (low)                          */
   __I  uint8_t   XACCL1;                       /*!< 001E: Execute-only Access Registers (low)                          */
   __I  uint8_t   XACCL0;                       /*!< 001F: Execute-only Access Registers (low)                          */
   __I  uint8_t   SACCH3;                       /*!< 0020: Supervisor-only Access Registers (high)                      */
   __I  uint8_t   SACCH2;                       /*!< 0021: Supervisor-only Access Registers (high)                      */
   __I  uint8_t   SACCH1;                       /*!< 0022: Supervisor-only Access Registers (high)                      */
   __I  uint8_t   SACCH0;                       /*!< 0023: Supervisor-only Access Registers (high)                      */
   __I  uint8_t   SACCL3;                       /*!< 0024: Supervisor-only Access Registers (low)                       */
   __I  uint8_t   SACCL2;                       /*!< 0025: Supervisor-only Access Registers (low)                       */
   __I  uint8_t   SACCL1;                       /*!< 0026: Supervisor-only Access Registers (low)                       */
   __I  uint8_t   SACCL0;                       /*!< 0027: Supervisor-only Access Registers (low)                       */
   __I  uint8_t   FACSS;                        /*!< 0028: Flash Access Segment Size Register                           */
   __I  uint8_t   RESERVED1[2];                 /*!< 0029:                                                              */
   __I  uint8_t   FACSN;                        /*!< 002B: Flash Access Segment Number Register                         */
} FTFA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTFA' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- FSTAT Bit Fields                         ------ */
#define FTFA_FSTAT_MGSTAT0_MASK                  (0x01UL << FTFA_FSTAT_MGSTAT0_SHIFT)                /*!< FTFA_FSTAT: MGSTAT0 Mask                */
#define FTFA_FSTAT_MGSTAT0_SHIFT                 0                                                   /*!< FTFA_FSTAT: MGSTAT0 Position            */
#define FTFA_FSTAT_FPVIOL_MASK                   (0x01UL << FTFA_FSTAT_FPVIOL_SHIFT)                 /*!< FTFA_FSTAT: FPVIOL Mask                 */
#define FTFA_FSTAT_FPVIOL_SHIFT                  4                                                   /*!< FTFA_FSTAT: FPVIOL Position             */
#define FTFA_FSTAT_ACCERR_MASK                   (0x01UL << FTFA_FSTAT_ACCERR_SHIFT)                 /*!< FTFA_FSTAT: ACCERR Mask                 */
#define FTFA_FSTAT_ACCERR_SHIFT                  5                                                   /*!< FTFA_FSTAT: ACCERR Position             */
#define FTFA_FSTAT_RDCOLERR_MASK                 (0x01UL << FTFA_FSTAT_RDCOLERR_SHIFT)               /*!< FTFA_FSTAT: RDCOLERR Mask               */
#define FTFA_FSTAT_RDCOLERR_SHIFT                6                                                   /*!< FTFA_FSTAT: RDCOLERR Position           */
#define FTFA_FSTAT_CCIF_MASK                     (0x01UL << FTFA_FSTAT_CCIF_SHIFT)                   /*!< FTFA_FSTAT: CCIF Mask                   */
#define FTFA_FSTAT_CCIF_SHIFT                    7                                                   /*!< FTFA_FSTAT: CCIF Position               */
/* ------- FCNFG Bit Fields                         ------ */
#define FTFA_FCNFG_ERSSUSP_MASK                  (0x01UL << FTFA_FCNFG_ERSSUSP_SHIFT)                /*!< FTFA_FCNFG: ERSSUSP Mask                */
#define FTFA_FCNFG_ERSSUSP_SHIFT                 4                                                   /*!< FTFA_FCNFG: ERSSUSP Position            */
#define FTFA_FCNFG_ERSAREQ_MASK                  (0x01UL << FTFA_FCNFG_ERSAREQ_SHIFT)                /*!< FTFA_FCNFG: ERSAREQ Mask                */
#define FTFA_FCNFG_ERSAREQ_SHIFT                 5                                                   /*!< FTFA_FCNFG: ERSAREQ Position            */
#define FTFA_FCNFG_RDCOLLIE_MASK                 (0x01UL << FTFA_FCNFG_RDCOLLIE_SHIFT)               /*!< FTFA_FCNFG: RDCOLLIE Mask               */
#define FTFA_FCNFG_RDCOLLIE_SHIFT                6                                                   /*!< FTFA_FCNFG: RDCOLLIE Position           */
#define FTFA_FCNFG_CCIE_MASK                     (0x01UL << FTFA_FCNFG_CCIE_SHIFT)                   /*!< FTFA_FCNFG: CCIE Mask                   */
#define FTFA_FCNFG_CCIE_SHIFT                    7                                                   /*!< FTFA_FCNFG: CCIE Position               */
/* ------- FSEC Bit Fields                          ------ */
#define FTFA_FSEC_SEC_MASK                       (0x03UL << FTFA_FSEC_SEC_SHIFT)                     /*!< FTFA_FSEC: SEC Mask                     */
#define FTFA_FSEC_SEC_SHIFT                      0                                                   /*!< FTFA_FSEC: SEC Position                 */
#define FTFA_FSEC_SEC(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_FSEC_SEC_SHIFT))&FTFA_FSEC_SEC_MASK) /*!< FTFA_FSEC                               */
#define FTFA_FSEC_FSLACC_MASK                    (0x03UL << FTFA_FSEC_FSLACC_SHIFT)                  /*!< FTFA_FSEC: FSLACC Mask                  */
#define FTFA_FSEC_FSLACC_SHIFT                   2                                                   /*!< FTFA_FSEC: FSLACC Position              */
#define FTFA_FSEC_FSLACC(x)                      (((uint8_t)(((uint8_t)(x))<<FTFA_FSEC_FSLACC_SHIFT))&FTFA_FSEC_FSLACC_MASK) /*!< FTFA_FSEC                               */
#define FTFA_FSEC_MEEN_MASK                      (0x03UL << FTFA_FSEC_MEEN_SHIFT)                    /*!< FTFA_FSEC: MEEN Mask                    */
#define FTFA_FSEC_MEEN_SHIFT                     4                                                   /*!< FTFA_FSEC: MEEN Position                */
#define FTFA_FSEC_MEEN(x)                        (((uint8_t)(((uint8_t)(x))<<FTFA_FSEC_MEEN_SHIFT))&FTFA_FSEC_MEEN_MASK) /*!< FTFA_FSEC                               */
#define FTFA_FSEC_KEYEN_MASK                     (0x03UL << FTFA_FSEC_KEYEN_SHIFT)                   /*!< FTFA_FSEC: KEYEN Mask                   */
#define FTFA_FSEC_KEYEN_SHIFT                    6                                                   /*!< FTFA_FSEC: KEYEN Position               */
#define FTFA_FSEC_KEYEN(x)                       (((uint8_t)(((uint8_t)(x))<<FTFA_FSEC_KEYEN_SHIFT))&FTFA_FSEC_KEYEN_MASK) /*!< FTFA_FSEC                               */
/* ------- FOPT Bit Fields                          ------ */
#define FTFA_FOPT_OPT_MASK                       (0xFFUL << FTFA_FOPT_OPT_SHIFT)                     /*!< FTFA_FOPT: OPT Mask                     */
#define FTFA_FOPT_OPT_SHIFT                      0                                                   /*!< FTFA_FOPT: OPT Position                 */
#define FTFA_FOPT_OPT(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_FOPT_OPT_SHIFT))&FTFA_FOPT_OPT_MASK) /*!< FTFA_FOPT                               */
/* ------- FCCOB Bit Fields                         ------ */
#define FTFA_FCCOB_CCOBn_MASK                    (0xFFUL << FTFA_FCCOB_CCOBn_SHIFT)                  /*!< FTFA_FCCOB: CCOBn Mask                  */
#define FTFA_FCCOB_CCOBn_SHIFT                   0                                                   /*!< FTFA_FCCOB: CCOBn Position              */
#define FTFA_FCCOB_CCOBn(x)                      (((uint8_t)(((uint8_t)(x))<<FTFA_FCCOB_CCOBn_SHIFT))&FTFA_FCCOB_CCOBn_MASK) /*!< FTFA_FCCOB                              */
/* ------- FPROT Bit Fields                         ------ */
#define FTFA_FPROT_PROT_MASK                     (0xFFUL << FTFA_FPROT_PROT_SHIFT)                   /*!< FTFA_FPROT: PROT Mask                   */
#define FTFA_FPROT_PROT_SHIFT                    0                                                   /*!< FTFA_FPROT: PROT Position               */
#define FTFA_FPROT_PROT(x)                       (((uint8_t)(((uint8_t)(x))<<FTFA_FPROT_PROT_SHIFT))&FTFA_FPROT_PROT_MASK) /*!< FTFA_FPROT                              */
/* ------- XACCH Bit Fields                         ------ */
#define FTFA_XACCH_XA_MASK                       (0xFFUL << FTFA_XACCH_XA_SHIFT)                     /*!< FTFA_XACCH: XA Mask                     */
#define FTFA_XACCH_XA_SHIFT                      0                                                   /*!< FTFA_XACCH: XA Position                 */
#define FTFA_XACCH_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_XACCH_XA_SHIFT))&FTFA_XACCH_XA_MASK) /*!< FTFA_XACCH                              */
/* ------- XACCL Bit Fields                         ------ */
#define FTFA_XACCL_XA_MASK                       (0xFFUL << FTFA_XACCL_XA_SHIFT)                     /*!< FTFA_XACCL: XA Mask                     */
#define FTFA_XACCL_XA_SHIFT                      0                                                   /*!< FTFA_XACCL: XA Position                 */
#define FTFA_XACCL_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_XACCL_XA_SHIFT))&FTFA_XACCL_XA_MASK) /*!< FTFA_XACCL                              */
/* ------- SACCH Bit Fields                         ------ */
#define FTFA_SACCH_XA_MASK                       (0xFFUL << FTFA_SACCH_XA_SHIFT)                     /*!< FTFA_SACCH: XA Mask                     */
#define FTFA_SACCH_XA_SHIFT                      0                                                   /*!< FTFA_SACCH: XA Position                 */
#define FTFA_SACCH_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_SACCH_XA_SHIFT))&FTFA_SACCH_XA_MASK) /*!< FTFA_SACCH                              */
/* ------- SACCL Bit Fields                         ------ */
#define FTFA_SACCL_XA_MASK                       (0xFFUL << FTFA_SACCL_XA_SHIFT)                     /*!< FTFA_SACCL: XA Mask                     */
#define FTFA_SACCL_XA_SHIFT                      0                                                   /*!< FTFA_SACCL: XA Position                 */
#define FTFA_SACCL_XA(x)                         (((uint8_t)(((uint8_t)(x))<<FTFA_SACCL_XA_SHIFT))&FTFA_SACCL_XA_MASK) /*!< FTFA_SACCL                              */
/* ------- FACSS Bit Fields                         ------ */
/* ------- FACSN Bit Fields                         ------ */

/* FTFA - Peripheral instance base addresses */
#define FTFA_BasePtr                   0x40020000UL
#define FTFA                           ((FTFA_Type *) FTFA_BasePtr)
#define FTFA_BASE_PTR                  (FTFA)

/* ================================================================================ */
/* ================           FTM0 (file:FTM0_8CH)                 ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (8 channels)
 */
typedef struct {                                /*!<       FTM0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0040, 64)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /*!< 0010: Channel  Value                                               */
   } CONTROLS[8];
   __IO uint32_t  CNTIN;                        /*!< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /*!< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /*!< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /*!< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /*!< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /*!< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /*!< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /*!< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /*!< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /*!< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /*!< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /*!< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /*!< 0080: Quadrature Decoder Control and Status                        */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /*!< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /*!< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /*!< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /*!< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /*!< 0098: FTM PWM Load                                                 */
} FTM0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC Bit Fields                            ------ */
#define FTM_SC_PS_MASK                           (0x07UL << FTM_SC_PS_SHIFT)                         /*!< FTM0_SC: PS Mask                        */
#define FTM_SC_PS_SHIFT                          0                                                   /*!< FTM0_SC: PS Position                    */
#define FTM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_PS_SHIFT))&FTM_SC_PS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CLKS_MASK                         (0x03UL << FTM_SC_CLKS_SHIFT)                       /*!< FTM0_SC: CLKS Mask                      */
#define FTM_SC_CLKS_SHIFT                        3                                                   /*!< FTM0_SC: CLKS Position                  */
#define FTM_SC_CLKS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_CLKS_SHIFT))&FTM_SC_CLKS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CPWMS_MASK                        (0x01UL << FTM_SC_CPWMS_SHIFT)                      /*!< FTM0_SC: CPWMS Mask                     */
#define FTM_SC_CPWMS_SHIFT                       5                                                   /*!< FTM0_SC: CPWMS Position                 */
#define FTM_SC_TOIE_MASK                         (0x01UL << FTM_SC_TOIE_SHIFT)                       /*!< FTM0_SC: TOIE Mask                      */
#define FTM_SC_TOIE_SHIFT                        6                                                   /*!< FTM0_SC: TOIE Position                  */
#define FTM_SC_TOF_MASK                          (0x01UL << FTM_SC_TOF_SHIFT)                        /*!< FTM0_SC: TOF Mask                       */
#define FTM_SC_TOF_SHIFT                         7                                                   /*!< FTM0_SC: TOF Position                   */
/* ------- CNT Bit Fields                           ------ */
#define FTM_CNT_COUNT_MASK                       (0xFFFFUL << FTM_CNT_COUNT_SHIFT)                   /*!< FTM0_CNT: COUNT Mask                    */
#define FTM_CNT_COUNT_SHIFT                      0                                                   /*!< FTM0_CNT: COUNT Position                */
#define FTM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CNT_COUNT_SHIFT))&FTM_CNT_COUNT_MASK) /*!< FTM0_CNT                                */
/* ------- MOD Bit Fields                           ------ */
#define FTM_MOD_MOD_MASK                         (0xFFFFUL << FTM_MOD_MOD_SHIFT)                     /*!< FTM0_MOD: MOD Mask                      */
#define FTM_MOD_MOD_SHIFT                        0                                                   /*!< FTM0_MOD: MOD Position                  */
#define FTM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MOD_SHIFT))&FTM_MOD_MOD_MASK) /*!< FTM0_MOD                                */
/* ------- CnSC Bit Fields                          ------ */
#define FTM_CnSC_DMA_MASK                        (0x01UL << FTM_CnSC_DMA_SHIFT)                      /*!< FTM0_CnSC: DMA Mask                     */
#define FTM_CnSC_DMA_SHIFT                       0                                                   /*!< FTM0_CnSC: DMA Position                 */
#define FTM_CnSC_ELS_MASK                        (0x03UL << FTM_CnSC_ELS_SHIFT)                      /*!< FTM0_CnSC: ELS Mask                     */
#define FTM_CnSC_ELS_SHIFT                       2                                                   /*!< FTM0_CnSC: ELS Position                 */
#define FTM_CnSC_ELS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELS_SHIFT))&FTM_CnSC_ELS_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSA_MASK                       (0x01UL << FTM_CnSC_ELSA_SHIFT)                     /*!< FTM0_CnSC: ELSA Mask                    */
#define FTM_CnSC_ELSA_SHIFT                      2                                                   /*!< FTM0_CnSC: ELSA Position                */
#define FTM_CnSC_ELSB_MASK                       (0x01UL << FTM_CnSC_ELSB_SHIFT)                     /*!< FTM0_CnSC: ELSB Mask                    */
#define FTM_CnSC_ELSB_SHIFT                      3                                                   /*!< FTM0_CnSC: ELSB Position                */
#define FTM_CnSC_MS_MASK                         (0x03UL << FTM_CnSC_MS_SHIFT)                       /*!< FTM0_CnSC: MS Mask                      */
#define FTM_CnSC_MS_SHIFT                        4                                                   /*!< FTM0_CnSC: MS Position                  */
#define FTM_CnSC_MS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MS_SHIFT))&FTM_CnSC_MS_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSA_MASK                        (0x01UL << FTM_CnSC_MSA_SHIFT)                      /*!< FTM0_CnSC: MSA Mask                     */
#define FTM_CnSC_MSA_SHIFT                       4                                                   /*!< FTM0_CnSC: MSA Position                 */
#define FTM_CnSC_MSB_MASK                        (0x01UL << FTM_CnSC_MSB_SHIFT)                      /*!< FTM0_CnSC: MSB Mask                     */
#define FTM_CnSC_MSB_SHIFT                       5                                                   /*!< FTM0_CnSC: MSB Position                 */
#define FTM_CnSC_CHIE_MASK                       (0x01UL << FTM_CnSC_CHIE_SHIFT)                     /*!< FTM0_CnSC: CHIE Mask                    */
#define FTM_CnSC_CHIE_SHIFT                      6                                                   /*!< FTM0_CnSC: CHIE Position                */
#define FTM_CnSC_CHF_MASK                        (0x01UL << FTM_CnSC_CHF_SHIFT)                      /*!< FTM0_CnSC: CHF Mask                     */
#define FTM_CnSC_CHF_SHIFT                       7                                                   /*!< FTM0_CnSC: CHF Position                 */
/* ------- CnV Bit Fields                           ------ */
#define FTM_CnV_VAL_MASK                         (0xFFFFUL << FTM_CnV_VAL_SHIFT)                     /*!< FTM0_CnV: VAL Mask                      */
#define FTM_CnV_VAL_SHIFT                        0                                                   /*!< FTM0_CnV: VAL Position                  */
#define FTM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnV_VAL_SHIFT))&FTM_CnV_VAL_MASK) /*!< FTM0_CnV                                */
/* ------- CNTIN Bit Fields                         ------ */
#define FTM_CNTIN_INIT_MASK                      (0xFFFFUL << FTM_CNTIN_INIT_SHIFT)                  /*!< FTM0_CNTIN: INIT Mask                   */
#define FTM_CNTIN_INIT_SHIFT                     0                                                   /*!< FTM0_CNTIN: INIT Position               */
#define FTM_CNTIN_INIT(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CNTIN_INIT_SHIFT))&FTM_CNTIN_INIT_MASK) /*!< FTM0_CNTIN                              */
/* ------- STATUS Bit Fields                        ------ */
#define FTM_STATUS_CH0F_MASK                     (0x01UL << FTM_STATUS_CH0F_SHIFT)                   /*!< FTM0_STATUS: CH0F Mask                  */
#define FTM_STATUS_CH0F_SHIFT                    0                                                   /*!< FTM0_STATUS: CH0F Position              */
#define FTM_STATUS_CH1F_MASK                     (0x01UL << FTM_STATUS_CH1F_SHIFT)                   /*!< FTM0_STATUS: CH1F Mask                  */
#define FTM_STATUS_CH1F_SHIFT                    1                                                   /*!< FTM0_STATUS: CH1F Position              */
#define FTM_STATUS_CH2F_MASK                     (0x01UL << FTM_STATUS_CH2F_SHIFT)                   /*!< FTM0_STATUS: CH2F Mask                  */
#define FTM_STATUS_CH2F_SHIFT                    2                                                   /*!< FTM0_STATUS: CH2F Position              */
#define FTM_STATUS_CH3F_MASK                     (0x01UL << FTM_STATUS_CH3F_SHIFT)                   /*!< FTM0_STATUS: CH3F Mask                  */
#define FTM_STATUS_CH3F_SHIFT                    3                                                   /*!< FTM0_STATUS: CH3F Position              */
#define FTM_STATUS_CH4F_MASK                     (0x01UL << FTM_STATUS_CH4F_SHIFT)                   /*!< FTM0_STATUS: CH4F Mask                  */
#define FTM_STATUS_CH4F_SHIFT                    4                                                   /*!< FTM0_STATUS: CH4F Position              */
#define FTM_STATUS_CH5F_MASK                     (0x01UL << FTM_STATUS_CH5F_SHIFT)                   /*!< FTM0_STATUS: CH5F Mask                  */
#define FTM_STATUS_CH5F_SHIFT                    5                                                   /*!< FTM0_STATUS: CH5F Position              */
#define FTM_STATUS_CH6F_MASK                     (0x01UL << FTM_STATUS_CH6F_SHIFT)                   /*!< FTM0_STATUS: CH6F Mask                  */
#define FTM_STATUS_CH6F_SHIFT                    6                                                   /*!< FTM0_STATUS: CH6F Position              */
#define FTM_STATUS_CH7F_MASK                     (0x01UL << FTM_STATUS_CH7F_SHIFT)                   /*!< FTM0_STATUS: CH7F Mask                  */
#define FTM_STATUS_CH7F_SHIFT                    7                                                   /*!< FTM0_STATUS: CH7F Position              */
/* ------- MODE Bit Fields                          ------ */
#define FTM_MODE_FTMEN_MASK                      (0x01UL << FTM_MODE_FTMEN_SHIFT)                    /*!< FTM0_MODE: FTMEN Mask                   */
#define FTM_MODE_FTMEN_SHIFT                     0                                                   /*!< FTM0_MODE: FTMEN Position               */
#define FTM_MODE_INIT_MASK                       (0x01UL << FTM_MODE_INIT_SHIFT)                     /*!< FTM0_MODE: INIT Mask                    */
#define FTM_MODE_INIT_SHIFT                      1                                                   /*!< FTM0_MODE: INIT Position                */
#define FTM_MODE_WPDIS_MASK                      (0x01UL << FTM_MODE_WPDIS_SHIFT)                    /*!< FTM0_MODE: WPDIS Mask                   */
#define FTM_MODE_WPDIS_SHIFT                     2                                                   /*!< FTM0_MODE: WPDIS Position               */
#define FTM_MODE_PWMSYNC_MASK                    (0x01UL << FTM_MODE_PWMSYNC_SHIFT)                  /*!< FTM0_MODE: PWMSYNC Mask                 */
#define FTM_MODE_PWMSYNC_SHIFT                   3                                                   /*!< FTM0_MODE: PWMSYNC Position             */
#define FTM_MODE_CAPTEST_MASK                    (0x01UL << FTM_MODE_CAPTEST_SHIFT)                  /*!< FTM0_MODE: CAPTEST Mask                 */
#define FTM_MODE_CAPTEST_SHIFT                   4                                                   /*!< FTM0_MODE: CAPTEST Position             */
#define FTM_MODE_FAULTM_MASK                     (0x03UL << FTM_MODE_FAULTM_SHIFT)                   /*!< FTM0_MODE: FAULTM Mask                  */
#define FTM_MODE_FAULTM_SHIFT                    5                                                   /*!< FTM0_MODE: FAULTM Position              */
#define FTM_MODE_FAULTM(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTM_SHIFT))&FTM_MODE_FAULTM_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTIE_MASK                    (0x01UL << FTM_MODE_FAULTIE_SHIFT)                  /*!< FTM0_MODE: FAULTIE Mask                 */
#define FTM_MODE_FAULTIE_SHIFT                   7                                                   /*!< FTM0_MODE: FAULTIE Position             */
/* ------- SYNC Bit Fields                          ------ */
#define FTM_SYNC_CNTMIN_MASK                     (0x01UL << FTM_SYNC_CNTMIN_SHIFT)                   /*!< FTM0_SYNC: CNTMIN Mask                  */
#define FTM_SYNC_CNTMIN_SHIFT                    0                                                   /*!< FTM0_SYNC: CNTMIN Position              */
#define FTM_SYNC_CNTMAX_MASK                     (0x01UL << FTM_SYNC_CNTMAX_SHIFT)                   /*!< FTM0_SYNC: CNTMAX Mask                  */
#define FTM_SYNC_CNTMAX_SHIFT                    1                                                   /*!< FTM0_SYNC: CNTMAX Position              */
#define FTM_SYNC_REINIT_MASK                     (0x01UL << FTM_SYNC_REINIT_SHIFT)                   /*!< FTM0_SYNC: REINIT Mask                  */
#define FTM_SYNC_REINIT_SHIFT                    2                                                   /*!< FTM0_SYNC: REINIT Position              */
#define FTM_SYNC_SYNCHOM_MASK                    (0x01UL << FTM_SYNC_SYNCHOM_SHIFT)                  /*!< FTM0_SYNC: SYNCHOM Mask                 */
#define FTM_SYNC_SYNCHOM_SHIFT                   3                                                   /*!< FTM0_SYNC: SYNCHOM Position             */
#define FTM_SYNC_TRIG0_MASK                      (0x01UL << FTM_SYNC_TRIG0_SHIFT)                    /*!< FTM0_SYNC: TRIG0 Mask                   */
#define FTM_SYNC_TRIG0_SHIFT                     4                                                   /*!< FTM0_SYNC: TRIG0 Position               */
#define FTM_SYNC_TRIG1_MASK                      (0x01UL << FTM_SYNC_TRIG1_SHIFT)                    /*!< FTM0_SYNC: TRIG1 Mask                   */
#define FTM_SYNC_TRIG1_SHIFT                     5                                                   /*!< FTM0_SYNC: TRIG1 Position               */
#define FTM_SYNC_TRIG2_MASK                      (0x01UL << FTM_SYNC_TRIG2_SHIFT)                    /*!< FTM0_SYNC: TRIG2 Mask                   */
#define FTM_SYNC_TRIG2_SHIFT                     6                                                   /*!< FTM0_SYNC: TRIG2 Position               */
#define FTM_SYNC_SWSYNC_MASK                     (0x01UL << FTM_SYNC_SWSYNC_SHIFT)                   /*!< FTM0_SYNC: SWSYNC Mask                  */
#define FTM_SYNC_SWSYNC_SHIFT                    7                                                   /*!< FTM0_SYNC: SWSYNC Position              */
/* ------- OUTINIT Bit Fields                       ------ */
#define FTM_OUTINIT_CH0OI_MASK                   (0x01UL << FTM_OUTINIT_CH0OI_SHIFT)                 /*!< FTM0_OUTINIT: CH0OI Mask                */
#define FTM_OUTINIT_CH0OI_SHIFT                  0                                                   /*!< FTM0_OUTINIT: CH0OI Position            */
#define FTM_OUTINIT_CH1OI_MASK                   (0x01UL << FTM_OUTINIT_CH1OI_SHIFT)                 /*!< FTM0_OUTINIT: CH1OI Mask                */
#define FTM_OUTINIT_CH1OI_SHIFT                  1                                                   /*!< FTM0_OUTINIT: CH1OI Position            */
#define FTM_OUTINIT_CH2OI_MASK                   (0x01UL << FTM_OUTINIT_CH2OI_SHIFT)                 /*!< FTM0_OUTINIT: CH2OI Mask                */
#define FTM_OUTINIT_CH2OI_SHIFT                  2                                                   /*!< FTM0_OUTINIT: CH2OI Position            */
#define FTM_OUTINIT_CH3OI_MASK                   (0x01UL << FTM_OUTINIT_CH3OI_SHIFT)                 /*!< FTM0_OUTINIT: CH3OI Mask                */
#define FTM_OUTINIT_CH3OI_SHIFT                  3                                                   /*!< FTM0_OUTINIT: CH3OI Position            */
#define FTM_OUTINIT_CH4OI_MASK                   (0x01UL << FTM_OUTINIT_CH4OI_SHIFT)                 /*!< FTM0_OUTINIT: CH4OI Mask                */
#define FTM_OUTINIT_CH4OI_SHIFT                  4                                                   /*!< FTM0_OUTINIT: CH4OI Position            */
#define FTM_OUTINIT_CH5OI_MASK                   (0x01UL << FTM_OUTINIT_CH5OI_SHIFT)                 /*!< FTM0_OUTINIT: CH5OI Mask                */
#define FTM_OUTINIT_CH5OI_SHIFT                  5                                                   /*!< FTM0_OUTINIT: CH5OI Position            */
#define FTM_OUTINIT_CH6OI_MASK                   (0x01UL << FTM_OUTINIT_CH6OI_SHIFT)                 /*!< FTM0_OUTINIT: CH6OI Mask                */
#define FTM_OUTINIT_CH6OI_SHIFT                  6                                                   /*!< FTM0_OUTINIT: CH6OI Position            */
#define FTM_OUTINIT_CH7OI_MASK                   (0x01UL << FTM_OUTINIT_CH7OI_SHIFT)                 /*!< FTM0_OUTINIT: CH7OI Mask                */
#define FTM_OUTINIT_CH7OI_SHIFT                  7                                                   /*!< FTM0_OUTINIT: CH7OI Position            */
/* ------- OUTMASK Bit Fields                       ------ */
#define FTM_OUTMASK_CH0OM_MASK                   (0x01UL << FTM_OUTMASK_CH0OM_SHIFT)                 /*!< FTM0_OUTMASK: CH0OM Mask                */
#define FTM_OUTMASK_CH0OM_SHIFT                  0                                                   /*!< FTM0_OUTMASK: CH0OM Position            */
#define FTM_OUTMASK_CH1OM_MASK                   (0x01UL << FTM_OUTMASK_CH1OM_SHIFT)                 /*!< FTM0_OUTMASK: CH1OM Mask                */
#define FTM_OUTMASK_CH1OM_SHIFT                  1                                                   /*!< FTM0_OUTMASK: CH1OM Position            */
#define FTM_OUTMASK_CH2OM_MASK                   (0x01UL << FTM_OUTMASK_CH2OM_SHIFT)                 /*!< FTM0_OUTMASK: CH2OM Mask                */
#define FTM_OUTMASK_CH2OM_SHIFT                  2                                                   /*!< FTM0_OUTMASK: CH2OM Position            */
#define FTM_OUTMASK_CH3OM_MASK                   (0x01UL << FTM_OUTMASK_CH3OM_SHIFT)                 /*!< FTM0_OUTMASK: CH3OM Mask                */
#define FTM_OUTMASK_CH3OM_SHIFT                  3                                                   /*!< FTM0_OUTMASK: CH3OM Position            */
#define FTM_OUTMASK_CH4OM_MASK                   (0x01UL << FTM_OUTMASK_CH4OM_SHIFT)                 /*!< FTM0_OUTMASK: CH4OM Mask                */
#define FTM_OUTMASK_CH4OM_SHIFT                  4                                                   /*!< FTM0_OUTMASK: CH4OM Position            */
#define FTM_OUTMASK_CH5OM_MASK                   (0x01UL << FTM_OUTMASK_CH5OM_SHIFT)                 /*!< FTM0_OUTMASK: CH5OM Mask                */
#define FTM_OUTMASK_CH5OM_SHIFT                  5                                                   /*!< FTM0_OUTMASK: CH5OM Position            */
#define FTM_OUTMASK_CH6OM_MASK                   (0x01UL << FTM_OUTMASK_CH6OM_SHIFT)                 /*!< FTM0_OUTMASK: CH6OM Mask                */
#define FTM_OUTMASK_CH6OM_SHIFT                  6                                                   /*!< FTM0_OUTMASK: CH6OM Position            */
#define FTM_OUTMASK_CH7OM_MASK                   (0x01UL << FTM_OUTMASK_CH7OM_SHIFT)                 /*!< FTM0_OUTMASK: CH7OM Mask                */
#define FTM_OUTMASK_CH7OM_SHIFT                  7                                                   /*!< FTM0_OUTMASK: CH7OM Position            */
/* ------- COMBINE Bit Fields                       ------ */
#define FTM_COMBINE_COMBINE0_MASK                (0x01UL << FTM_COMBINE_COMBINE0_SHIFT)              /*!< FTM0_COMBINE: COMBINE0 Mask             */
#define FTM_COMBINE_COMBINE0_SHIFT               0                                                   /*!< FTM0_COMBINE: COMBINE0 Position         */
#define FTM_COMBINE_COMP0_MASK                   (0x01UL << FTM_COMBINE_COMP0_SHIFT)                 /*!< FTM0_COMBINE: COMP0 Mask                */
#define FTM_COMBINE_COMP0_SHIFT                  1                                                   /*!< FTM0_COMBINE: COMP0 Position            */
#define FTM_COMBINE_DECAPEN0_MASK                (0x01UL << FTM_COMBINE_DECAPEN0_SHIFT)              /*!< FTM0_COMBINE: DECAPEN0 Mask             */
#define FTM_COMBINE_DECAPEN0_SHIFT               2                                                   /*!< FTM0_COMBINE: DECAPEN0 Position         */
#define FTM_COMBINE_DECAP0_MASK                  (0x01UL << FTM_COMBINE_DECAP0_SHIFT)                /*!< FTM0_COMBINE: DECAP0 Mask               */
#define FTM_COMBINE_DECAP0_SHIFT                 3                                                   /*!< FTM0_COMBINE: DECAP0 Position           */
#define FTM_COMBINE_DTEN0_MASK                   (0x01UL << FTM_COMBINE_DTEN0_SHIFT)                 /*!< FTM0_COMBINE: DTEN0 Mask                */
#define FTM_COMBINE_DTEN0_SHIFT                  4                                                   /*!< FTM0_COMBINE: DTEN0 Position            */
#define FTM_COMBINE_SYNCEN0_MASK                 (0x01UL << FTM_COMBINE_SYNCEN0_SHIFT)               /*!< FTM0_COMBINE: SYNCEN0 Mask              */
#define FTM_COMBINE_SYNCEN0_SHIFT                5                                                   /*!< FTM0_COMBINE: SYNCEN0 Position          */
#define FTM_COMBINE_FAULTEN0_MASK                (0x01UL << FTM_COMBINE_FAULTEN0_SHIFT)              /*!< FTM0_COMBINE: FAULTEN0 Mask             */
#define FTM_COMBINE_FAULTEN0_SHIFT               6                                                   /*!< FTM0_COMBINE: FAULTEN0 Position         */
#define FTM_COMBINE_COMBINE1_MASK                (0x01UL << FTM_COMBINE_COMBINE1_SHIFT)              /*!< FTM0_COMBINE: COMBINE1 Mask             */
#define FTM_COMBINE_COMBINE1_SHIFT               8                                                   /*!< FTM0_COMBINE: COMBINE1 Position         */
#define FTM_COMBINE_COMP1_MASK                   (0x01UL << FTM_COMBINE_COMP1_SHIFT)                 /*!< FTM0_COMBINE: COMP1 Mask                */
#define FTM_COMBINE_COMP1_SHIFT                  9                                                   /*!< FTM0_COMBINE: COMP1 Position            */
#define FTM_COMBINE_DECAPEN1_MASK                (0x01UL << FTM_COMBINE_DECAPEN1_SHIFT)              /*!< FTM0_COMBINE: DECAPEN1 Mask             */
#define FTM_COMBINE_DECAPEN1_SHIFT               10                                                  /*!< FTM0_COMBINE: DECAPEN1 Position         */
#define FTM_COMBINE_DECAP1_MASK                  (0x01UL << FTM_COMBINE_DECAP1_SHIFT)                /*!< FTM0_COMBINE: DECAP1 Mask               */
#define FTM_COMBINE_DECAP1_SHIFT                 11                                                  /*!< FTM0_COMBINE: DECAP1 Position           */
#define FTM_COMBINE_DTEN1_MASK                   (0x01UL << FTM_COMBINE_DTEN1_SHIFT)                 /*!< FTM0_COMBINE: DTEN1 Mask                */
#define FTM_COMBINE_DTEN1_SHIFT                  12                                                  /*!< FTM0_COMBINE: DTEN1 Position            */
#define FTM_COMBINE_SYNCEN1_MASK                 (0x01UL << FTM_COMBINE_SYNCEN1_SHIFT)               /*!< FTM0_COMBINE: SYNCEN1 Mask              */
#define FTM_COMBINE_SYNCEN1_SHIFT                13                                                  /*!< FTM0_COMBINE: SYNCEN1 Position          */
#define FTM_COMBINE_FAULTEN1_MASK                (0x01UL << FTM_COMBINE_FAULTEN1_SHIFT)              /*!< FTM0_COMBINE: FAULTEN1 Mask             */
#define FTM_COMBINE_FAULTEN1_SHIFT               14                                                  /*!< FTM0_COMBINE: FAULTEN1 Position         */
#define FTM_COMBINE_COMBINE2_MASK                (0x01UL << FTM_COMBINE_COMBINE2_SHIFT)              /*!< FTM0_COMBINE: COMBINE2 Mask             */
#define FTM_COMBINE_COMBINE2_SHIFT               16                                                  /*!< FTM0_COMBINE: COMBINE2 Position         */
#define FTM_COMBINE_COMP2_MASK                   (0x01UL << FTM_COMBINE_COMP2_SHIFT)                 /*!< FTM0_COMBINE: COMP2 Mask                */
#define FTM_COMBINE_COMP2_SHIFT                  17                                                  /*!< FTM0_COMBINE: COMP2 Position            */
#define FTM_COMBINE_DECAPEN2_MASK                (0x01UL << FTM_COMBINE_DECAPEN2_SHIFT)              /*!< FTM0_COMBINE: DECAPEN2 Mask             */
#define FTM_COMBINE_DECAPEN2_SHIFT               18                                                  /*!< FTM0_COMBINE: DECAPEN2 Position         */
#define FTM_COMBINE_DECAP2_MASK                  (0x01UL << FTM_COMBINE_DECAP2_SHIFT)                /*!< FTM0_COMBINE: DECAP2 Mask               */
#define FTM_COMBINE_DECAP2_SHIFT                 19                                                  /*!< FTM0_COMBINE: DECAP2 Position           */
#define FTM_COMBINE_DTEN2_MASK                   (0x01UL << FTM_COMBINE_DTEN2_SHIFT)                 /*!< FTM0_COMBINE: DTEN2 Mask                */
#define FTM_COMBINE_DTEN2_SHIFT                  20                                                  /*!< FTM0_COMBINE: DTEN2 Position            */
#define FTM_COMBINE_SYNCEN2_MASK                 (0x01UL << FTM_COMBINE_SYNCEN2_SHIFT)               /*!< FTM0_COMBINE: SYNCEN2 Mask              */
#define FTM_COMBINE_SYNCEN2_SHIFT                21                                                  /*!< FTM0_COMBINE: SYNCEN2 Position          */
#define FTM_COMBINE_FAULTEN2_MASK                (0x01UL << FTM_COMBINE_FAULTEN2_SHIFT)              /*!< FTM0_COMBINE: FAULTEN2 Mask             */
#define FTM_COMBINE_FAULTEN2_SHIFT               22                                                  /*!< FTM0_COMBINE: FAULTEN2 Position         */
#define FTM_COMBINE_COMBINE3_MASK                (0x01UL << FTM_COMBINE_COMBINE3_SHIFT)              /*!< FTM0_COMBINE: COMBINE3 Mask             */
#define FTM_COMBINE_COMBINE3_SHIFT               24                                                  /*!< FTM0_COMBINE: COMBINE3 Position         */
#define FTM_COMBINE_COMP3_MASK                   (0x01UL << FTM_COMBINE_COMP3_SHIFT)                 /*!< FTM0_COMBINE: COMP3 Mask                */
#define FTM_COMBINE_COMP3_SHIFT                  25                                                  /*!< FTM0_COMBINE: COMP3 Position            */
#define FTM_COMBINE_DECAPEN3_MASK                (0x01UL << FTM_COMBINE_DECAPEN3_SHIFT)              /*!< FTM0_COMBINE: DECAPEN3 Mask             */
#define FTM_COMBINE_DECAPEN3_SHIFT               26                                                  /*!< FTM0_COMBINE: DECAPEN3 Position         */
#define FTM_COMBINE_DECAP3_MASK                  (0x01UL << FTM_COMBINE_DECAP3_SHIFT)                /*!< FTM0_COMBINE: DECAP3 Mask               */
#define FTM_COMBINE_DECAP3_SHIFT                 27                                                  /*!< FTM0_COMBINE: DECAP3 Position           */
#define FTM_COMBINE_DTEN3_MASK                   (0x01UL << FTM_COMBINE_DTEN3_SHIFT)                 /*!< FTM0_COMBINE: DTEN3 Mask                */
#define FTM_COMBINE_DTEN3_SHIFT                  28                                                  /*!< FTM0_COMBINE: DTEN3 Position            */
#define FTM_COMBINE_SYNCEN3_MASK                 (0x01UL << FTM_COMBINE_SYNCEN3_SHIFT)               /*!< FTM0_COMBINE: SYNCEN3 Mask              */
#define FTM_COMBINE_SYNCEN3_SHIFT                29                                                  /*!< FTM0_COMBINE: SYNCEN3 Position          */
#define FTM_COMBINE_FAULTEN3_MASK                (0x01UL << FTM_COMBINE_FAULTEN3_SHIFT)              /*!< FTM0_COMBINE: FAULTEN3 Mask             */
#define FTM_COMBINE_FAULTEN3_SHIFT               30                                                  /*!< FTM0_COMBINE: FAULTEN3 Position         */
/* ------- DEADTIME Bit Fields                      ------ */
#define FTM_DEADTIME_DTVAL_MASK                  (0x3FUL << FTM_DEADTIME_DTVAL_SHIFT)                /*!< FTM0_DEADTIME: DTVAL Mask               */
#define FTM_DEADTIME_DTVAL_SHIFT                 0                                                   /*!< FTM0_DEADTIME: DTVAL Position           */
#define FTM_DEADTIME_DTVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTVAL_SHIFT))&FTM_DEADTIME_DTVAL_MASK) /*!< FTM0_DEADTIME                           */
#define FTM_DEADTIME_DTPS_MASK                   (0x03UL << FTM_DEADTIME_DTPS_SHIFT)                 /*!< FTM0_DEADTIME: DTPS Mask                */
#define FTM_DEADTIME_DTPS_SHIFT                  6                                                   /*!< FTM0_DEADTIME: DTPS Position            */
#define FTM_DEADTIME_DTPS(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTPS_SHIFT))&FTM_DEADTIME_DTPS_MASK) /*!< FTM0_DEADTIME                           */
/* ------- EXTTRIG Bit Fields                       ------ */
#define FTM_EXTTRIG_CH2TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH2TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH2TRIG Mask              */
#define FTM_EXTTRIG_CH2TRIG_SHIFT                0                                                   /*!< FTM0_EXTTRIG: CH2TRIG Position          */
#define FTM_EXTTRIG_CH3TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH3TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH3TRIG Mask              */
#define FTM_EXTTRIG_CH3TRIG_SHIFT                1                                                   /*!< FTM0_EXTTRIG: CH3TRIG Position          */
#define FTM_EXTTRIG_CH4TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH4TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH4TRIG Mask              */
#define FTM_EXTTRIG_CH4TRIG_SHIFT                2                                                   /*!< FTM0_EXTTRIG: CH4TRIG Position          */
#define FTM_EXTTRIG_CH5TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH5TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH5TRIG Mask              */
#define FTM_EXTTRIG_CH5TRIG_SHIFT                3                                                   /*!< FTM0_EXTTRIG: CH5TRIG Position          */
#define FTM_EXTTRIG_CH0TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH0TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH0TRIG Mask              */
#define FTM_EXTTRIG_CH0TRIG_SHIFT                4                                                   /*!< FTM0_EXTTRIG: CH0TRIG Position          */
#define FTM_EXTTRIG_CH1TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH1TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH1TRIG Mask              */
#define FTM_EXTTRIG_CH1TRIG_SHIFT                5                                                   /*!< FTM0_EXTTRIG: CH1TRIG Position          */
#define FTM_EXTTRIG_INITTRIGEN_MASK              (0x01UL << FTM_EXTTRIG_INITTRIGEN_SHIFT)            /*!< FTM0_EXTTRIG: INITTRIGEN Mask           */
#define FTM_EXTTRIG_INITTRIGEN_SHIFT             6                                                   /*!< FTM0_EXTTRIG: INITTRIGEN Position       */
#define FTM_EXTTRIG_TRIGF_MASK                   (0x01UL << FTM_EXTTRIG_TRIGF_SHIFT)                 /*!< FTM0_EXTTRIG: TRIGF Mask                */
#define FTM_EXTTRIG_TRIGF_SHIFT                  7                                                   /*!< FTM0_EXTTRIG: TRIGF Position            */
/* ------- POL Bit Fields                           ------ */
#define FTM_POL_POL0_MASK                        (0x01UL << FTM_POL_POL0_SHIFT)                      /*!< FTM0_POL: POL0 Mask                     */
#define FTM_POL_POL0_SHIFT                       0                                                   /*!< FTM0_POL: POL0 Position                 */
#define FTM_POL_POL1_MASK                        (0x01UL << FTM_POL_POL1_SHIFT)                      /*!< FTM0_POL: POL1 Mask                     */
#define FTM_POL_POL1_SHIFT                       1                                                   /*!< FTM0_POL: POL1 Position                 */
#define FTM_POL_POL2_MASK                        (0x01UL << FTM_POL_POL2_SHIFT)                      /*!< FTM0_POL: POL2 Mask                     */
#define FTM_POL_POL2_SHIFT                       2                                                   /*!< FTM0_POL: POL2 Position                 */
#define FTM_POL_POL3_MASK                        (0x01UL << FTM_POL_POL3_SHIFT)                      /*!< FTM0_POL: POL3 Mask                     */
#define FTM_POL_POL3_SHIFT                       3                                                   /*!< FTM0_POL: POL3 Position                 */
#define FTM_POL_POL4_MASK                        (0x01UL << FTM_POL_POL4_SHIFT)                      /*!< FTM0_POL: POL4 Mask                     */
#define FTM_POL_POL4_SHIFT                       4                                                   /*!< FTM0_POL: POL4 Position                 */
#define FTM_POL_POL5_MASK                        (0x01UL << FTM_POL_POL5_SHIFT)                      /*!< FTM0_POL: POL5 Mask                     */
#define FTM_POL_POL5_SHIFT                       5                                                   /*!< FTM0_POL: POL5 Position                 */
#define FTM_POL_POL6_MASK                        (0x01UL << FTM_POL_POL6_SHIFT)                      /*!< FTM0_POL: POL6 Mask                     */
#define FTM_POL_POL6_SHIFT                       6                                                   /*!< FTM0_POL: POL6 Position                 */
#define FTM_POL_POL7_MASK                        (0x01UL << FTM_POL_POL7_SHIFT)                      /*!< FTM0_POL: POL7 Mask                     */
#define FTM_POL_POL7_SHIFT                       7                                                   /*!< FTM0_POL: POL7 Position                 */
/* ------- FMS Bit Fields                           ------ */
#define FTM_FMS_FAULTF0_MASK                     (0x01UL << FTM_FMS_FAULTF0_SHIFT)                   /*!< FTM0_FMS: FAULTF0 Mask                  */
#define FTM_FMS_FAULTF0_SHIFT                    0                                                   /*!< FTM0_FMS: FAULTF0 Position              */
#define FTM_FMS_FAULTF1_MASK                     (0x01UL << FTM_FMS_FAULTF1_SHIFT)                   /*!< FTM0_FMS: FAULTF1 Mask                  */
#define FTM_FMS_FAULTF1_SHIFT                    1                                                   /*!< FTM0_FMS: FAULTF1 Position              */
#define FTM_FMS_FAULTF2_MASK                     (0x01UL << FTM_FMS_FAULTF2_SHIFT)                   /*!< FTM0_FMS: FAULTF2 Mask                  */
#define FTM_FMS_FAULTF2_SHIFT                    2                                                   /*!< FTM0_FMS: FAULTF2 Position              */
#define FTM_FMS_FAULTF3_MASK                     (0x01UL << FTM_FMS_FAULTF3_SHIFT)                   /*!< FTM0_FMS: FAULTF3 Mask                  */
#define FTM_FMS_FAULTF3_SHIFT                    3                                                   /*!< FTM0_FMS: FAULTF3 Position              */
#define FTM_FMS_FAULTIN_MASK                     (0x01UL << FTM_FMS_FAULTIN_SHIFT)                   /*!< FTM0_FMS: FAULTIN Mask                  */
#define FTM_FMS_FAULTIN_SHIFT                    5                                                   /*!< FTM0_FMS: FAULTIN Position              */
#define FTM_FMS_WPEN_MASK                        (0x01UL << FTM_FMS_WPEN_SHIFT)                      /*!< FTM0_FMS: WPEN Mask                     */
#define FTM_FMS_WPEN_SHIFT                       6                                                   /*!< FTM0_FMS: WPEN Position                 */
#define FTM_FMS_FAULTF_MASK                      (0x01UL << FTM_FMS_FAULTF_SHIFT)                    /*!< FTM0_FMS: FAULTF Mask                   */
#define FTM_FMS_FAULTF_SHIFT                     7                                                   /*!< FTM0_FMS: FAULTF Position               */
/* ------- FILTER Bit Fields                        ------ */
#define FTM_FILTER_CH0FVAL_MASK                  (0x0FUL << FTM_FILTER_CH0FVAL_SHIFT)                /*!< FTM0_FILTER: CH0FVAL Mask               */
#define FTM_FILTER_CH0FVAL_SHIFT                 0                                                   /*!< FTM0_FILTER: CH0FVAL Position           */
#define FTM_FILTER_CH0FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH0FVAL_SHIFT))&FTM_FILTER_CH0FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH1FVAL_MASK                  (0x0FUL << FTM_FILTER_CH1FVAL_SHIFT)                /*!< FTM0_FILTER: CH1FVAL Mask               */
#define FTM_FILTER_CH1FVAL_SHIFT                 4                                                   /*!< FTM0_FILTER: CH1FVAL Position           */
#define FTM_FILTER_CH1FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH1FVAL_SHIFT))&FTM_FILTER_CH1FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH2FVAL_MASK                  (0x0FUL << FTM_FILTER_CH2FVAL_SHIFT)                /*!< FTM0_FILTER: CH2FVAL Mask               */
#define FTM_FILTER_CH2FVAL_SHIFT                 8                                                   /*!< FTM0_FILTER: CH2FVAL Position           */
#define FTM_FILTER_CH2FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH2FVAL_SHIFT))&FTM_FILTER_CH2FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH3FVAL_MASK                  (0x0FUL << FTM_FILTER_CH3FVAL_SHIFT)                /*!< FTM0_FILTER: CH3FVAL Mask               */
#define FTM_FILTER_CH3FVAL_SHIFT                 12                                                  /*!< FTM0_FILTER: CH3FVAL Position           */
#define FTM_FILTER_CH3FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH3FVAL_SHIFT))&FTM_FILTER_CH3FVAL_MASK) /*!< FTM0_FILTER                             */
/* ------- FLTCTRL Bit Fields                       ------ */
#define FTM_FLTCTRL_FAULT0EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT0EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT0EN Mask             */
#define FTM_FLTCTRL_FAULT0EN_SHIFT               0                                                   /*!< FTM0_FLTCTRL: FAULT0EN Position         */
#define FTM_FLTCTRL_FAULT1EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT1EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT1EN Mask             */
#define FTM_FLTCTRL_FAULT1EN_SHIFT               1                                                   /*!< FTM0_FLTCTRL: FAULT1EN Position         */
#define FTM_FLTCTRL_FAULT2EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT2EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT2EN Mask             */
#define FTM_FLTCTRL_FAULT2EN_SHIFT               2                                                   /*!< FTM0_FLTCTRL: FAULT2EN Position         */
#define FTM_FLTCTRL_FAULT3EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT3EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT3EN Mask             */
#define FTM_FLTCTRL_FAULT3EN_SHIFT               3                                                   /*!< FTM0_FLTCTRL: FAULT3EN Position         */
#define FTM_FLTCTRL_FFLTR0EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR0EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR0EN Mask             */
#define FTM_FLTCTRL_FFLTR0EN_SHIFT               4                                                   /*!< FTM0_FLTCTRL: FFLTR0EN Position         */
#define FTM_FLTCTRL_FFLTR1EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR1EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR1EN Mask             */
#define FTM_FLTCTRL_FFLTR1EN_SHIFT               5                                                   /*!< FTM0_FLTCTRL: FFLTR1EN Position         */
#define FTM_FLTCTRL_FFLTR2EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR2EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR2EN Mask             */
#define FTM_FLTCTRL_FFLTR2EN_SHIFT               6                                                   /*!< FTM0_FLTCTRL: FFLTR2EN Position         */
#define FTM_FLTCTRL_FFLTR3EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR3EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR3EN Mask             */
#define FTM_FLTCTRL_FFLTR3EN_SHIFT               7                                                   /*!< FTM0_FLTCTRL: FFLTR3EN Position         */
#define FTM_FLTCTRL_FFVAL_MASK                   (0x0FUL << FTM_FLTCTRL_FFVAL_SHIFT)                 /*!< FTM0_FLTCTRL: FFVAL Mask                */
#define FTM_FLTCTRL_FFVAL_SHIFT                  8                                                   /*!< FTM0_FLTCTRL: FFVAL Position            */
#define FTM_FLTCTRL_FFVAL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFVAL_SHIFT))&FTM_FLTCTRL_FFVAL_MASK) /*!< FTM0_FLTCTRL                            */
/* ------- QDCTRL Bit Fields                        ------ */
#define FTM_QDCTRL_QUADEN_MASK                   (0x01UL << FTM_QDCTRL_QUADEN_SHIFT)                 /*!< FTM0_QDCTRL: QUADEN Mask                */
#define FTM_QDCTRL_QUADEN_SHIFT                  0                                                   /*!< FTM0_QDCTRL: QUADEN Position            */
#define FTM_QDCTRL_TOFDIR_MASK                   (0x01UL << FTM_QDCTRL_TOFDIR_SHIFT)                 /*!< FTM0_QDCTRL: TOFDIR Mask                */
#define FTM_QDCTRL_TOFDIR_SHIFT                  1                                                   /*!< FTM0_QDCTRL: TOFDIR Position            */
#define FTM_QDCTRL_QUADIR_MASK                   (0x01UL << FTM_QDCTRL_QUADIR_SHIFT)                 /*!< FTM0_QDCTRL: QUADIR Mask                */
#define FTM_QDCTRL_QUADIR_SHIFT                  2                                                   /*!< FTM0_QDCTRL: QUADIR Position            */
#define FTM_QDCTRL_QUADMODE_MASK                 (0x01UL << FTM_QDCTRL_QUADMODE_SHIFT)               /*!< FTM0_QDCTRL: QUADMODE Mask              */
#define FTM_QDCTRL_QUADMODE_SHIFT                3                                                   /*!< FTM0_QDCTRL: QUADMODE Position          */
#define FTM_QDCTRL_PHBPOL_MASK                   (0x01UL << FTM_QDCTRL_PHBPOL_SHIFT)                 /*!< FTM0_QDCTRL: PHBPOL Mask                */
#define FTM_QDCTRL_PHBPOL_SHIFT                  4                                                   /*!< FTM0_QDCTRL: PHBPOL Position            */
#define FTM_QDCTRL_PHAPOL_MASK                   (0x01UL << FTM_QDCTRL_PHAPOL_SHIFT)                 /*!< FTM0_QDCTRL: PHAPOL Mask                */
#define FTM_QDCTRL_PHAPOL_SHIFT                  5                                                   /*!< FTM0_QDCTRL: PHAPOL Position            */
#define FTM_QDCTRL_PHBFLTREN_MASK                (0x01UL << FTM_QDCTRL_PHBFLTREN_SHIFT)              /*!< FTM0_QDCTRL: PHBFLTREN Mask             */
#define FTM_QDCTRL_PHBFLTREN_SHIFT               6                                                   /*!< FTM0_QDCTRL: PHBFLTREN Position         */
#define FTM_QDCTRL_PHAFLTREN_MASK                (0x01UL << FTM_QDCTRL_PHAFLTREN_SHIFT)              /*!< FTM0_QDCTRL: PHAFLTREN Mask             */
#define FTM_QDCTRL_PHAFLTREN_SHIFT               7                                                   /*!< FTM0_QDCTRL: PHAFLTREN Position         */
/* ------- CONF Bit Fields                          ------ */
#define FTM_CONF_NUMTOF_MASK                     (0x1FUL << FTM_CONF_NUMTOF_SHIFT)                   /*!< FTM0_CONF: NUMTOF Mask                  */
#define FTM_CONF_NUMTOF_SHIFT                    0                                                   /*!< FTM0_CONF: NUMTOF Position              */
#define FTM_CONF_NUMTOF(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_NUMTOF_SHIFT))&FTM_CONF_NUMTOF_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_BDMMODE_MASK                    (0x03UL << FTM_CONF_BDMMODE_SHIFT)                  /*!< FTM0_CONF: BDMMODE Mask                 */
#define FTM_CONF_BDMMODE_SHIFT                   6                                                   /*!< FTM0_CONF: BDMMODE Position             */
#define FTM_CONF_BDMMODE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_BDMMODE_SHIFT))&FTM_CONF_BDMMODE_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEEN_MASK                     (0x01UL << FTM_CONF_GTBEEN_SHIFT)                   /*!< FTM0_CONF: GTBEEN Mask                  */
#define FTM_CONF_GTBEEN_SHIFT                    9                                                   /*!< FTM0_CONF: GTBEEN Position              */
#define FTM_CONF_GTBEOUT_MASK                    (0x01UL << FTM_CONF_GTBEOUT_SHIFT)                  /*!< FTM0_CONF: GTBEOUT Mask                 */
#define FTM_CONF_GTBEOUT_SHIFT                   10                                                  /*!< FTM0_CONF: GTBEOUT Position             */
/* ------- FLTPOL Bit Fields                        ------ */
#define FTM_FLTPOL_FLT0POL_MASK                  (0x01UL << FTM_FLTPOL_FLT0POL_SHIFT)                /*!< FTM0_FLTPOL: FLT0POL Mask               */
#define FTM_FLTPOL_FLT0POL_SHIFT                 0                                                   /*!< FTM0_FLTPOL: FLT0POL Position           */
#define FTM_FLTPOL_FLT1POL_MASK                  (0x01UL << FTM_FLTPOL_FLT1POL_SHIFT)                /*!< FTM0_FLTPOL: FLT1POL Mask               */
#define FTM_FLTPOL_FLT1POL_SHIFT                 1                                                   /*!< FTM0_FLTPOL: FLT1POL Position           */
#define FTM_FLTPOL_FLT2POL_MASK                  (0x01UL << FTM_FLTPOL_FLT2POL_SHIFT)                /*!< FTM0_FLTPOL: FLT2POL Mask               */
#define FTM_FLTPOL_FLT2POL_SHIFT                 2                                                   /*!< FTM0_FLTPOL: FLT2POL Position           */
#define FTM_FLTPOL_FLT3POL_MASK                  (0x01UL << FTM_FLTPOL_FLT3POL_SHIFT)                /*!< FTM0_FLTPOL: FLT3POL Mask               */
#define FTM_FLTPOL_FLT3POL_SHIFT                 3                                                   /*!< FTM0_FLTPOL: FLT3POL Position           */
/* ------- SYNCONF Bit Fields                       ------ */
#define FTM_SYNCONF_HWTRIGMODE_MASK              (0x01UL << FTM_SYNCONF_HWTRIGMODE_SHIFT)            /*!< FTM0_SYNCONF: HWTRIGMODE Mask           */
#define FTM_SYNCONF_HWTRIGMODE_SHIFT             0                                                   /*!< FTM0_SYNCONF: HWTRIGMODE Position       */
#define FTM_SYNCONF_CNTINC_MASK                  (0x01UL << FTM_SYNCONF_CNTINC_SHIFT)                /*!< FTM0_SYNCONF: CNTINC Mask               */
#define FTM_SYNCONF_CNTINC_SHIFT                 2                                                   /*!< FTM0_SYNCONF: CNTINC Position           */
#define FTM_SYNCONF_INVC_MASK                    (0x01UL << FTM_SYNCONF_INVC_SHIFT)                  /*!< FTM0_SYNCONF: INVC Mask                 */
#define FTM_SYNCONF_INVC_SHIFT                   4                                                   /*!< FTM0_SYNCONF: INVC Position             */
#define FTM_SYNCONF_SWOC_MASK                    (0x01UL << FTM_SYNCONF_SWOC_SHIFT)                  /*!< FTM0_SYNCONF: SWOC Mask                 */
#define FTM_SYNCONF_SWOC_SHIFT                   5                                                   /*!< FTM0_SYNCONF: SWOC Position             */
#define FTM_SYNCONF_SYNCMODE_MASK                (0x01UL << FTM_SYNCONF_SYNCMODE_SHIFT)              /*!< FTM0_SYNCONF: SYNCMODE Mask             */
#define FTM_SYNCONF_SYNCMODE_SHIFT               7                                                   /*!< FTM0_SYNCONF: SYNCMODE Position         */
#define FTM_SYNCONF_SWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_SWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: SWRSTCNT Mask             */
#define FTM_SYNCONF_SWRSTCNT_SHIFT               8                                                   /*!< FTM0_SYNCONF: SWRSTCNT Position         */
#define FTM_SYNCONF_SWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_SWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: SWWRBUF Mask              */
#define FTM_SYNCONF_SWWRBUF_SHIFT                9                                                   /*!< FTM0_SYNCONF: SWWRBUF Position          */
#define FTM_SYNCONF_SWOM_MASK                    (0x01UL << FTM_SYNCONF_SWOM_SHIFT)                  /*!< FTM0_SYNCONF: SWOM Mask                 */
#define FTM_SYNCONF_SWOM_SHIFT                   10                                                  /*!< FTM0_SYNCONF: SWOM Position             */
#define FTM_SYNCONF_SWINVC_MASK                  (0x01UL << FTM_SYNCONF_SWINVC_SHIFT)                /*!< FTM0_SYNCONF: SWINVC Mask               */
#define FTM_SYNCONF_SWINVC_SHIFT                 11                                                  /*!< FTM0_SYNCONF: SWINVC Position           */
#define FTM_SYNCONF_SWSOC_MASK                   (0x01UL << FTM_SYNCONF_SWSOC_SHIFT)                 /*!< FTM0_SYNCONF: SWSOC Mask                */
#define FTM_SYNCONF_SWSOC_SHIFT                  12                                                  /*!< FTM0_SYNCONF: SWSOC Position            */
#define FTM_SYNCONF_HWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_HWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: HWRSTCNT Mask             */
#define FTM_SYNCONF_HWRSTCNT_SHIFT               16                                                  /*!< FTM0_SYNCONF: HWRSTCNT Position         */
#define FTM_SYNCONF_HWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_HWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: HWWRBUF Mask              */
#define FTM_SYNCONF_HWWRBUF_SHIFT                17                                                  /*!< FTM0_SYNCONF: HWWRBUF Position          */
#define FTM_SYNCONF_HWOM_MASK                    (0x01UL << FTM_SYNCONF_HWOM_SHIFT)                  /*!< FTM0_SYNCONF: HWOM Mask                 */
#define FTM_SYNCONF_HWOM_SHIFT                   18                                                  /*!< FTM0_SYNCONF: HWOM Position             */
#define FTM_SYNCONF_HWINVC_MASK                  (0x01UL << FTM_SYNCONF_HWINVC_SHIFT)                /*!< FTM0_SYNCONF: HWINVC Mask               */
#define FTM_SYNCONF_HWINVC_SHIFT                 19                                                  /*!< FTM0_SYNCONF: HWINVC Position           */
#define FTM_SYNCONF_HWSOC_MASK                   (0x01UL << FTM_SYNCONF_HWSOC_SHIFT)                 /*!< FTM0_SYNCONF: HWSOC Mask                */
#define FTM_SYNCONF_HWSOC_SHIFT                  20                                                  /*!< FTM0_SYNCONF: HWSOC Position            */
/* ------- INVCTRL Bit Fields                       ------ */
#define FTM_INVCTRL_INV0EN_MASK                  (0x01UL << FTM_INVCTRL_INV0EN_SHIFT)                /*!< FTM0_INVCTRL: INV0EN Mask               */
#define FTM_INVCTRL_INV0EN_SHIFT                 0                                                   /*!< FTM0_INVCTRL: INV0EN Position           */
#define FTM_INVCTRL_INV1EN_MASK                  (0x01UL << FTM_INVCTRL_INV1EN_SHIFT)                /*!< FTM0_INVCTRL: INV1EN Mask               */
#define FTM_INVCTRL_INV1EN_SHIFT                 1                                                   /*!< FTM0_INVCTRL: INV1EN Position           */
#define FTM_INVCTRL_INV2EN_MASK                  (0x01UL << FTM_INVCTRL_INV2EN_SHIFT)                /*!< FTM0_INVCTRL: INV2EN Mask               */
#define FTM_INVCTRL_INV2EN_SHIFT                 2                                                   /*!< FTM0_INVCTRL: INV2EN Position           */
#define FTM_INVCTRL_INV3EN_MASK                  (0x01UL << FTM_INVCTRL_INV3EN_SHIFT)                /*!< FTM0_INVCTRL: INV3EN Mask               */
#define FTM_INVCTRL_INV3EN_SHIFT                 3                                                   /*!< FTM0_INVCTRL: INV3EN Position           */
/* ------- SWOCTRL Bit Fields                       ------ */
#define FTM_SWOCTRL_CH0OC_MASK                   (0x01UL << FTM_SWOCTRL_CH0OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH0OC Mask                */
#define FTM_SWOCTRL_CH0OC_SHIFT                  0                                                   /*!< FTM0_SWOCTRL: CH0OC Position            */
#define FTM_SWOCTRL_CH1OC_MASK                   (0x01UL << FTM_SWOCTRL_CH1OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH1OC Mask                */
#define FTM_SWOCTRL_CH1OC_SHIFT                  1                                                   /*!< FTM0_SWOCTRL: CH1OC Position            */
#define FTM_SWOCTRL_CH2OC_MASK                   (0x01UL << FTM_SWOCTRL_CH2OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH2OC Mask                */
#define FTM_SWOCTRL_CH2OC_SHIFT                  2                                                   /*!< FTM0_SWOCTRL: CH2OC Position            */
#define FTM_SWOCTRL_CH3OC_MASK                   (0x01UL << FTM_SWOCTRL_CH3OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH3OC Mask                */
#define FTM_SWOCTRL_CH3OC_SHIFT                  3                                                   /*!< FTM0_SWOCTRL: CH3OC Position            */
#define FTM_SWOCTRL_CH4OC_MASK                   (0x01UL << FTM_SWOCTRL_CH4OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH4OC Mask                */
#define FTM_SWOCTRL_CH4OC_SHIFT                  4                                                   /*!< FTM0_SWOCTRL: CH4OC Position            */
#define FTM_SWOCTRL_CH5OC_MASK                   (0x01UL << FTM_SWOCTRL_CH5OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH5OC Mask                */
#define FTM_SWOCTRL_CH5OC_SHIFT                  5                                                   /*!< FTM0_SWOCTRL: CH5OC Position            */
#define FTM_SWOCTRL_CH6OC_MASK                   (0x01UL << FTM_SWOCTRL_CH6OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH6OC Mask                */
#define FTM_SWOCTRL_CH6OC_SHIFT                  6                                                   /*!< FTM0_SWOCTRL: CH6OC Position            */
#define FTM_SWOCTRL_CH7OC_MASK                   (0x01UL << FTM_SWOCTRL_CH7OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH7OC Mask                */
#define FTM_SWOCTRL_CH7OC_SHIFT                  7                                                   /*!< FTM0_SWOCTRL: CH7OC Position            */
#define FTM_SWOCTRL_CH0OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH0OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH0OCV Mask               */
#define FTM_SWOCTRL_CH0OCV_SHIFT                 8                                                   /*!< FTM0_SWOCTRL: CH0OCV Position           */
#define FTM_SWOCTRL_CH1OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH1OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH1OCV Mask               */
#define FTM_SWOCTRL_CH1OCV_SHIFT                 9                                                   /*!< FTM0_SWOCTRL: CH1OCV Position           */
#define FTM_SWOCTRL_CH2OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH2OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH2OCV Mask               */
#define FTM_SWOCTRL_CH2OCV_SHIFT                 10                                                  /*!< FTM0_SWOCTRL: CH2OCV Position           */
#define FTM_SWOCTRL_CH3OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH3OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH3OCV Mask               */
#define FTM_SWOCTRL_CH3OCV_SHIFT                 11                                                  /*!< FTM0_SWOCTRL: CH3OCV Position           */
#define FTM_SWOCTRL_CH4OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH4OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH4OCV Mask               */
#define FTM_SWOCTRL_CH4OCV_SHIFT                 12                                                  /*!< FTM0_SWOCTRL: CH4OCV Position           */
#define FTM_SWOCTRL_CH5OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH5OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH5OCV Mask               */
#define FTM_SWOCTRL_CH5OCV_SHIFT                 13                                                  /*!< FTM0_SWOCTRL: CH5OCV Position           */
#define FTM_SWOCTRL_CH6OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH6OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH6OCV Mask               */
#define FTM_SWOCTRL_CH6OCV_SHIFT                 14                                                  /*!< FTM0_SWOCTRL: CH6OCV Position           */
#define FTM_SWOCTRL_CH7OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH7OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH7OCV Mask               */
#define FTM_SWOCTRL_CH7OCV_SHIFT                 15                                                  /*!< FTM0_SWOCTRL: CH7OCV Position           */
/* ------- PWMLOAD Bit Fields                       ------ */
#define FTM_PWMLOAD_CH0SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH0SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH0SEL Mask               */
#define FTM_PWMLOAD_CH0SEL_SHIFT                 0                                                   /*!< FTM0_PWMLOAD: CH0SEL Position           */
#define FTM_PWMLOAD_CH1SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH1SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH1SEL Mask               */
#define FTM_PWMLOAD_CH1SEL_SHIFT                 1                                                   /*!< FTM0_PWMLOAD: CH1SEL Position           */
#define FTM_PWMLOAD_CH2SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH2SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH2SEL Mask               */
#define FTM_PWMLOAD_CH2SEL_SHIFT                 2                                                   /*!< FTM0_PWMLOAD: CH2SEL Position           */
#define FTM_PWMLOAD_CH3SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH3SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH3SEL Mask               */
#define FTM_PWMLOAD_CH3SEL_SHIFT                 3                                                   /*!< FTM0_PWMLOAD: CH3SEL Position           */
#define FTM_PWMLOAD_CH4SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH4SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH4SEL Mask               */
#define FTM_PWMLOAD_CH4SEL_SHIFT                 4                                                   /*!< FTM0_PWMLOAD: CH4SEL Position           */
#define FTM_PWMLOAD_CH5SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH5SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH5SEL Mask               */
#define FTM_PWMLOAD_CH5SEL_SHIFT                 5                                                   /*!< FTM0_PWMLOAD: CH5SEL Position           */
#define FTM_PWMLOAD_CH6SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH6SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH6SEL Mask               */
#define FTM_PWMLOAD_CH6SEL_SHIFT                 6                                                   /*!< FTM0_PWMLOAD: CH6SEL Position           */
#define FTM_PWMLOAD_CH7SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH7SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH7SEL Mask               */
#define FTM_PWMLOAD_CH7SEL_SHIFT                 7                                                   /*!< FTM0_PWMLOAD: CH7SEL Position           */
#define FTM_PWMLOAD_LDOK_MASK                    (0x01UL << FTM_PWMLOAD_LDOK_SHIFT)                  /*!< FTM0_PWMLOAD: LDOK Mask                 */
#define FTM_PWMLOAD_LDOK_SHIFT                   9                                                   /*!< FTM0_PWMLOAD: LDOK Position             */

/* FTM0 - Peripheral instance base addresses */
#define FTM0_BasePtr                   0x40038000UL
#define FTM0                           ((FTM0_Type *) FTM0_BasePtr)
#define FTM0_BASE_PTR                  (FTM0)

/* ================================================================================ */
/* ================           FTM1 (file:FTM1_2CH)                 ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (2 channels)
 */
typedef struct {                                /*!<       FTM1 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0010, 16)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /*!< 0010: Channel  Value                                               */
   } CONTROLS[2];
   __I  uint32_t  RESERVED0[12];                /*!< 001C:                                                              */
   __IO uint32_t  CNTIN;                        /*!< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /*!< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /*!< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /*!< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /*!< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /*!< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /*!< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /*!< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /*!< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /*!< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /*!< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /*!< 007C: Fault Control                                                */
   __IO uint32_t  QDCTRL;                       /*!< 0080: Quadrature Decoder Control and Status                        */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /*!< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /*!< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /*!< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /*!< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /*!< 0098: FTM PWM Load                                                 */
} FTM1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTM1' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC Bit Fields                            ------ */
/* ------- CNT Bit Fields                           ------ */
/* ------- MOD Bit Fields                           ------ */
/* ------- CnSC Bit Fields                          ------ */
/* ------- CnV Bit Fields                           ------ */
/* ------- CNTIN Bit Fields                         ------ */
/* ------- STATUS Bit Fields                        ------ */
/* ------- MODE Bit Fields                          ------ */
/* ------- SYNC Bit Fields                          ------ */
/* ------- OUTINIT Bit Fields                       ------ */
/* ------- OUTMASK Bit Fields                       ------ */
/* ------- COMBINE Bit Fields                       ------ */
/* ------- DEADTIME Bit Fields                      ------ */
/* ------- EXTTRIG Bit Fields                       ------ */
/* ------- POL Bit Fields                           ------ */
/* ------- FMS Bit Fields                           ------ */
/* ------- FILTER Bit Fields                        ------ */
/* ------- FLTCTRL Bit Fields                       ------ */
/* ------- QDCTRL Bit Fields                        ------ */
/* ------- CONF Bit Fields                          ------ */
/* ------- FLTPOL Bit Fields                        ------ */
/* ------- SYNCONF Bit Fields                       ------ */
/* ------- INVCTRL Bit Fields                       ------ */
/* ------- SWOCTRL Bit Fields                       ------ */
/* ------- PWMLOAD Bit Fields                       ------ */

/* FTM1 - Peripheral instance base addresses */
#define FTM1_BasePtr                   0x40039000UL
#define FTM1                           ((FTM1_Type *) FTM1_BasePtr)
#define FTM1_BASE_PTR                  (FTM1)

/* ================================================================================ */
/* ================           FTM2 (derived from FTM1)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (2 channels)
 */

/* FTM2 - Peripheral instance base addresses */
#define FTM2_BasePtr                   0x4003A000UL
#define FTM2                           ((FTM1_Type *) FTM2_BasePtr)
#define FTM2_BASE_PTR                  (FTM2)

/* ================================================================================ */
/* ================           FTM3 (derived from FTM0)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (8 channels)
 */

/* FTM3 - Peripheral instance base addresses */
#define FTM3_BasePtr                   0x40026000UL
#define FTM3                           ((FTM0_Type *) FTM3_BasePtr)
#define FTM3_BASE_PTR                  (FTM3)

/* ================================================================================ */
/* ================           GPIOA (file:GPIOA_0)                 ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef struct {                                /*!<       GPIOA Structure                                              */
   __IO uint32_t  PDOR;                         /*!< 0000: Port Data Output Register                                    */
   __O  uint32_t  PSOR;                         /*!< 0004: Port Set Output Register                                     */
   __O  uint32_t  PCOR;                         /*!< 0008: Port Clear Output Register                                   */
   __O  uint32_t  PTOR;                         /*!< 000C: Port Toggle Output Register                                  */
   __I  uint32_t  PDIR;                         /*!< 0010: Port Data Input Register                                     */
   __IO uint32_t  PDDR;                         /*!< 0014: Port Data Direction Register                                 */
} GPIO_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PDOR Bit Fields                          ------ */
/* ------- PSOR Bit Fields                          ------ */
/* ------- PCOR Bit Fields                          ------ */
/* ------- PTOR Bit Fields                          ------ */
/* ------- PDIR Bit Fields                          ------ */
/* ------- PDDR Bit Fields                          ------ */

/* GPIOA - Peripheral instance base addresses */
#define GPIOA_BasePtr                  0x400FF000UL
#define GPIOA                          ((GPIO_Type *) GPIOA_BasePtr)
#define GPIOA_BASE_PTR                 (GPIOA)

/* ================================================================================ */
/* ================           GPIOB (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOB - Peripheral instance base addresses */
#define GPIOB_BasePtr                  0x400FF040UL
#define GPIOB                          ((GPIO_Type *) GPIOB_BasePtr)
#define GPIOB_BASE_PTR                 (GPIOB)

/* ================================================================================ */
/* ================           GPIOC (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOC - Peripheral instance base addresses */
#define GPIOC_BasePtr                  0x400FF080UL
#define GPIOC                          ((GPIO_Type *) GPIOC_BasePtr)
#define GPIOC_BASE_PTR                 (GPIOC)

/* ================================================================================ */
/* ================           GPIOD (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOD - Peripheral instance base addresses */
#define GPIOD_BasePtr                  0x400FF0C0UL
#define GPIOD                          ((GPIO_Type *) GPIOD_BasePtr)
#define GPIOD_BASE_PTR                 (GPIOD)

/* ================================================================================ */
/* ================           GPIOE (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOE - Peripheral instance base addresses */
#define GPIOE_BasePtr                  0x400FF100UL
#define GPIOE                          ((GPIO_Type *) GPIOE_BasePtr)
#define GPIOE_BASE_PTR                 (GPIOE)

/* ================================================================================ */
/* ================           I2C0 (file:I2C0_F12)                 ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit
 */
typedef struct {                                /*!<       I2C0 Structure                                               */
   __IO uint8_t   A1;                           /*!< 0000: Address Register 1                                           */
   __IO uint8_t   F;                            /*!< 0001: Frequency Divider register                                   */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   S;                            /*!< 0003: Status Register                                              */
   __IO uint8_t   D;                            /*!< 0004: Data I/O register                                            */
   __IO uint8_t   C2;                           /*!< 0005: Control Register 2                                           */
   __IO uint8_t   FLT;                          /*!< 0006: Programmable Input Glitch Filter register                    */
   __IO uint8_t   RA;                           /*!< 0007: Range Address register                                       */
   __IO uint8_t   SMB;                          /*!< 0008: SMBus Control and Status register                            */
   __IO uint8_t   A2;                           /*!< 0009: Address Register 2                                           */
   __IO uint8_t   SLTH;                         /*!< 000A: SCL Low Timeout Register High                                */
   __IO uint8_t   SLTL;                         /*!< 000B: SCL Low Timeout Register Low                                 */
} I2C_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- A1 Bit Fields                            ------ */
#define I2C_A1_AD_MASK                           (0x7FUL << I2C_A1_AD_SHIFT)                         /*!< I2C0_A1: AD Mask                        */
#define I2C_A1_AD_SHIFT                          1                                                   /*!< I2C0_A1: AD Position                    */
#define I2C_A1_AD(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_A1_AD_SHIFT))&I2C_A1_AD_MASK) /*!< I2C0_A1                                 */
/* ------- F Bit Fields                             ------ */
#define I2C_F_ICR_MASK                           (0x3FUL << I2C_F_ICR_SHIFT)                         /*!< I2C0_F: ICR Mask                        */
#define I2C_F_ICR_SHIFT                          0                                                   /*!< I2C0_F: ICR Position                    */
#define I2C_F_ICR(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_F_ICR_SHIFT))&I2C_F_ICR_MASK) /*!< I2C0_F                                  */
#define I2C_F_MULT_MASK                          (0x03UL << I2C_F_MULT_SHIFT)                        /*!< I2C0_F: MULT Mask                       */
#define I2C_F_MULT_SHIFT                         6                                                   /*!< I2C0_F: MULT Position                   */
#define I2C_F_MULT(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_F_MULT_SHIFT))&I2C_F_MULT_MASK) /*!< I2C0_F                                  */
/* ------- C1 Bit Fields                            ------ */
#define I2C_C1_DMAEN_MASK                        (0x01UL << I2C_C1_DMAEN_SHIFT)                      /*!< I2C0_C1: DMAEN Mask                     */
#define I2C_C1_DMAEN_SHIFT                       0                                                   /*!< I2C0_C1: DMAEN Position                 */
#define I2C_C1_WUEN_MASK                         (0x01UL << I2C_C1_WUEN_SHIFT)                       /*!< I2C0_C1: WUEN Mask                      */
#define I2C_C1_WUEN_SHIFT                        1                                                   /*!< I2C0_C1: WUEN Position                  */
#define I2C_C1_RSTA_MASK                         (0x01UL << I2C_C1_RSTA_SHIFT)                       /*!< I2C0_C1: RSTA Mask                      */
#define I2C_C1_RSTA_SHIFT                        2                                                   /*!< I2C0_C1: RSTA Position                  */
#define I2C_C1_TXAK_MASK                         (0x01UL << I2C_C1_TXAK_SHIFT)                       /*!< I2C0_C1: TXAK Mask                      */
#define I2C_C1_TXAK_SHIFT                        3                                                   /*!< I2C0_C1: TXAK Position                  */
#define I2C_C1_TX_MASK                           (0x01UL << I2C_C1_TX_SHIFT)                         /*!< I2C0_C1: TX Mask                        */
#define I2C_C1_TX_SHIFT                          4                                                   /*!< I2C0_C1: TX Position                    */
#define I2C_C1_MST_MASK                          (0x01UL << I2C_C1_MST_SHIFT)                        /*!< I2C0_C1: MST Mask                       */
#define I2C_C1_MST_SHIFT                         5                                                   /*!< I2C0_C1: MST Position                   */
#define I2C_C1_IICIE_MASK                        (0x01UL << I2C_C1_IICIE_SHIFT)                      /*!< I2C0_C1: IICIE Mask                     */
#define I2C_C1_IICIE_SHIFT                       6                                                   /*!< I2C0_C1: IICIE Position                 */
#define I2C_C1_IICEN_MASK                        (0x01UL << I2C_C1_IICEN_SHIFT)                      /*!< I2C0_C1: IICEN Mask                     */
#define I2C_C1_IICEN_SHIFT                       7                                                   /*!< I2C0_C1: IICEN Position                 */
/* ------- S Bit Fields                             ------ */
#define I2C_S_RXAK_MASK                          (0x01UL << I2C_S_RXAK_SHIFT)                        /*!< I2C0_S: RXAK Mask                       */
#define I2C_S_RXAK_SHIFT                         0                                                   /*!< I2C0_S: RXAK Position                   */
#define I2C_S_IICIF_MASK                         (0x01UL << I2C_S_IICIF_SHIFT)                       /*!< I2C0_S: IICIF Mask                      */
#define I2C_S_IICIF_SHIFT                        1                                                   /*!< I2C0_S: IICIF Position                  */
#define I2C_S_SRW_MASK                           (0x01UL << I2C_S_SRW_SHIFT)                         /*!< I2C0_S: SRW Mask                        */
#define I2C_S_SRW_SHIFT                          2                                                   /*!< I2C0_S: SRW Position                    */
#define I2C_S_RAM_MASK                           (0x01UL << I2C_S_RAM_SHIFT)                         /*!< I2C0_S: RAM Mask                        */
#define I2C_S_RAM_SHIFT                          3                                                   /*!< I2C0_S: RAM Position                    */
#define I2C_S_ARBL_MASK                          (0x01UL << I2C_S_ARBL_SHIFT)                        /*!< I2C0_S: ARBL Mask                       */
#define I2C_S_ARBL_SHIFT                         4                                                   /*!< I2C0_S: ARBL Position                   */
#define I2C_S_BUSY_MASK                          (0x01UL << I2C_S_BUSY_SHIFT)                        /*!< I2C0_S: BUSY Mask                       */
#define I2C_S_BUSY_SHIFT                         5                                                   /*!< I2C0_S: BUSY Position                   */
#define I2C_S_IAAS_MASK                          (0x01UL << I2C_S_IAAS_SHIFT)                        /*!< I2C0_S: IAAS Mask                       */
#define I2C_S_IAAS_SHIFT                         6                                                   /*!< I2C0_S: IAAS Position                   */
#define I2C_S_TCF_MASK                           (0x01UL << I2C_S_TCF_SHIFT)                         /*!< I2C0_S: TCF Mask                        */
#define I2C_S_TCF_SHIFT                          7                                                   /*!< I2C0_S: TCF Position                    */
/* ------- D Bit Fields                             ------ */
#define I2C_D_DATA_MASK                          (0xFFUL << I2C_D_DATA_SHIFT)                        /*!< I2C0_D: DATA Mask                       */
#define I2C_D_DATA_SHIFT                         0                                                   /*!< I2C0_D: DATA Position                   */
#define I2C_D_DATA(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_D_DATA_SHIFT))&I2C_D_DATA_MASK) /*!< I2C0_D                                  */
/* ------- C2 Bit Fields                            ------ */
#define I2C_C2_AD_MASK                           (0x07UL << I2C_C2_AD_SHIFT)                         /*!< I2C0_C2: AD Mask                        */
#define I2C_C2_AD_SHIFT                          0                                                   /*!< I2C0_C2: AD Position                    */
#define I2C_C2_AD(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_C2_AD_SHIFT))&I2C_C2_AD_MASK) /*!< I2C0_C2                                 */
#define I2C_C2_RMEN_MASK                         (0x01UL << I2C_C2_RMEN_SHIFT)                       /*!< I2C0_C2: RMEN Mask                      */
#define I2C_C2_RMEN_SHIFT                        3                                                   /*!< I2C0_C2: RMEN Position                  */
#define I2C_C2_SBRC_MASK                         (0x01UL << I2C_C2_SBRC_SHIFT)                       /*!< I2C0_C2: SBRC Mask                      */
#define I2C_C2_SBRC_SHIFT                        4                                                   /*!< I2C0_C2: SBRC Position                  */
#define I2C_C2_HDRS_MASK                         (0x01UL << I2C_C2_HDRS_SHIFT)                       /*!< I2C0_C2: HDRS Mask                      */
#define I2C_C2_HDRS_SHIFT                        5                                                   /*!< I2C0_C2: HDRS Position                  */
#define I2C_C2_ADEXT_MASK                        (0x01UL << I2C_C2_ADEXT_SHIFT)                      /*!< I2C0_C2: ADEXT Mask                     */
#define I2C_C2_ADEXT_SHIFT                       6                                                   /*!< I2C0_C2: ADEXT Position                 */
#define I2C_C2_GCAEN_MASK                        (0x01UL << I2C_C2_GCAEN_SHIFT)                      /*!< I2C0_C2: GCAEN Mask                     */
#define I2C_C2_GCAEN_SHIFT                       7                                                   /*!< I2C0_C2: GCAEN Position                 */
/* ------- FLT Bit Fields                           ------ */
#define I2C_FLT_FLT_MASK                         (0x0FUL << I2C_FLT_FLT_SHIFT)                       /*!< I2C0_FLT: FLT Mask                      */
#define I2C_FLT_FLT_SHIFT                        0                                                   /*!< I2C0_FLT: FLT Position                  */
#define I2C_FLT_FLT(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_FLT_FLT_SHIFT))&I2C_FLT_FLT_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_STARTF_MASK                      (0x01UL << I2C_FLT_STARTF_SHIFT)                    /*!< I2C0_FLT: STARTF Mask                   */
#define I2C_FLT_STARTF_SHIFT                     4                                                   /*!< I2C0_FLT: STARTF Position               */
#define I2C_FLT_SSIE_MASK                        (0x01UL << I2C_FLT_SSIE_SHIFT)                      /*!< I2C0_FLT: SSIE Mask                     */
#define I2C_FLT_SSIE_SHIFT                       5                                                   /*!< I2C0_FLT: SSIE Position                 */
#define I2C_FLT_STOPF_MASK                       (0x01UL << I2C_FLT_STOPF_SHIFT)                     /*!< I2C0_FLT: STOPF Mask                    */
#define I2C_FLT_STOPF_SHIFT                      6                                                   /*!< I2C0_FLT: STOPF Position                */
#define I2C_FLT_SHEN_MASK                        (0x01UL << I2C_FLT_SHEN_SHIFT)                      /*!< I2C0_FLT: SHEN Mask                     */
#define I2C_FLT_SHEN_SHIFT                       7                                                   /*!< I2C0_FLT: SHEN Position                 */
/* ------- RA Bit Fields                            ------ */
#define I2C_RA_RAD_MASK                          (0x7FUL << I2C_RA_RAD_SHIFT)                        /*!< I2C0_RA: RAD Mask                       */
#define I2C_RA_RAD_SHIFT                         1                                                   /*!< I2C0_RA: RAD Position                   */
#define I2C_RA_RAD(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_RA_RAD_SHIFT))&I2C_RA_RAD_MASK) /*!< I2C0_RA                                 */
/* ------- SMB Bit Fields                           ------ */
#define I2C_SMB_SHTF2IE_MASK                     (0x01UL << I2C_SMB_SHTF2IE_SHIFT)                   /*!< I2C0_SMB: SHTF2IE Mask                  */
#define I2C_SMB_SHTF2IE_SHIFT                    0                                                   /*!< I2C0_SMB: SHTF2IE Position              */
#define I2C_SMB_SHTF2_MASK                       (0x01UL << I2C_SMB_SHTF2_SHIFT)                     /*!< I2C0_SMB: SHTF2 Mask                    */
#define I2C_SMB_SHTF2_SHIFT                      1                                                   /*!< I2C0_SMB: SHTF2 Position                */
#define I2C_SMB_SHTF1_MASK                       (0x01UL << I2C_SMB_SHTF1_SHIFT)                     /*!< I2C0_SMB: SHTF1 Mask                    */
#define I2C_SMB_SHTF1_SHIFT                      2                                                   /*!< I2C0_SMB: SHTF1 Position                */
#define I2C_SMB_SLTF_MASK                        (0x01UL << I2C_SMB_SLTF_SHIFT)                      /*!< I2C0_SMB: SLTF Mask                     */
#define I2C_SMB_SLTF_SHIFT                       3                                                   /*!< I2C0_SMB: SLTF Position                 */
#define I2C_SMB_TCKSEL_MASK                      (0x01UL << I2C_SMB_TCKSEL_SHIFT)                    /*!< I2C0_SMB: TCKSEL Mask                   */
#define I2C_SMB_TCKSEL_SHIFT                     4                                                   /*!< I2C0_SMB: TCKSEL Position               */
#define I2C_SMB_SIICAEN_MASK                     (0x01UL << I2C_SMB_SIICAEN_SHIFT)                   /*!< I2C0_SMB: SIICAEN Mask                  */
#define I2C_SMB_SIICAEN_SHIFT                    5                                                   /*!< I2C0_SMB: SIICAEN Position              */
#define I2C_SMB_ALERTEN_MASK                     (0x01UL << I2C_SMB_ALERTEN_SHIFT)                   /*!< I2C0_SMB: ALERTEN Mask                  */
#define I2C_SMB_ALERTEN_SHIFT                    6                                                   /*!< I2C0_SMB: ALERTEN Position              */
#define I2C_SMB_FACK_MASK                        (0x01UL << I2C_SMB_FACK_SHIFT)                      /*!< I2C0_SMB: FACK Mask                     */
#define I2C_SMB_FACK_SHIFT                       7                                                   /*!< I2C0_SMB: FACK Position                 */
/* ------- A2 Bit Fields                            ------ */
#define I2C_A2_SAD_MASK                          (0x7FUL << I2C_A2_SAD_SHIFT)                        /*!< I2C0_A2: SAD Mask                       */
#define I2C_A2_SAD_SHIFT                         1                                                   /*!< I2C0_A2: SAD Position                   */
#define I2C_A2_SAD(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_A2_SAD_SHIFT))&I2C_A2_SAD_MASK) /*!< I2C0_A2                                 */
/* ------- SLTH Bit Fields                          ------ */
#define I2C_SLTH_SSLT_MASK                       (0xFFUL << I2C_SLTH_SSLT_SHIFT)                     /*!< I2C0_SLTH: SSLT Mask                    */
#define I2C_SLTH_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTH: SSLT Position                */
#define I2C_SLTH_SSLT(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SLTH_SSLT_SHIFT))&I2C_SLTH_SSLT_MASK) /*!< I2C0_SLTH                               */
/* ------- SLTL Bit Fields                          ------ */
#define I2C_SLTL_SSLT_MASK                       (0xFFUL << I2C_SLTL_SSLT_SHIFT)                     /*!< I2C0_SLTL: SSLT Mask                    */
#define I2C_SLTL_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTL: SSLT Position                */
#define I2C_SLTL_SSLT(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SLTL_SSLT_SHIFT))&I2C_SLTL_SSLT_MASK) /*!< I2C0_SLTL                               */

/* I2C0 - Peripheral instance base addresses */
#define I2C0_BasePtr                   0x40066000UL
#define I2C0                           ((I2C_Type *) I2C0_BasePtr)
#define I2C0_BASE_PTR                  (I2C0)

/* ================================================================================ */
/* ================           I2C1 (derived from I2C0)             ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit
 */

/* I2C1 - Peripheral instance base addresses */
#define I2C1_BasePtr                   0x40067000UL
#define I2C1                           ((I2C_Type *) I2C1_BasePtr)
#define I2C1_BASE_PTR                  (I2C1)

/* ================================================================================ */
/* ================           I2S0 (file:I2S0_MK_F12)              ================ */
/* ================================================================================ */

/**
 * @brief Inter-IC Sound / Synchronous Audio Interface
 */
typedef struct {                                /*!<       I2S0 Structure                                               */
   __IO uint32_t  TCSR;                         /*!< 0000: SAI Transmit Control Register                                */
   __IO uint32_t  TCR1;                         /*!< 0004: SAI Transmit Configuration 1 Register                        */
   __IO uint32_t  TCR2;                         /*!< 0008: SAI Transmit Configuration 2 Register                        */
   __IO uint32_t  TCR3;                         /*!< 000C: SAI Transmit Configuration 3 Register                        */
   __IO uint32_t  TCR4;                         /*!< 0010: SAI Transmit Configuration 4 Register                        */
   __IO uint32_t  TCR5;                         /*!< 0014: SAI Transmit Configuration 5 Register                        */
   __I  uint32_t  RESERVED0[2];                 /*!< 0018:                                                              */
   __O  uint32_t  TDR[1];                       /*!< 0020: Transmit Data Register                                       */
   __I  uint32_t  RESERVED1[7];                 /*!< 0024:                                                              */
   __I  uint32_t  TFR[1];                       /*!< 0040: SAI Transmit FIFO Register                                   */
   __I  uint32_t  RESERVED2[7];                 /*!< 0044:                                                              */
   __IO uint32_t  TMR;                          /*!< 0060: SAI Transmit Mask Register                                   */
   __I  uint32_t  RESERVED3[7];                 /*!< 0064:                                                              */
   __IO uint32_t  RCSR;                         /*!< 0080: SAI Receive Control Register                                 */
   __IO uint32_t  RCR1;                         /*!< 0084: SAI Receive Configuration 1 Register                         */
   __IO uint32_t  RCR2;                         /*!< 0088: SAI Receive Configuration 2 Register                         */
   __IO uint32_t  RCR3;                         /*!< 008C: SAI Receive Configuration 3 Register                         */
   __IO uint32_t  RCR4;                         /*!< 0090: SAI Receive Configuration 4 Register                         */
   __IO uint32_t  RCR5;                         /*!< 0094: SAI Receive Configuration 5 Register                         */
   __I  uint32_t  RESERVED4[2];                 /*!< 0098:                                                              */
   __I  uint32_t  RDR[1];                       /*!< 00A0: SAI Receive Data Register                                    */
   __I  uint32_t  RESERVED5[7];                 /*!< 00A4:                                                              */
   __I  uint32_t  RFR[1];                       /*!< 00C0: SAI Receive FIFO Register                                    */
   __I  uint32_t  RESERVED6[7];                 /*!< 00C4:                                                              */
   __IO uint32_t  RMR;                          /*!< 00E0: SAI Receive Mask Register                                    */
   __I  uint32_t  RESERVED7[7];                 /*!< 00E4:                                                              */
   __IO uint32_t  MCR;                          /*!< 0100: SAI MCLK Control Register                                    */
   __IO uint32_t  MDR;                          /*!< 0104: SAI MCLK Divide Register                                     */
} I2S_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2S0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- TCSR Bit Fields                          ------ */
#define I2S_TCSR_FRDE_MASK                       (0x01UL << I2S_TCSR_FRDE_SHIFT)                     /*!< I2S0_TCSR: FRDE Mask                    */
#define I2S_TCSR_FRDE_SHIFT                      0                                                   /*!< I2S0_TCSR: FRDE Position                */
#define I2S_TCSR_FWDE_MASK                       (0x01UL << I2S_TCSR_FWDE_SHIFT)                     /*!< I2S0_TCSR: FWDE Mask                    */
#define I2S_TCSR_FWDE_SHIFT                      1                                                   /*!< I2S0_TCSR: FWDE Position                */
#define I2S_TCSR_FRIE_MASK                       (0x01UL << I2S_TCSR_FRIE_SHIFT)                     /*!< I2S0_TCSR: FRIE Mask                    */
#define I2S_TCSR_FRIE_SHIFT                      8                                                   /*!< I2S0_TCSR: FRIE Position                */
#define I2S_TCSR_FWIE_MASK                       (0x01UL << I2S_TCSR_FWIE_SHIFT)                     /*!< I2S0_TCSR: FWIE Mask                    */
#define I2S_TCSR_FWIE_SHIFT                      9                                                   /*!< I2S0_TCSR: FWIE Position                */
#define I2S_TCSR_FEIE_MASK                       (0x01UL << I2S_TCSR_FEIE_SHIFT)                     /*!< I2S0_TCSR: FEIE Mask                    */
#define I2S_TCSR_FEIE_SHIFT                      10                                                  /*!< I2S0_TCSR: FEIE Position                */
#define I2S_TCSR_SEIE_MASK                       (0x01UL << I2S_TCSR_SEIE_SHIFT)                     /*!< I2S0_TCSR: SEIE Mask                    */
#define I2S_TCSR_SEIE_SHIFT                      11                                                  /*!< I2S0_TCSR: SEIE Position                */
#define I2S_TCSR_WSIE_MASK                       (0x01UL << I2S_TCSR_WSIE_SHIFT)                     /*!< I2S0_TCSR: WSIE Mask                    */
#define I2S_TCSR_WSIE_SHIFT                      12                                                  /*!< I2S0_TCSR: WSIE Position                */
#define I2S_TCSR_FRF_MASK                        (0x01UL << I2S_TCSR_FRF_SHIFT)                      /*!< I2S0_TCSR: FRF Mask                     */
#define I2S_TCSR_FRF_SHIFT                       16                                                  /*!< I2S0_TCSR: FRF Position                 */
#define I2S_TCSR_FWF_MASK                        (0x01UL << I2S_TCSR_FWF_SHIFT)                      /*!< I2S0_TCSR: FWF Mask                     */
#define I2S_TCSR_FWF_SHIFT                       17                                                  /*!< I2S0_TCSR: FWF Position                 */
#define I2S_TCSR_FEF_MASK                        (0x01UL << I2S_TCSR_FEF_SHIFT)                      /*!< I2S0_TCSR: FEF Mask                     */
#define I2S_TCSR_FEF_SHIFT                       18                                                  /*!< I2S0_TCSR: FEF Position                 */
#define I2S_TCSR_SEF_MASK                        (0x01UL << I2S_TCSR_SEF_SHIFT)                      /*!< I2S0_TCSR: SEF Mask                     */
#define I2S_TCSR_SEF_SHIFT                       19                                                  /*!< I2S0_TCSR: SEF Position                 */
#define I2S_TCSR_WSF_MASK                        (0x01UL << I2S_TCSR_WSF_SHIFT)                      /*!< I2S0_TCSR: WSF Mask                     */
#define I2S_TCSR_WSF_SHIFT                       20                                                  /*!< I2S0_TCSR: WSF Position                 */
#define I2S_TCSR_SR_MASK                         (0x01UL << I2S_TCSR_SR_SHIFT)                       /*!< I2S0_TCSR: SR Mask                      */
#define I2S_TCSR_SR_SHIFT                        24                                                  /*!< I2S0_TCSR: SR Position                  */
#define I2S_TCSR_FR_MASK                         (0x01UL << I2S_TCSR_FR_SHIFT)                       /*!< I2S0_TCSR: FR Mask                      */
#define I2S_TCSR_FR_SHIFT                        25                                                  /*!< I2S0_TCSR: FR Position                  */
#define I2S_TCSR_BCE_MASK                        (0x01UL << I2S_TCSR_BCE_SHIFT)                      /*!< I2S0_TCSR: BCE Mask                     */
#define I2S_TCSR_BCE_SHIFT                       28                                                  /*!< I2S0_TCSR: BCE Position                 */
#define I2S_TCSR_DBGE_MASK                       (0x01UL << I2S_TCSR_DBGE_SHIFT)                     /*!< I2S0_TCSR: DBGE Mask                    */
#define I2S_TCSR_DBGE_SHIFT                      29                                                  /*!< I2S0_TCSR: DBGE Position                */
#define I2S_TCSR_STOPE_MASK                      (0x01UL << I2S_TCSR_STOPE_SHIFT)                    /*!< I2S0_TCSR: STOPE Mask                   */
#define I2S_TCSR_STOPE_SHIFT                     30                                                  /*!< I2S0_TCSR: STOPE Position               */
#define I2S_TCSR_TE_MASK                         (0x01UL << I2S_TCSR_TE_SHIFT)                       /*!< I2S0_TCSR: TE Mask                      */
#define I2S_TCSR_TE_SHIFT                        31                                                  /*!< I2S0_TCSR: TE Position                  */
/* ------- TCR1 Bit Fields                          ------ */
#define I2S_TCR1_TFW_MASK                        (0x03UL << I2S_TCR1_TFW_SHIFT)                      /*!< I2S0_TCR1: TFW Mask                     */
#define I2S_TCR1_TFW_SHIFT                       0                                                   /*!< I2S0_TCR1: TFW Position                 */
#define I2S_TCR1_TFW(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_TCR1_TFW_SHIFT))&I2S_TCR1_TFW_MASK) /*!< I2S0_TCR1                               */
/* ------- TCR2 Bit Fields                          ------ */
#define I2S_TCR2_DIV_MASK                        (0xFFUL << I2S_TCR2_DIV_SHIFT)                      /*!< I2S0_TCR2: DIV Mask                     */
#define I2S_TCR2_DIV_SHIFT                       0                                                   /*!< I2S0_TCR2: DIV Position                 */
#define I2S_TCR2_DIV(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_TCR2_DIV_SHIFT))&I2S_TCR2_DIV_MASK) /*!< I2S0_TCR2                               */
#define I2S_TCR2_BCD_MASK                        (0x01UL << I2S_TCR2_BCD_SHIFT)                      /*!< I2S0_TCR2: BCD Mask                     */
#define I2S_TCR2_BCD_SHIFT                       24                                                  /*!< I2S0_TCR2: BCD Position                 */
#define I2S_TCR2_BCP_MASK                        (0x01UL << I2S_TCR2_BCP_SHIFT)                      /*!< I2S0_TCR2: BCP Mask                     */
#define I2S_TCR2_BCP_SHIFT                       25                                                  /*!< I2S0_TCR2: BCP Position                 */
#define I2S_TCR2_MSEL_MASK                       (0x03UL << I2S_TCR2_MSEL_SHIFT)                     /*!< I2S0_TCR2: MSEL Mask                    */
#define I2S_TCR2_MSEL_SHIFT                      26                                                  /*!< I2S0_TCR2: MSEL Position                */
#define I2S_TCR2_MSEL(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_TCR2_MSEL_SHIFT))&I2S_TCR2_MSEL_MASK) /*!< I2S0_TCR2                               */
#define I2S_TCR2_BCI_MASK                        (0x01UL << I2S_TCR2_BCI_SHIFT)                      /*!< I2S0_TCR2: BCI Mask                     */
#define I2S_TCR2_BCI_SHIFT                       28                                                  /*!< I2S0_TCR2: BCI Position                 */
#define I2S_TCR2_BCS_MASK                        (0x01UL << I2S_TCR2_BCS_SHIFT)                      /*!< I2S0_TCR2: BCS Mask                     */
#define I2S_TCR2_BCS_SHIFT                       29                                                  /*!< I2S0_TCR2: BCS Position                 */
#define I2S_TCR2_SYNC_MASK                       (0x03UL << I2S_TCR2_SYNC_SHIFT)                     /*!< I2S0_TCR2: SYNC Mask                    */
#define I2S_TCR2_SYNC_SHIFT                      30                                                  /*!< I2S0_TCR2: SYNC Position                */
#define I2S_TCR2_SYNC(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_TCR2_SYNC_SHIFT))&I2S_TCR2_SYNC_MASK) /*!< I2S0_TCR2                               */
/* ------- TCR3 Bit Fields                          ------ */
#define I2S_TCR3_WDFL_MASK                       (0x1FUL << I2S_TCR3_WDFL_SHIFT)                     /*!< I2S0_TCR3: WDFL Mask                    */
#define I2S_TCR3_WDFL_SHIFT                      0                                                   /*!< I2S0_TCR3: WDFL Position                */
#define I2S_TCR3_WDFL(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_TCR3_WDFL_SHIFT))&I2S_TCR3_WDFL_MASK) /*!< I2S0_TCR3                               */
#define I2S_TCR3_TCE_MASK                        (0x01UL << I2S_TCR3_TCE_SHIFT)                      /*!< I2S0_TCR3: TCE Mask                     */
#define I2S_TCR3_TCE_SHIFT                       16                                                  /*!< I2S0_TCR3: TCE Position                 */
/* ------- TCR4 Bit Fields                          ------ */
#define I2S_TCR4_FSD_MASK                        (0x01UL << I2S_TCR4_FSD_SHIFT)                      /*!< I2S0_TCR4: FSD Mask                     */
#define I2S_TCR4_FSD_SHIFT                       0                                                   /*!< I2S0_TCR4: FSD Position                 */
#define I2S_TCR4_FSP_MASK                        (0x01UL << I2S_TCR4_FSP_SHIFT)                      /*!< I2S0_TCR4: FSP Mask                     */
#define I2S_TCR4_FSP_SHIFT                       1                                                   /*!< I2S0_TCR4: FSP Position                 */
#define I2S_TCR4_FSE_MASK                        (0x01UL << I2S_TCR4_FSE_SHIFT)                      /*!< I2S0_TCR4: FSE Mask                     */
#define I2S_TCR4_FSE_SHIFT                       3                                                   /*!< I2S0_TCR4: FSE Position                 */
#define I2S_TCR4_MF_MASK                         (0x01UL << I2S_TCR4_MF_SHIFT)                       /*!< I2S0_TCR4: MF Mask                      */
#define I2S_TCR4_MF_SHIFT                        4                                                   /*!< I2S0_TCR4: MF Position                  */
#define I2S_TCR4_SYWD_MASK                       (0x1FUL << I2S_TCR4_SYWD_SHIFT)                     /*!< I2S0_TCR4: SYWD Mask                    */
#define I2S_TCR4_SYWD_SHIFT                      8                                                   /*!< I2S0_TCR4: SYWD Position                */
#define I2S_TCR4_SYWD(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_TCR4_SYWD_SHIFT))&I2S_TCR4_SYWD_MASK) /*!< I2S0_TCR4                               */
#define I2S_TCR4_FRSZ_MASK                       (0x1FUL << I2S_TCR4_FRSZ_SHIFT)                     /*!< I2S0_TCR4: FRSZ Mask                    */
#define I2S_TCR4_FRSZ_SHIFT                      16                                                  /*!< I2S0_TCR4: FRSZ Position                */
#define I2S_TCR4_FRSZ(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_TCR4_FRSZ_SHIFT))&I2S_TCR4_FRSZ_MASK) /*!< I2S0_TCR4                               */
/* ------- TCR5 Bit Fields                          ------ */
#define I2S_TCR5_FBT_MASK                        (0x1FUL << I2S_TCR5_FBT_SHIFT)                      /*!< I2S0_TCR5: FBT Mask                     */
#define I2S_TCR5_FBT_SHIFT                       8                                                   /*!< I2S0_TCR5: FBT Position                 */
#define I2S_TCR5_FBT(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_TCR5_FBT_SHIFT))&I2S_TCR5_FBT_MASK) /*!< I2S0_TCR5                               */
#define I2S_TCR5_W0W_MASK                        (0x1FUL << I2S_TCR5_W0W_SHIFT)                      /*!< I2S0_TCR5: W0W Mask                     */
#define I2S_TCR5_W0W_SHIFT                       16                                                  /*!< I2S0_TCR5: W0W Position                 */
#define I2S_TCR5_W0W(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_TCR5_W0W_SHIFT))&I2S_TCR5_W0W_MASK) /*!< I2S0_TCR5                               */
#define I2S_TCR5_WNW_MASK                        (0x1FUL << I2S_TCR5_WNW_SHIFT)                      /*!< I2S0_TCR5: WNW Mask                     */
#define I2S_TCR5_WNW_SHIFT                       24                                                  /*!< I2S0_TCR5: WNW Position                 */
#define I2S_TCR5_WNW(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_TCR5_WNW_SHIFT))&I2S_TCR5_WNW_MASK) /*!< I2S0_TCR5                               */
/* ------- TDR Bit Fields                           ------ */
#define I2S_TDR_TDR_MASK                         (0xFFFFFFFFUL << I2S_TDR_TDR_SHIFT)                 /*!< I2S0_TDR: TDR Mask                      */
#define I2S_TDR_TDR_SHIFT                        0                                                   /*!< I2S0_TDR: TDR Position                  */
#define I2S_TDR_TDR(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_TDR_TDR_SHIFT))&I2S_TDR_TDR_MASK) /*!< I2S0_TDR                                */
/* ------- TFR Bit Fields                           ------ */
#define I2S_TFR_RFP_MASK                         (0x0FUL << I2S_TFR_RFP_SHIFT)                       /*!< I2S0_TFR: RFP Mask                      */
#define I2S_TFR_RFP_SHIFT                        0                                                   /*!< I2S0_TFR: RFP Position                  */
#define I2S_TFR_RFP(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_TFR_RFP_SHIFT))&I2S_TFR_RFP_MASK) /*!< I2S0_TFR                                */
#define I2S_TFR_WFP_MASK                         (0x0FUL << I2S_TFR_WFP_SHIFT)                       /*!< I2S0_TFR: WFP Mask                      */
#define I2S_TFR_WFP_SHIFT                        16                                                  /*!< I2S0_TFR: WFP Position                  */
#define I2S_TFR_WFP(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_TFR_WFP_SHIFT))&I2S_TFR_WFP_MASK) /*!< I2S0_TFR                                */
/* ------- TMR Bit Fields                           ------ */
#define I2S_TMR_TWM_MASK                         (0xFFFFFFFFUL << I2S_TMR_TWM_SHIFT)                 /*!< I2S0_TMR: TWM Mask                      */
#define I2S_TMR_TWM_SHIFT                        0                                                   /*!< I2S0_TMR: TWM Position                  */
#define I2S_TMR_TWM(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_TMR_TWM_SHIFT))&I2S_TMR_TWM_MASK) /*!< I2S0_TMR                                */
/* ------- RCSR Bit Fields                          ------ */
#define I2S_RCSR_FRDE_MASK                       (0x01UL << I2S_RCSR_FRDE_SHIFT)                     /*!< I2S0_RCSR: FRDE Mask                    */
#define I2S_RCSR_FRDE_SHIFT                      0                                                   /*!< I2S0_RCSR: FRDE Position                */
#define I2S_RCSR_FWDE_MASK                       (0x01UL << I2S_RCSR_FWDE_SHIFT)                     /*!< I2S0_RCSR: FWDE Mask                    */
#define I2S_RCSR_FWDE_SHIFT                      1                                                   /*!< I2S0_RCSR: FWDE Position                */
#define I2S_RCSR_FRIE_MASK                       (0x01UL << I2S_RCSR_FRIE_SHIFT)                     /*!< I2S0_RCSR: FRIE Mask                    */
#define I2S_RCSR_FRIE_SHIFT                      8                                                   /*!< I2S0_RCSR: FRIE Position                */
#define I2S_RCSR_FWIE_MASK                       (0x01UL << I2S_RCSR_FWIE_SHIFT)                     /*!< I2S0_RCSR: FWIE Mask                    */
#define I2S_RCSR_FWIE_SHIFT                      9                                                   /*!< I2S0_RCSR: FWIE Position                */
#define I2S_RCSR_FEIE_MASK                       (0x01UL << I2S_RCSR_FEIE_SHIFT)                     /*!< I2S0_RCSR: FEIE Mask                    */
#define I2S_RCSR_FEIE_SHIFT                      10                                                  /*!< I2S0_RCSR: FEIE Position                */
#define I2S_RCSR_SEIE_MASK                       (0x01UL << I2S_RCSR_SEIE_SHIFT)                     /*!< I2S0_RCSR: SEIE Mask                    */
#define I2S_RCSR_SEIE_SHIFT                      11                                                  /*!< I2S0_RCSR: SEIE Position                */
#define I2S_RCSR_WSIE_MASK                       (0x01UL << I2S_RCSR_WSIE_SHIFT)                     /*!< I2S0_RCSR: WSIE Mask                    */
#define I2S_RCSR_WSIE_SHIFT                      12                                                  /*!< I2S0_RCSR: WSIE Position                */
#define I2S_RCSR_FRF_MASK                        (0x01UL << I2S_RCSR_FRF_SHIFT)                      /*!< I2S0_RCSR: FRF Mask                     */
#define I2S_RCSR_FRF_SHIFT                       16                                                  /*!< I2S0_RCSR: FRF Position                 */
#define I2S_RCSR_FWF_MASK                        (0x01UL << I2S_RCSR_FWF_SHIFT)                      /*!< I2S0_RCSR: FWF Mask                     */
#define I2S_RCSR_FWF_SHIFT                       17                                                  /*!< I2S0_RCSR: FWF Position                 */
#define I2S_RCSR_FEF_MASK                        (0x01UL << I2S_RCSR_FEF_SHIFT)                      /*!< I2S0_RCSR: FEF Mask                     */
#define I2S_RCSR_FEF_SHIFT                       18                                                  /*!< I2S0_RCSR: FEF Position                 */
#define I2S_RCSR_SEF_MASK                        (0x01UL << I2S_RCSR_SEF_SHIFT)                      /*!< I2S0_RCSR: SEF Mask                     */
#define I2S_RCSR_SEF_SHIFT                       19                                                  /*!< I2S0_RCSR: SEF Position                 */
#define I2S_RCSR_WSF_MASK                        (0x01UL << I2S_RCSR_WSF_SHIFT)                      /*!< I2S0_RCSR: WSF Mask                     */
#define I2S_RCSR_WSF_SHIFT                       20                                                  /*!< I2S0_RCSR: WSF Position                 */
#define I2S_RCSR_SR_MASK                         (0x01UL << I2S_RCSR_SR_SHIFT)                       /*!< I2S0_RCSR: SR Mask                      */
#define I2S_RCSR_SR_SHIFT                        24                                                  /*!< I2S0_RCSR: SR Position                  */
#define I2S_RCSR_FR_MASK                         (0x01UL << I2S_RCSR_FR_SHIFT)                       /*!< I2S0_RCSR: FR Mask                      */
#define I2S_RCSR_FR_SHIFT                        25                                                  /*!< I2S0_RCSR: FR Position                  */
#define I2S_RCSR_BCE_MASK                        (0x01UL << I2S_RCSR_BCE_SHIFT)                      /*!< I2S0_RCSR: BCE Mask                     */
#define I2S_RCSR_BCE_SHIFT                       28                                                  /*!< I2S0_RCSR: BCE Position                 */
#define I2S_RCSR_DBGE_MASK                       (0x01UL << I2S_RCSR_DBGE_SHIFT)                     /*!< I2S0_RCSR: DBGE Mask                    */
#define I2S_RCSR_DBGE_SHIFT                      29                                                  /*!< I2S0_RCSR: DBGE Position                */
#define I2S_RCSR_STOPE_MASK                      (0x01UL << I2S_RCSR_STOPE_SHIFT)                    /*!< I2S0_RCSR: STOPE Mask                   */
#define I2S_RCSR_STOPE_SHIFT                     30                                                  /*!< I2S0_RCSR: STOPE Position               */
#define I2S_RCSR_RE_MASK                         (0x01UL << I2S_RCSR_RE_SHIFT)                       /*!< I2S0_RCSR: RE Mask                      */
#define I2S_RCSR_RE_SHIFT                        31                                                  /*!< I2S0_RCSR: RE Position                  */
/* ------- RCR1 Bit Fields                          ------ */
#define I2S_RCR1_RFW_MASK                        (0x07UL << I2S_RCR1_RFW_SHIFT)                      /*!< I2S0_RCR1: RFW Mask                     */
#define I2S_RCR1_RFW_SHIFT                       0                                                   /*!< I2S0_RCR1: RFW Position                 */
#define I2S_RCR1_RFW(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_RCR1_RFW_SHIFT))&I2S_RCR1_RFW_MASK) /*!< I2S0_RCR1                               */
/* ------- RCR2 Bit Fields                          ------ */
#define I2S_RCR2_DIV_MASK                        (0xFFUL << I2S_RCR2_DIV_SHIFT)                      /*!< I2S0_RCR2: DIV Mask                     */
#define I2S_RCR2_DIV_SHIFT                       0                                                   /*!< I2S0_RCR2: DIV Position                 */
#define I2S_RCR2_DIV(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_RCR2_DIV_SHIFT))&I2S_RCR2_DIV_MASK) /*!< I2S0_RCR2                               */
#define I2S_RCR2_BCD_MASK                        (0x01UL << I2S_RCR2_BCD_SHIFT)                      /*!< I2S0_RCR2: BCD Mask                     */
#define I2S_RCR2_BCD_SHIFT                       24                                                  /*!< I2S0_RCR2: BCD Position                 */
#define I2S_RCR2_BCP_MASK                        (0x01UL << I2S_RCR2_BCP_SHIFT)                      /*!< I2S0_RCR2: BCP Mask                     */
#define I2S_RCR2_BCP_SHIFT                       25                                                  /*!< I2S0_RCR2: BCP Position                 */
#define I2S_RCR2_MSEL_MASK                       (0x03UL << I2S_RCR2_MSEL_SHIFT)                     /*!< I2S0_RCR2: MSEL Mask                    */
#define I2S_RCR2_MSEL_SHIFT                      26                                                  /*!< I2S0_RCR2: MSEL Position                */
#define I2S_RCR2_MSEL(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_RCR2_MSEL_SHIFT))&I2S_RCR2_MSEL_MASK) /*!< I2S0_RCR2                               */
#define I2S_RCR2_BCI_MASK                        (0x01UL << I2S_RCR2_BCI_SHIFT)                      /*!< I2S0_RCR2: BCI Mask                     */
#define I2S_RCR2_BCI_SHIFT                       28                                                  /*!< I2S0_RCR2: BCI Position                 */
#define I2S_RCR2_BCS_MASK                        (0x01UL << I2S_RCR2_BCS_SHIFT)                      /*!< I2S0_RCR2: BCS Mask                     */
#define I2S_RCR2_BCS_SHIFT                       29                                                  /*!< I2S0_RCR2: BCS Position                 */
#define I2S_RCR2_SYNC_MASK                       (0x03UL << I2S_RCR2_SYNC_SHIFT)                     /*!< I2S0_RCR2: SYNC Mask                    */
#define I2S_RCR2_SYNC_SHIFT                      30                                                  /*!< I2S0_RCR2: SYNC Position                */
#define I2S_RCR2_SYNC(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_RCR2_SYNC_SHIFT))&I2S_RCR2_SYNC_MASK) /*!< I2S0_RCR2                               */
/* ------- RCR3 Bit Fields                          ------ */
#define I2S_RCR3_WDFL_MASK                       (0x1FUL << I2S_RCR3_WDFL_SHIFT)                     /*!< I2S0_RCR3: WDFL Mask                    */
#define I2S_RCR3_WDFL_SHIFT                      0                                                   /*!< I2S0_RCR3: WDFL Position                */
#define I2S_RCR3_WDFL(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_RCR3_WDFL_SHIFT))&I2S_RCR3_WDFL_MASK) /*!< I2S0_RCR3                               */
#define I2S_RCR3_RCE_MASK                        (0x01UL << I2S_RCR3_RCE_SHIFT)                      /*!< I2S0_RCR3: RCE Mask                     */
#define I2S_RCR3_RCE_SHIFT                       16                                                  /*!< I2S0_RCR3: RCE Position                 */
/* ------- RCR4 Bit Fields                          ------ */
#define I2S_RCR4_FSD_MASK                        (0x01UL << I2S_RCR4_FSD_SHIFT)                      /*!< I2S0_RCR4: FSD Mask                     */
#define I2S_RCR4_FSD_SHIFT                       0                                                   /*!< I2S0_RCR4: FSD Position                 */
#define I2S_RCR4_FSP_MASK                        (0x01UL << I2S_RCR4_FSP_SHIFT)                      /*!< I2S0_RCR4: FSP Mask                     */
#define I2S_RCR4_FSP_SHIFT                       1                                                   /*!< I2S0_RCR4: FSP Position                 */
#define I2S_RCR4_FSE_MASK                        (0x01UL << I2S_RCR4_FSE_SHIFT)                      /*!< I2S0_RCR4: FSE Mask                     */
#define I2S_RCR4_FSE_SHIFT                       3                                                   /*!< I2S0_RCR4: FSE Position                 */
#define I2S_RCR4_MF_MASK                         (0x01UL << I2S_RCR4_MF_SHIFT)                       /*!< I2S0_RCR4: MF Mask                      */
#define I2S_RCR4_MF_SHIFT                        4                                                   /*!< I2S0_RCR4: MF Position                  */
#define I2S_RCR4_SYWD_MASK                       (0x1FUL << I2S_RCR4_SYWD_SHIFT)                     /*!< I2S0_RCR4: SYWD Mask                    */
#define I2S_RCR4_SYWD_SHIFT                      8                                                   /*!< I2S0_RCR4: SYWD Position                */
#define I2S_RCR4_SYWD(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_RCR4_SYWD_SHIFT))&I2S_RCR4_SYWD_MASK) /*!< I2S0_RCR4                               */
#define I2S_RCR4_FRSZ_MASK                       (0x1FUL << I2S_RCR4_FRSZ_SHIFT)                     /*!< I2S0_RCR4: FRSZ Mask                    */
#define I2S_RCR4_FRSZ_SHIFT                      16                                                  /*!< I2S0_RCR4: FRSZ Position                */
#define I2S_RCR4_FRSZ(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_RCR4_FRSZ_SHIFT))&I2S_RCR4_FRSZ_MASK) /*!< I2S0_RCR4                               */
/* ------- RCR5 Bit Fields                          ------ */
#define I2S_RCR5_FBT_MASK                        (0x1FUL << I2S_RCR5_FBT_SHIFT)                      /*!< I2S0_RCR5: FBT Mask                     */
#define I2S_RCR5_FBT_SHIFT                       8                                                   /*!< I2S0_RCR5: FBT Position                 */
#define I2S_RCR5_FBT(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_RCR5_FBT_SHIFT))&I2S_RCR5_FBT_MASK) /*!< I2S0_RCR5                               */
#define I2S_RCR5_W0W_MASK                        (0x1FUL << I2S_RCR5_W0W_SHIFT)                      /*!< I2S0_RCR5: W0W Mask                     */
#define I2S_RCR5_W0W_SHIFT                       16                                                  /*!< I2S0_RCR5: W0W Position                 */
#define I2S_RCR5_W0W(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_RCR5_W0W_SHIFT))&I2S_RCR5_W0W_MASK) /*!< I2S0_RCR5                               */
#define I2S_RCR5_WNW_MASK                        (0x1FUL << I2S_RCR5_WNW_SHIFT)                      /*!< I2S0_RCR5: WNW Mask                     */
#define I2S_RCR5_WNW_SHIFT                       24                                                  /*!< I2S0_RCR5: WNW Position                 */
#define I2S_RCR5_WNW(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_RCR5_WNW_SHIFT))&I2S_RCR5_WNW_MASK) /*!< I2S0_RCR5                               */
/* ------- RDR Bit Fields                           ------ */
#define I2S_RDR_RDR_MASK                         (0xFFFFFFFFUL << I2S_RDR_RDR_SHIFT)                 /*!< I2S0_RDR: RDR Mask                      */
#define I2S_RDR_RDR_SHIFT                        0                                                   /*!< I2S0_RDR: RDR Position                  */
#define I2S_RDR_RDR(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_RDR_RDR_SHIFT))&I2S_RDR_RDR_MASK) /*!< I2S0_RDR                                */
/* ------- RFR Bit Fields                           ------ */
#define I2S_RFR_RFP_MASK                         (0x0FUL << I2S_RFR_RFP_SHIFT)                       /*!< I2S0_RFR: RFP Mask                      */
#define I2S_RFR_RFP_SHIFT                        0                                                   /*!< I2S0_RFR: RFP Position                  */
#define I2S_RFR_RFP(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_RFR_RFP_SHIFT))&I2S_RFR_RFP_MASK) /*!< I2S0_RFR                                */
#define I2S_RFR_WFP_MASK                         (0x0FUL << I2S_RFR_WFP_SHIFT)                       /*!< I2S0_RFR: WFP Mask                      */
#define I2S_RFR_WFP_SHIFT                        16                                                  /*!< I2S0_RFR: WFP Position                  */
#define I2S_RFR_WFP(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_RFR_WFP_SHIFT))&I2S_RFR_WFP_MASK) /*!< I2S0_RFR                                */
/* ------- RMR Bit Fields                           ------ */
#define I2S_RMR_RWM_MASK                         (0xFFFFFFFFUL << I2S_RMR_RWM_SHIFT)                 /*!< I2S0_RMR: RWM Mask                      */
#define I2S_RMR_RWM_SHIFT                        0                                                   /*!< I2S0_RMR: RWM Position                  */
#define I2S_RMR_RWM(x)                           (((uint32_t)(((uint32_t)(x))<<I2S_RMR_RWM_SHIFT))&I2S_RMR_RWM_MASK) /*!< I2S0_RMR                                */
/* ------- MCR Bit Fields                           ------ */
#define I2S_MCR_MICS_MASK                        (0x03UL << I2S_MCR_MICS_SHIFT)                      /*!< I2S0_MCR: MICS Mask                     */
#define I2S_MCR_MICS_SHIFT                       24                                                  /*!< I2S0_MCR: MICS Position                 */
#define I2S_MCR_MICS(x)                          (((uint32_t)(((uint32_t)(x))<<I2S_MCR_MICS_SHIFT))&I2S_MCR_MICS_MASK) /*!< I2S0_MCR                                */
#define I2S_MCR_MOE_MASK                         (0x01UL << I2S_MCR_MOE_SHIFT)                       /*!< I2S0_MCR: MOE Mask                      */
#define I2S_MCR_MOE_SHIFT                        30                                                  /*!< I2S0_MCR: MOE Position                  */
#define I2S_MCR_DUF_MASK                         (0x01UL << I2S_MCR_DUF_SHIFT)                       /*!< I2S0_MCR: DUF Mask                      */
#define I2S_MCR_DUF_SHIFT                        31                                                  /*!< I2S0_MCR: DUF Position                  */
/* ------- MDR Bit Fields                           ------ */
#define I2S_MDR_DIVIDE_MASK                      (0xFFFUL << I2S_MDR_DIVIDE_SHIFT)                   /*!< I2S0_MDR: DIVIDE Mask                   */
#define I2S_MDR_DIVIDE_SHIFT                     0                                                   /*!< I2S0_MDR: DIVIDE Position               */
#define I2S_MDR_DIVIDE(x)                        (((uint32_t)(((uint32_t)(x))<<I2S_MDR_DIVIDE_SHIFT))&I2S_MDR_DIVIDE_MASK) /*!< I2S0_MDR                                */
#define I2S_MDR_FRACT_MASK                       (0xFFUL << I2S_MDR_FRACT_SHIFT)                     /*!< I2S0_MDR: FRACT Mask                    */
#define I2S_MDR_FRACT_SHIFT                      12                                                  /*!< I2S0_MDR: FRACT Position                */
#define I2S_MDR_FRACT(x)                         (((uint32_t)(((uint32_t)(x))<<I2S_MDR_FRACT_SHIFT))&I2S_MDR_FRACT_MASK) /*!< I2S0_MDR                                */

/* I2S0 - Peripheral instance base addresses */
#define I2S0_BasePtr                   0x4002F000UL
#define I2S0                           ((I2S_Type *) I2S0_BasePtr)
#define I2S0_BASE_PTR                  (I2S0)

/* ================================================================================ */
/* ================           LLWU (file:LLWU_PE3_FILT2)           ================ */
/* ================================================================================ */

/**
 * @brief Low leakage wakeup unit
 */
typedef struct {                                /*!<       LLWU Structure                                               */
   __IO uint8_t   PE1;                          /*!< 0000: Pin Enable 1 Register                                        */
   __IO uint8_t   PE2;                          /*!< 0001: Pin Enable 2 Register                                        */
   __IO uint8_t   PE3;                          /*!< 0002: Pin Enable 3 Register                                        */
   __IO uint8_t   PE4;                          /*!< 0003: Pin Enable 4 Register                                        */
   __IO uint8_t   ME;                           /*!< 0004: Module Enable Register                                       */
   __IO uint8_t   F1;                           /*!< 0005: Flag 1 Register                                              */
   __IO uint8_t   F2;                           /*!< 0006: Flag 2 Register                                              */
   __I  uint8_t   F3;                           /*!< 0007: Flag 3 Register                                              */
   __IO uint8_t   FILT1;                        /*!< 0008: Pin Filter 1 register                                        */
   __IO uint8_t   FILT2;                        /*!< 0009: Pin Filter 2 register                                        */
} LLWU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LLWU' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PE1 Bit Fields                           ------ */
#define LLWU_PE1_WUPE0_MASK                      (0x03UL << LLWU_PE1_WUPE0_SHIFT)                    /*!< LLWU_PE1: WUPE0 Mask                    */
#define LLWU_PE1_WUPE0_SHIFT                     0                                                   /*!< LLWU_PE1: WUPE0 Position                */
#define LLWU_PE1_WUPE0(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE1_WUPE0_SHIFT))&LLWU_PE1_WUPE0_MASK) /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE1_MASK                      (0x03UL << LLWU_PE1_WUPE1_SHIFT)                    /*!< LLWU_PE1: WUPE1 Mask                    */
#define LLWU_PE1_WUPE1_SHIFT                     2                                                   /*!< LLWU_PE1: WUPE1 Position                */
#define LLWU_PE1_WUPE1(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE1_WUPE1_SHIFT))&LLWU_PE1_WUPE1_MASK) /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE2_MASK                      (0x03UL << LLWU_PE1_WUPE2_SHIFT)                    /*!< LLWU_PE1: WUPE2 Mask                    */
#define LLWU_PE1_WUPE2_SHIFT                     4                                                   /*!< LLWU_PE1: WUPE2 Position                */
#define LLWU_PE1_WUPE2(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE1_WUPE2_SHIFT))&LLWU_PE1_WUPE2_MASK) /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE3_MASK                      (0x03UL << LLWU_PE1_WUPE3_SHIFT)                    /*!< LLWU_PE1: WUPE3 Mask                    */
#define LLWU_PE1_WUPE3_SHIFT                     6                                                   /*!< LLWU_PE1: WUPE3 Position                */
#define LLWU_PE1_WUPE3(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE1_WUPE3_SHIFT))&LLWU_PE1_WUPE3_MASK) /*!< LLWU_PE1                                */
/* ------- PE2 Bit Fields                           ------ */
#define LLWU_PE2_WUPE4_MASK                      (0x03UL << LLWU_PE2_WUPE4_SHIFT)                    /*!< LLWU_PE2: WUPE4 Mask                    */
#define LLWU_PE2_WUPE4_SHIFT                     0                                                   /*!< LLWU_PE2: WUPE4 Position                */
#define LLWU_PE2_WUPE4(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE2_WUPE4_SHIFT))&LLWU_PE2_WUPE4_MASK) /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE5_MASK                      (0x03UL << LLWU_PE2_WUPE5_SHIFT)                    /*!< LLWU_PE2: WUPE5 Mask                    */
#define LLWU_PE2_WUPE5_SHIFT                     2                                                   /*!< LLWU_PE2: WUPE5 Position                */
#define LLWU_PE2_WUPE5(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE2_WUPE5_SHIFT))&LLWU_PE2_WUPE5_MASK) /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE6_MASK                      (0x03UL << LLWU_PE2_WUPE6_SHIFT)                    /*!< LLWU_PE2: WUPE6 Mask                    */
#define LLWU_PE2_WUPE6_SHIFT                     4                                                   /*!< LLWU_PE2: WUPE6 Position                */
#define LLWU_PE2_WUPE6(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE2_WUPE6_SHIFT))&LLWU_PE2_WUPE6_MASK) /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE7_MASK                      (0x03UL << LLWU_PE2_WUPE7_SHIFT)                    /*!< LLWU_PE2: WUPE7 Mask                    */
#define LLWU_PE2_WUPE7_SHIFT                     6                                                   /*!< LLWU_PE2: WUPE7 Position                */
#define LLWU_PE2_WUPE7(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE2_WUPE7_SHIFT))&LLWU_PE2_WUPE7_MASK) /*!< LLWU_PE2                                */
/* ------- PE3 Bit Fields                           ------ */
#define LLWU_PE3_WUPE8_MASK                      (0x03UL << LLWU_PE3_WUPE8_SHIFT)                    /*!< LLWU_PE3: WUPE8 Mask                    */
#define LLWU_PE3_WUPE8_SHIFT                     0                                                   /*!< LLWU_PE3: WUPE8 Position                */
#define LLWU_PE3_WUPE8(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE3_WUPE8_SHIFT))&LLWU_PE3_WUPE8_MASK) /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE9_MASK                      (0x03UL << LLWU_PE3_WUPE9_SHIFT)                    /*!< LLWU_PE3: WUPE9 Mask                    */
#define LLWU_PE3_WUPE9_SHIFT                     2                                                   /*!< LLWU_PE3: WUPE9 Position                */
#define LLWU_PE3_WUPE9(x)                        (((uint8_t)(((uint8_t)(x))<<LLWU_PE3_WUPE9_SHIFT))&LLWU_PE3_WUPE9_MASK) /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE10_MASK                     (0x03UL << LLWU_PE3_WUPE10_SHIFT)                   /*!< LLWU_PE3: WUPE10 Mask                   */
#define LLWU_PE3_WUPE10_SHIFT                    4                                                   /*!< LLWU_PE3: WUPE10 Position               */
#define LLWU_PE3_WUPE10(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE3_WUPE10_SHIFT))&LLWU_PE3_WUPE10_MASK) /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE11_MASK                     (0x03UL << LLWU_PE3_WUPE11_SHIFT)                   /*!< LLWU_PE3: WUPE11 Mask                   */
#define LLWU_PE3_WUPE11_SHIFT                    6                                                   /*!< LLWU_PE3: WUPE11 Position               */
#define LLWU_PE3_WUPE11(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE3_WUPE11_SHIFT))&LLWU_PE3_WUPE11_MASK) /*!< LLWU_PE3                                */
/* ------- PE4 Bit Fields                           ------ */
#define LLWU_PE4_WUPE12_MASK                     (0x03UL << LLWU_PE4_WUPE12_SHIFT)                   /*!< LLWU_PE4: WUPE12 Mask                   */
#define LLWU_PE4_WUPE12_SHIFT                    0                                                   /*!< LLWU_PE4: WUPE12 Position               */
#define LLWU_PE4_WUPE12(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE4_WUPE12_SHIFT))&LLWU_PE4_WUPE12_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE13_MASK                     (0x03UL << LLWU_PE4_WUPE13_SHIFT)                   /*!< LLWU_PE4: WUPE13 Mask                   */
#define LLWU_PE4_WUPE13_SHIFT                    2                                                   /*!< LLWU_PE4: WUPE13 Position               */
#define LLWU_PE4_WUPE13(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE4_WUPE13_SHIFT))&LLWU_PE4_WUPE13_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE14_MASK                     (0x03UL << LLWU_PE4_WUPE14_SHIFT)                   /*!< LLWU_PE4: WUPE14 Mask                   */
#define LLWU_PE4_WUPE14_SHIFT                    4                                                   /*!< LLWU_PE4: WUPE14 Position               */
#define LLWU_PE4_WUPE14(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE4_WUPE14_SHIFT))&LLWU_PE4_WUPE14_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE15_MASK                     (0x03UL << LLWU_PE4_WUPE15_SHIFT)                   /*!< LLWU_PE4: WUPE15 Mask                   */
#define LLWU_PE4_WUPE15_SHIFT                    6                                                   /*!< LLWU_PE4: WUPE15 Position               */
#define LLWU_PE4_WUPE15(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_PE4_WUPE15_SHIFT))&LLWU_PE4_WUPE15_MASK) /*!< LLWU_PE4                                */
/* ------- ME Bit Fields                            ------ */
#define LLWU_ME_WUME0_MASK                       (0x01UL << LLWU_ME_WUME0_SHIFT)                     /*!< LLWU_ME: WUME0 Mask                     */
#define LLWU_ME_WUME0_SHIFT                      0                                                   /*!< LLWU_ME: WUME0 Position                 */
#define LLWU_ME_WUME1_MASK                       (0x01UL << LLWU_ME_WUME1_SHIFT)                     /*!< LLWU_ME: WUME1 Mask                     */
#define LLWU_ME_WUME1_SHIFT                      1                                                   /*!< LLWU_ME: WUME1 Position                 */
#define LLWU_ME_WUME2_MASK                       (0x01UL << LLWU_ME_WUME2_SHIFT)                     /*!< LLWU_ME: WUME2 Mask                     */
#define LLWU_ME_WUME2_SHIFT                      2                                                   /*!< LLWU_ME: WUME2 Position                 */
#define LLWU_ME_WUME3_MASK                       (0x01UL << LLWU_ME_WUME3_SHIFT)                     /*!< LLWU_ME: WUME3 Mask                     */
#define LLWU_ME_WUME3_SHIFT                      3                                                   /*!< LLWU_ME: WUME3 Position                 */
#define LLWU_ME_WUME4_MASK                       (0x01UL << LLWU_ME_WUME4_SHIFT)                     /*!< LLWU_ME: WUME4 Mask                     */
#define LLWU_ME_WUME4_SHIFT                      4                                                   /*!< LLWU_ME: WUME4 Position                 */
#define LLWU_ME_WUME5_MASK                       (0x01UL << LLWU_ME_WUME5_SHIFT)                     /*!< LLWU_ME: WUME5 Mask                     */
#define LLWU_ME_WUME5_SHIFT                      5                                                   /*!< LLWU_ME: WUME5 Position                 */
#define LLWU_ME_WUME6_MASK                       (0x01UL << LLWU_ME_WUME6_SHIFT)                     /*!< LLWU_ME: WUME6 Mask                     */
#define LLWU_ME_WUME6_SHIFT                      6                                                   /*!< LLWU_ME: WUME6 Position                 */
#define LLWU_ME_WUME7_MASK                       (0x01UL << LLWU_ME_WUME7_SHIFT)                     /*!< LLWU_ME: WUME7 Mask                     */
#define LLWU_ME_WUME7_SHIFT                      7                                                   /*!< LLWU_ME: WUME7 Position                 */
/* ------- F1 Bit Fields                            ------ */
#define LLWU_F1_WUF0_MASK                        (0x01UL << LLWU_F1_WUF0_SHIFT)                      /*!< LLWU_F1: WUF0 Mask                      */
#define LLWU_F1_WUF0_SHIFT                       0                                                   /*!< LLWU_F1: WUF0 Position                  */
#define LLWU_F1_WUF1_MASK                        (0x01UL << LLWU_F1_WUF1_SHIFT)                      /*!< LLWU_F1: WUF1 Mask                      */
#define LLWU_F1_WUF1_SHIFT                       1                                                   /*!< LLWU_F1: WUF1 Position                  */
#define LLWU_F1_WUF2_MASK                        (0x01UL << LLWU_F1_WUF2_SHIFT)                      /*!< LLWU_F1: WUF2 Mask                      */
#define LLWU_F1_WUF2_SHIFT                       2                                                   /*!< LLWU_F1: WUF2 Position                  */
#define LLWU_F1_WUF3_MASK                        (0x01UL << LLWU_F1_WUF3_SHIFT)                      /*!< LLWU_F1: WUF3 Mask                      */
#define LLWU_F1_WUF3_SHIFT                       3                                                   /*!< LLWU_F1: WUF3 Position                  */
#define LLWU_F1_WUF4_MASK                        (0x01UL << LLWU_F1_WUF4_SHIFT)                      /*!< LLWU_F1: WUF4 Mask                      */
#define LLWU_F1_WUF4_SHIFT                       4                                                   /*!< LLWU_F1: WUF4 Position                  */
#define LLWU_F1_WUF5_MASK                        (0x01UL << LLWU_F1_WUF5_SHIFT)                      /*!< LLWU_F1: WUF5 Mask                      */
#define LLWU_F1_WUF5_SHIFT                       5                                                   /*!< LLWU_F1: WUF5 Position                  */
#define LLWU_F1_WUF6_MASK                        (0x01UL << LLWU_F1_WUF6_SHIFT)                      /*!< LLWU_F1: WUF6 Mask                      */
#define LLWU_F1_WUF6_SHIFT                       6                                                   /*!< LLWU_F1: WUF6 Position                  */
#define LLWU_F1_WUF7_MASK                        (0x01UL << LLWU_F1_WUF7_SHIFT)                      /*!< LLWU_F1: WUF7 Mask                      */
#define LLWU_F1_WUF7_SHIFT                       7                                                   /*!< LLWU_F1: WUF7 Position                  */
/* ------- F2 Bit Fields                            ------ */
#define LLWU_F2_WUF8_MASK                        (0x01UL << LLWU_F2_WUF8_SHIFT)                      /*!< LLWU_F2: WUF8 Mask                      */
#define LLWU_F2_WUF8_SHIFT                       0                                                   /*!< LLWU_F2: WUF8 Position                  */
#define LLWU_F2_WUF9_MASK                        (0x01UL << LLWU_F2_WUF9_SHIFT)                      /*!< LLWU_F2: WUF9 Mask                      */
#define LLWU_F2_WUF9_SHIFT                       1                                                   /*!< LLWU_F2: WUF9 Position                  */
#define LLWU_F2_WUF10_MASK                       (0x01UL << LLWU_F2_WUF10_SHIFT)                     /*!< LLWU_F2: WUF10 Mask                     */
#define LLWU_F2_WUF10_SHIFT                      2                                                   /*!< LLWU_F2: WUF10 Position                 */
#define LLWU_F2_WUF11_MASK                       (0x01UL << LLWU_F2_WUF11_SHIFT)                     /*!< LLWU_F2: WUF11 Mask                     */
#define LLWU_F2_WUF11_SHIFT                      3                                                   /*!< LLWU_F2: WUF11 Position                 */
#define LLWU_F2_WUF12_MASK                       (0x01UL << LLWU_F2_WUF12_SHIFT)                     /*!< LLWU_F2: WUF12 Mask                     */
#define LLWU_F2_WUF12_SHIFT                      4                                                   /*!< LLWU_F2: WUF12 Position                 */
#define LLWU_F2_WUF13_MASK                       (0x01UL << LLWU_F2_WUF13_SHIFT)                     /*!< LLWU_F2: WUF13 Mask                     */
#define LLWU_F2_WUF13_SHIFT                      5                                                   /*!< LLWU_F2: WUF13 Position                 */
#define LLWU_F2_WUF14_MASK                       (0x01UL << LLWU_F2_WUF14_SHIFT)                     /*!< LLWU_F2: WUF14 Mask                     */
#define LLWU_F2_WUF14_SHIFT                      6                                                   /*!< LLWU_F2: WUF14 Position                 */
#define LLWU_F2_WUF15_MASK                       (0x01UL << LLWU_F2_WUF15_SHIFT)                     /*!< LLWU_F2: WUF15 Mask                     */
#define LLWU_F2_WUF15_SHIFT                      7                                                   /*!< LLWU_F2: WUF15 Position                 */
/* ------- F3 Bit Fields                            ------ */
#define LLWU_F3_MWUF0_MASK                       (0x01UL << LLWU_F3_MWUF0_SHIFT)                     /*!< LLWU_F3: MWUF0 Mask                     */
#define LLWU_F3_MWUF0_SHIFT                      0                                                   /*!< LLWU_F3: MWUF0 Position                 */
#define LLWU_F3_MWUF1_MASK                       (0x01UL << LLWU_F3_MWUF1_SHIFT)                     /*!< LLWU_F3: MWUF1 Mask                     */
#define LLWU_F3_MWUF1_SHIFT                      1                                                   /*!< LLWU_F3: MWUF1 Position                 */
#define LLWU_F3_MWUF2_MASK                       (0x01UL << LLWU_F3_MWUF2_SHIFT)                     /*!< LLWU_F3: MWUF2 Mask                     */
#define LLWU_F3_MWUF2_SHIFT                      2                                                   /*!< LLWU_F3: MWUF2 Position                 */
#define LLWU_F3_MWUF3_MASK                       (0x01UL << LLWU_F3_MWUF3_SHIFT)                     /*!< LLWU_F3: MWUF3 Mask                     */
#define LLWU_F3_MWUF3_SHIFT                      3                                                   /*!< LLWU_F3: MWUF3 Position                 */
#define LLWU_F3_MWUF4_MASK                       (0x01UL << LLWU_F3_MWUF4_SHIFT)                     /*!< LLWU_F3: MWUF4 Mask                     */
#define LLWU_F3_MWUF4_SHIFT                      4                                                   /*!< LLWU_F3: MWUF4 Position                 */
#define LLWU_F3_MWUF5_MASK                       (0x01UL << LLWU_F3_MWUF5_SHIFT)                     /*!< LLWU_F3: MWUF5 Mask                     */
#define LLWU_F3_MWUF5_SHIFT                      5                                                   /*!< LLWU_F3: MWUF5 Position                 */
#define LLWU_F3_MWUF6_MASK                       (0x01UL << LLWU_F3_MWUF6_SHIFT)                     /*!< LLWU_F3: MWUF6 Mask                     */
#define LLWU_F3_MWUF6_SHIFT                      6                                                   /*!< LLWU_F3: MWUF6 Position                 */
#define LLWU_F3_MWUF7_MASK                       (0x01UL << LLWU_F3_MWUF7_SHIFT)                     /*!< LLWU_F3: MWUF7 Mask                     */
#define LLWU_F3_MWUF7_SHIFT                      7                                                   /*!< LLWU_F3: MWUF7 Position                 */
/* ------- FILT Bit Fields                          ------ */
#define LLWU_FILT_FILTSEL_MASK                   (0x0FUL << LLWU_FILT_FILTSEL_SHIFT)                 /*!< LLWU_FILT: FILTSEL Mask                 */
#define LLWU_FILT_FILTSEL_SHIFT                  0                                                   /*!< LLWU_FILT: FILTSEL Position             */
#define LLWU_FILT_FILTSEL(x)                     (((uint8_t)(((uint8_t)(x))<<LLWU_FILT_FILTSEL_SHIFT))&LLWU_FILT_FILTSEL_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTE_MASK                     (0x03UL << LLWU_FILT_FILTE_SHIFT)                   /*!< LLWU_FILT: FILTE Mask                   */
#define LLWU_FILT_FILTE_SHIFT                    5                                                   /*!< LLWU_FILT: FILTE Position               */
#define LLWU_FILT_FILTE(x)                       (((uint8_t)(((uint8_t)(x))<<LLWU_FILT_FILTE_SHIFT))&LLWU_FILT_FILTE_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTF_MASK                     (0x01UL << LLWU_FILT_FILTF_SHIFT)                   /*!< LLWU_FILT: FILTF Mask                   */
#define LLWU_FILT_FILTF_SHIFT                    7                                                   /*!< LLWU_FILT: FILTF Position               */

/* LLWU - Peripheral instance base addresses */
#define LLWU_BasePtr                   0x4007C000UL
#define LLWU                           ((LLWU_Type *) LLWU_BasePtr)
#define LLWU_BASE_PTR                  (LLWU)

/* ================================================================================ */
/* ================           LPTMR0 (file:LPTMR0_0)               ================ */
/* ================================================================================ */

/**
 * @brief Low Power Timer
 */
typedef struct {                                /*!<       LPTMR0 Structure                                             */
   __IO uint32_t  CSR;                          /*!< 0000: Control Status Register                                      */
   __IO uint32_t  PSR;                          /*!< 0004: Prescale Register                                            */
   __IO uint32_t  CMR;                          /*!< 0008: Compare Register                                             */
   __I  uint32_t  CNR;                          /*!< 000C: Counter Register                                             */
} LPTMR0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CSR Bit Fields                           ------ */
#define LPTMR_CSR_TEN_MASK                       (0x01UL << LPTMR_CSR_TEN_SHIFT)                     /*!< LPTMR0_CSR: TEN Mask                    */
#define LPTMR_CSR_TEN_SHIFT                      0                                                   /*!< LPTMR0_CSR: TEN Position                */
#define LPTMR_CSR_TMS_MASK                       (0x01UL << LPTMR_CSR_TMS_SHIFT)                     /*!< LPTMR0_CSR: TMS Mask                    */
#define LPTMR_CSR_TMS_SHIFT                      1                                                   /*!< LPTMR0_CSR: TMS Position                */
#define LPTMR_CSR_TFC_MASK                       (0x01UL << LPTMR_CSR_TFC_SHIFT)                     /*!< LPTMR0_CSR: TFC Mask                    */
#define LPTMR_CSR_TFC_SHIFT                      2                                                   /*!< LPTMR0_CSR: TFC Position                */
#define LPTMR_CSR_TPP_MASK                       (0x01UL << LPTMR_CSR_TPP_SHIFT)                     /*!< LPTMR0_CSR: TPP Mask                    */
#define LPTMR_CSR_TPP_SHIFT                      3                                                   /*!< LPTMR0_CSR: TPP Position                */
#define LPTMR_CSR_TPS_MASK                       (0x03UL << LPTMR_CSR_TPS_SHIFT)                     /*!< LPTMR0_CSR: TPS Mask                    */
#define LPTMR_CSR_TPS_SHIFT                      4                                                   /*!< LPTMR0_CSR: TPS Position                */
#define LPTMR_CSR_TPS(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_CSR_TPS_SHIFT))&LPTMR_CSR_TPS_MASK) /*!< LPTMR0_CSR                              */
#define LPTMR_CSR_TIE_MASK                       (0x01UL << LPTMR_CSR_TIE_SHIFT)                     /*!< LPTMR0_CSR: TIE Mask                    */
#define LPTMR_CSR_TIE_SHIFT                      6                                                   /*!< LPTMR0_CSR: TIE Position                */
#define LPTMR_CSR_TCF_MASK                       (0x01UL << LPTMR_CSR_TCF_SHIFT)                     /*!< LPTMR0_CSR: TCF Mask                    */
#define LPTMR_CSR_TCF_SHIFT                      7                                                   /*!< LPTMR0_CSR: TCF Position                */
/* ------- PSR Bit Fields                           ------ */
#define LPTMR_PSR_PCS_MASK                       (0x03UL << LPTMR_PSR_PCS_SHIFT)                     /*!< LPTMR0_PSR: PCS Mask                    */
#define LPTMR_PSR_PCS_SHIFT                      0                                                   /*!< LPTMR0_PSR: PCS Position                */
#define LPTMR_PSR_PCS(x)                         (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PCS_SHIFT))&LPTMR_PSR_PCS_MASK) /*!< LPTMR0_PSR                              */
#define LPTMR_PSR_PBYP_MASK                      (0x01UL << LPTMR_PSR_PBYP_SHIFT)                    /*!< LPTMR0_PSR: PBYP Mask                   */
#define LPTMR_PSR_PBYP_SHIFT                     2                                                   /*!< LPTMR0_PSR: PBYP Position               */
#define LPTMR_PSR_PRESCALE_MASK                  (0x0FUL << LPTMR_PSR_PRESCALE_SHIFT)                /*!< LPTMR0_PSR: PRESCALE Mask               */
#define LPTMR_PSR_PRESCALE_SHIFT                 3                                                   /*!< LPTMR0_PSR: PRESCALE Position           */
#define LPTMR_PSR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x))<<LPTMR_PSR_PRESCALE_SHIFT))&LPTMR_PSR_PRESCALE_MASK) /*!< LPTMR0_PSR                              */
/* ------- CMR Bit Fields                           ------ */
#define LPTMR_CMR_COMPARE_MASK                   (0xFFFFUL << LPTMR_CMR_COMPARE_SHIFT)               /*!< LPTMR0_CMR: COMPARE Mask                */
#define LPTMR_CMR_COMPARE_SHIFT                  0                                                   /*!< LPTMR0_CMR: COMPARE Position            */
#define LPTMR_CMR_COMPARE(x)                     (((uint32_t)(((uint32_t)(x))<<LPTMR_CMR_COMPARE_SHIFT))&LPTMR_CMR_COMPARE_MASK) /*!< LPTMR0_CMR                              */
/* ------- CNR Bit Fields                           ------ */
#define LPTMR_CNR_COUNTER_MASK                   (0xFFFFUL << LPTMR_CNR_COUNTER_SHIFT)               /*!< LPTMR0_CNR: COUNTER Mask                */
#define LPTMR_CNR_COUNTER_SHIFT                  0                                                   /*!< LPTMR0_CNR: COUNTER Position            */
#define LPTMR_CNR_COUNTER(x)                     (((uint32_t)(((uint32_t)(x))<<LPTMR_CNR_COUNTER_SHIFT))&LPTMR_CNR_COUNTER_MASK) /*!< LPTMR0_CNR                              */

/* LPTMR0 - Peripheral instance base addresses */
#define LPTMR0_BasePtr                 0x40040000UL
#define LPTMR0                         ((LPTMR0_Type *) LPTMR0_BasePtr)
#define LPTMR0_BASE_PTR                (LPTMR0)

/* ================================================================================ */
/* ================           LPUART0 (file:LPUART0)               ================ */
/* ================================================================================ */

/**
 * @brief Low Power Universal Asynchronous Receiver/Transmitter
 */
typedef struct {                                /*!<       LPUART0 Structure                                            */
   __IO uint32_t  BAUD;                         /*!< 0000: Baud Rate Register                                           */
   __IO uint32_t  STAT;                         /*!< 0004: Status Register                                              */
   __IO uint32_t  CTRL;                         /*!< 0008: Control Register                                             */
   __IO uint32_t  DATA;                         /*!< 000C: Data Register                                                */
   __IO uint32_t  MATCH;                        /*!< 0010: Match Address Register                                       */
   __IO uint32_t  MODIR;                        /*!< 0014: MODEM register                                               */
} LPUART0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LPUART0' Position & Mask macros                     ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- BAUD Bit Fields                          ------ */
#define LPUART_BAUD_SBR_MASK                     (0x1FFFUL << LPUART_BAUD_SBR_SHIFT)                 /*!< LPUART0_BAUD: SBR Mask                  */
#define LPUART_BAUD_SBR_SHIFT                    0                                                   /*!< LPUART0_BAUD: SBR Position              */
#define LPUART_BAUD_SBR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_SBR_SHIFT))&LPUART_BAUD_SBR_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_SBNS_MASK                    (0x01UL << LPUART_BAUD_SBNS_SHIFT)                  /*!< LPUART0_BAUD: SBNS Mask                 */
#define LPUART_BAUD_SBNS_SHIFT                   13                                                  /*!< LPUART0_BAUD: SBNS Position             */
#define LPUART_BAUD_RXEDGIE_MASK                 (0x01UL << LPUART_BAUD_RXEDGIE_SHIFT)               /*!< LPUART0_BAUD: RXEDGIE Mask              */
#define LPUART_BAUD_RXEDGIE_SHIFT                14                                                  /*!< LPUART0_BAUD: RXEDGIE Position          */
#define LPUART_BAUD_LBKDIE_MASK                  (0x01UL << LPUART_BAUD_LBKDIE_SHIFT)                /*!< LPUART0_BAUD: LBKDIE Mask               */
#define LPUART_BAUD_LBKDIE_SHIFT                 15                                                  /*!< LPUART0_BAUD: LBKDIE Position           */
#define LPUART_BAUD_RESYNCDIS_MASK               (0x01UL << LPUART_BAUD_RESYNCDIS_SHIFT)             /*!< LPUART0_BAUD: RESYNCDIS Mask            */
#define LPUART_BAUD_RESYNCDIS_SHIFT              16                                                  /*!< LPUART0_BAUD: RESYNCDIS Position        */
#define LPUART_BAUD_BOTHEDGE_MASK                (0x01UL << LPUART_BAUD_BOTHEDGE_SHIFT)              /*!< LPUART0_BAUD: BOTHEDGE Mask             */
#define LPUART_BAUD_BOTHEDGE_SHIFT               17                                                  /*!< LPUART0_BAUD: BOTHEDGE Position         */
#define LPUART_BAUD_MATCFG_MASK                  (0x03UL << LPUART_BAUD_MATCFG_SHIFT)                /*!< LPUART0_BAUD: MATCFG Mask               */
#define LPUART_BAUD_MATCFG_SHIFT                 18                                                  /*!< LPUART0_BAUD: MATCFG Position           */
#define LPUART_BAUD_MATCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MATCFG_SHIFT))&LPUART_BAUD_MATCFG_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_RDMAE_MASK                   (0x01UL << LPUART_BAUD_RDMAE_SHIFT)                 /*!< LPUART0_BAUD: RDMAE Mask                */
#define LPUART_BAUD_RDMAE_SHIFT                  21                                                  /*!< LPUART0_BAUD: RDMAE Position            */
#define LPUART_BAUD_TDMAE_MASK                   (0x01UL << LPUART_BAUD_TDMAE_SHIFT)                 /*!< LPUART0_BAUD: TDMAE Mask                */
#define LPUART_BAUD_TDMAE_SHIFT                  23                                                  /*!< LPUART0_BAUD: TDMAE Position            */
#define LPUART_BAUD_OSR_MASK                     (0x1FUL << LPUART_BAUD_OSR_SHIFT)                   /*!< LPUART0_BAUD: OSR Mask                  */
#define LPUART_BAUD_OSR_SHIFT                    24                                                  /*!< LPUART0_BAUD: OSR Position              */
#define LPUART_BAUD_OSR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_OSR_SHIFT))&LPUART_BAUD_OSR_MASK) /*!< LPUART0_BAUD                            */
#define LPUART_BAUD_M10_MASK                     (0x01UL << LPUART_BAUD_M10_SHIFT)                   /*!< LPUART0_BAUD: M10 Mask                  */
#define LPUART_BAUD_M10_SHIFT                    29                                                  /*!< LPUART0_BAUD: M10 Position              */
#define LPUART_BAUD_MAEN2_MASK                   (0x01UL << LPUART_BAUD_MAEN2_SHIFT)                 /*!< LPUART0_BAUD: MAEN2 Mask                */
#define LPUART_BAUD_MAEN2_SHIFT                  30                                                  /*!< LPUART0_BAUD: MAEN2 Position            */
#define LPUART_BAUD_MAEN1_MASK                   (0x01UL << LPUART_BAUD_MAEN1_SHIFT)                 /*!< LPUART0_BAUD: MAEN1 Mask                */
#define LPUART_BAUD_MAEN1_SHIFT                  31                                                  /*!< LPUART0_BAUD: MAEN1 Position            */
/* ------- STAT Bit Fields                          ------ */
#define LPUART_STAT_MA2F_MASK                    (0x01UL << LPUART_STAT_MA2F_SHIFT)                  /*!< LPUART0_STAT: MA2F Mask                 */
#define LPUART_STAT_MA2F_SHIFT                   14                                                  /*!< LPUART0_STAT: MA2F Position             */
#define LPUART_STAT_MA1F_MASK                    (0x01UL << LPUART_STAT_MA1F_SHIFT)                  /*!< LPUART0_STAT: MA1F Mask                 */
#define LPUART_STAT_MA1F_SHIFT                   15                                                  /*!< LPUART0_STAT: MA1F Position             */
#define LPUART_STAT_PF_MASK                      (0x01UL << LPUART_STAT_PF_SHIFT)                    /*!< LPUART0_STAT: PF Mask                   */
#define LPUART_STAT_PF_SHIFT                     16                                                  /*!< LPUART0_STAT: PF Position               */
#define LPUART_STAT_FE_MASK                      (0x01UL << LPUART_STAT_FE_SHIFT)                    /*!< LPUART0_STAT: FE Mask                   */
#define LPUART_STAT_FE_SHIFT                     17                                                  /*!< LPUART0_STAT: FE Position               */
#define LPUART_STAT_NF_MASK                      (0x01UL << LPUART_STAT_NF_SHIFT)                    /*!< LPUART0_STAT: NF Mask                   */
#define LPUART_STAT_NF_SHIFT                     18                                                  /*!< LPUART0_STAT: NF Position               */
#define LPUART_STAT_OR_MASK                      (0x01UL << LPUART_STAT_OR_SHIFT)                    /*!< LPUART0_STAT: OR Mask                   */
#define LPUART_STAT_OR_SHIFT                     19                                                  /*!< LPUART0_STAT: OR Position               */
#define LPUART_STAT_IDLE_MASK                    (0x01UL << LPUART_STAT_IDLE_SHIFT)                  /*!< LPUART0_STAT: IDLE Mask                 */
#define LPUART_STAT_IDLE_SHIFT                   20                                                  /*!< LPUART0_STAT: IDLE Position             */
#define LPUART_STAT_RDRF_MASK                    (0x01UL << LPUART_STAT_RDRF_SHIFT)                  /*!< LPUART0_STAT: RDRF Mask                 */
#define LPUART_STAT_RDRF_SHIFT                   21                                                  /*!< LPUART0_STAT: RDRF Position             */
#define LPUART_STAT_TC_MASK                      (0x01UL << LPUART_STAT_TC_SHIFT)                    /*!< LPUART0_STAT: TC Mask                   */
#define LPUART_STAT_TC_SHIFT                     22                                                  /*!< LPUART0_STAT: TC Position               */
#define LPUART_STAT_TDRE_MASK                    (0x01UL << LPUART_STAT_TDRE_SHIFT)                  /*!< LPUART0_STAT: TDRE Mask                 */
#define LPUART_STAT_TDRE_SHIFT                   23                                                  /*!< LPUART0_STAT: TDRE Position             */
#define LPUART_STAT_RAF_MASK                     (0x01UL << LPUART_STAT_RAF_SHIFT)                   /*!< LPUART0_STAT: RAF Mask                  */
#define LPUART_STAT_RAF_SHIFT                    24                                                  /*!< LPUART0_STAT: RAF Position              */
#define LPUART_STAT_LBKDE_MASK                   (0x01UL << LPUART_STAT_LBKDE_SHIFT)                 /*!< LPUART0_STAT: LBKDE Mask                */
#define LPUART_STAT_LBKDE_SHIFT                  25                                                  /*!< LPUART0_STAT: LBKDE Position            */
#define LPUART_STAT_BRK13_MASK                   (0x01UL << LPUART_STAT_BRK13_SHIFT)                 /*!< LPUART0_STAT: BRK13 Mask                */
#define LPUART_STAT_BRK13_SHIFT                  26                                                  /*!< LPUART0_STAT: BRK13 Position            */
#define LPUART_STAT_RWUID_MASK                   (0x01UL << LPUART_STAT_RWUID_SHIFT)                 /*!< LPUART0_STAT: RWUID Mask                */
#define LPUART_STAT_RWUID_SHIFT                  27                                                  /*!< LPUART0_STAT: RWUID Position            */
#define LPUART_STAT_RXINV_MASK                   (0x01UL << LPUART_STAT_RXINV_SHIFT)                 /*!< LPUART0_STAT: RXINV Mask                */
#define LPUART_STAT_RXINV_SHIFT                  28                                                  /*!< LPUART0_STAT: RXINV Position            */
#define LPUART_STAT_MSBF_MASK                    (0x01UL << LPUART_STAT_MSBF_SHIFT)                  /*!< LPUART0_STAT: MSBF Mask                 */
#define LPUART_STAT_MSBF_SHIFT                   29                                                  /*!< LPUART0_STAT: MSBF Position             */
#define LPUART_STAT_RXEDGIF_MASK                 (0x01UL << LPUART_STAT_RXEDGIF_SHIFT)               /*!< LPUART0_STAT: RXEDGIF Mask              */
#define LPUART_STAT_RXEDGIF_SHIFT                30                                                  /*!< LPUART0_STAT: RXEDGIF Position          */
#define LPUART_STAT_LBKDIF_MASK                  (0x01UL << LPUART_STAT_LBKDIF_SHIFT)                /*!< LPUART0_STAT: LBKDIF Mask               */
#define LPUART_STAT_LBKDIF_SHIFT                 31                                                  /*!< LPUART0_STAT: LBKDIF Position           */
/* ------- CTRL Bit Fields                          ------ */
#define LPUART_CTRL_PT_MASK                      (0x01UL << LPUART_CTRL_PT_SHIFT)                    /*!< LPUART0_CTRL: PT Mask                   */
#define LPUART_CTRL_PT_SHIFT                     0                                                   /*!< LPUART0_CTRL: PT Position               */
#define LPUART_CTRL_PE_MASK                      (0x01UL << LPUART_CTRL_PE_SHIFT)                    /*!< LPUART0_CTRL: PE Mask                   */
#define LPUART_CTRL_PE_SHIFT                     1                                                   /*!< LPUART0_CTRL: PE Position               */
#define LPUART_CTRL_ILT_MASK                     (0x01UL << LPUART_CTRL_ILT_SHIFT)                   /*!< LPUART0_CTRL: ILT Mask                  */
#define LPUART_CTRL_ILT_SHIFT                    2                                                   /*!< LPUART0_CTRL: ILT Position              */
#define LPUART_CTRL_WAKE_MASK                    (0x01UL << LPUART_CTRL_WAKE_SHIFT)                  /*!< LPUART0_CTRL: WAKE Mask                 */
#define LPUART_CTRL_WAKE_SHIFT                   3                                                   /*!< LPUART0_CTRL: WAKE Position             */
#define LPUART_CTRL_M_MASK                       (0x01UL << LPUART_CTRL_M_SHIFT)                     /*!< LPUART0_CTRL: M Mask                    */
#define LPUART_CTRL_M_SHIFT                      4                                                   /*!< LPUART0_CTRL: M Position                */
#define LPUART_CTRL_RSRC_MASK                    (0x01UL << LPUART_CTRL_RSRC_SHIFT)                  /*!< LPUART0_CTRL: RSRC Mask                 */
#define LPUART_CTRL_RSRC_SHIFT                   5                                                   /*!< LPUART0_CTRL: RSRC Position             */
#define LPUART_CTRL_DOZEEN_MASK                  (0x01UL << LPUART_CTRL_DOZEEN_SHIFT)                /*!< LPUART0_CTRL: DOZEEN Mask               */
#define LPUART_CTRL_DOZEEN_SHIFT                 6                                                   /*!< LPUART0_CTRL: DOZEEN Position           */
#define LPUART_CTRL_LOOPS_MASK                   (0x01UL << LPUART_CTRL_LOOPS_SHIFT)                 /*!< LPUART0_CTRL: LOOPS Mask                */
#define LPUART_CTRL_LOOPS_SHIFT                  7                                                   /*!< LPUART0_CTRL: LOOPS Position            */
#define LPUART_CTRL_MA2IE_MASK                   (0x01UL << LPUART_CTRL_MA2IE_SHIFT)                 /*!< LPUART0_CTRL: MA2IE Mask                */
#define LPUART_CTRL_MA2IE_SHIFT                  14                                                  /*!< LPUART0_CTRL: MA2IE Position            */
#define LPUART_CTRL_MA1IE_MASK                   (0x01UL << LPUART_CTRL_MA1IE_SHIFT)                 /*!< LPUART0_CTRL: MA1IE Mask                */
#define LPUART_CTRL_MA1IE_SHIFT                  15                                                  /*!< LPUART0_CTRL: MA1IE Position            */
#define LPUART_CTRL_SBK_MASK                     (0x01UL << LPUART_CTRL_SBK_SHIFT)                   /*!< LPUART0_CTRL: SBK Mask                  */
#define LPUART_CTRL_SBK_SHIFT                    16                                                  /*!< LPUART0_CTRL: SBK Position              */
#define LPUART_CTRL_RWU_MASK                     (0x01UL << LPUART_CTRL_RWU_SHIFT)                   /*!< LPUART0_CTRL: RWU Mask                  */
#define LPUART_CTRL_RWU_SHIFT                    17                                                  /*!< LPUART0_CTRL: RWU Position              */
#define LPUART_CTRL_RE_MASK                      (0x01UL << LPUART_CTRL_RE_SHIFT)                    /*!< LPUART0_CTRL: RE Mask                   */
#define LPUART_CTRL_RE_SHIFT                     18                                                  /*!< LPUART0_CTRL: RE Position               */
#define LPUART_CTRL_TE_MASK                      (0x01UL << LPUART_CTRL_TE_SHIFT)                    /*!< LPUART0_CTRL: TE Mask                   */
#define LPUART_CTRL_TE_SHIFT                     19                                                  /*!< LPUART0_CTRL: TE Position               */
#define LPUART_CTRL_ILIE_MASK                    (0x01UL << LPUART_CTRL_ILIE_SHIFT)                  /*!< LPUART0_CTRL: ILIE Mask                 */
#define LPUART_CTRL_ILIE_SHIFT                   20                                                  /*!< LPUART0_CTRL: ILIE Position             */
#define LPUART_CTRL_RIE_MASK                     (0x01UL << LPUART_CTRL_RIE_SHIFT)                   /*!< LPUART0_CTRL: RIE Mask                  */
#define LPUART_CTRL_RIE_SHIFT                    21                                                  /*!< LPUART0_CTRL: RIE Position              */
#define LPUART_CTRL_TCIE_MASK                    (0x01UL << LPUART_CTRL_TCIE_SHIFT)                  /*!< LPUART0_CTRL: TCIE Mask                 */
#define LPUART_CTRL_TCIE_SHIFT                   22                                                  /*!< LPUART0_CTRL: TCIE Position             */
#define LPUART_CTRL_TIE_MASK                     (0x01UL << LPUART_CTRL_TIE_SHIFT)                   /*!< LPUART0_CTRL: TIE Mask                  */
#define LPUART_CTRL_TIE_SHIFT                    23                                                  /*!< LPUART0_CTRL: TIE Position              */
#define LPUART_CTRL_PEIE_MASK                    (0x01UL << LPUART_CTRL_PEIE_SHIFT)                  /*!< LPUART0_CTRL: PEIE Mask                 */
#define LPUART_CTRL_PEIE_SHIFT                   24                                                  /*!< LPUART0_CTRL: PEIE Position             */
#define LPUART_CTRL_FEIE_MASK                    (0x01UL << LPUART_CTRL_FEIE_SHIFT)                  /*!< LPUART0_CTRL: FEIE Mask                 */
#define LPUART_CTRL_FEIE_SHIFT                   25                                                  /*!< LPUART0_CTRL: FEIE Position             */
#define LPUART_CTRL_NEIE_MASK                    (0x01UL << LPUART_CTRL_NEIE_SHIFT)                  /*!< LPUART0_CTRL: NEIE Mask                 */
#define LPUART_CTRL_NEIE_SHIFT                   26                                                  /*!< LPUART0_CTRL: NEIE Position             */
#define LPUART_CTRL_ORIE_MASK                    (0x01UL << LPUART_CTRL_ORIE_SHIFT)                  /*!< LPUART0_CTRL: ORIE Mask                 */
#define LPUART_CTRL_ORIE_SHIFT                   27                                                  /*!< LPUART0_CTRL: ORIE Position             */
#define LPUART_CTRL_TXINV_MASK                   (0x01UL << LPUART_CTRL_TXINV_SHIFT)                 /*!< LPUART0_CTRL: TXINV Mask                */
#define LPUART_CTRL_TXINV_SHIFT                  28                                                  /*!< LPUART0_CTRL: TXINV Position            */
#define LPUART_CTRL_TXDIR_MASK                   (0x01UL << LPUART_CTRL_TXDIR_SHIFT)                 /*!< LPUART0_CTRL: TXDIR Mask                */
#define LPUART_CTRL_TXDIR_SHIFT                  29                                                  /*!< LPUART0_CTRL: TXDIR Position            */
#define LPUART_CTRL_R9T8_MASK                    (0x01UL << LPUART_CTRL_R9T8_SHIFT)                  /*!< LPUART0_CTRL: R9T8 Mask                 */
#define LPUART_CTRL_R9T8_SHIFT                   30                                                  /*!< LPUART0_CTRL: R9T8 Position             */
#define LPUART_CTRL_R8T9_MASK                    (0x01UL << LPUART_CTRL_R8T9_SHIFT)                  /*!< LPUART0_CTRL: R8T9 Mask                 */
#define LPUART_CTRL_R8T9_SHIFT                   31                                                  /*!< LPUART0_CTRL: R8T9 Position             */
/* ------- DATA Bit Fields                          ------ */
#define LPUART_DATA_RT_MASK                      (0x3FFUL << LPUART_DATA_RT_SHIFT)                   /*!< LPUART0_DATA: RT Mask                   */
#define LPUART_DATA_RT_SHIFT                     0                                                   /*!< LPUART0_DATA: RT Position               */
#define LPUART_DATA_RT(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_RT_SHIFT))&LPUART_DATA_RT_MASK) /*!< LPUART0_DATA                            */
#define LPUART_DATA_IDLINE_MASK                  (0x01UL << LPUART_DATA_IDLINE_SHIFT)                /*!< LPUART0_DATA: IDLINE Mask               */
#define LPUART_DATA_IDLINE_SHIFT                 11                                                  /*!< LPUART0_DATA: IDLINE Position           */
#define LPUART_DATA_RXEMPT_MASK                  (0x01UL << LPUART_DATA_RXEMPT_SHIFT)                /*!< LPUART0_DATA: RXEMPT Mask               */
#define LPUART_DATA_RXEMPT_SHIFT                 12                                                  /*!< LPUART0_DATA: RXEMPT Position           */
#define LPUART_DATA_FRETSC_MASK                  (0x01UL << LPUART_DATA_FRETSC_SHIFT)                /*!< LPUART0_DATA: FRETSC Mask               */
#define LPUART_DATA_FRETSC_SHIFT                 13                                                  /*!< LPUART0_DATA: FRETSC Position           */
#define LPUART_DATA_PARITYE_MASK                 (0x01UL << LPUART_DATA_PARITYE_SHIFT)               /*!< LPUART0_DATA: PARITYE Mask              */
#define LPUART_DATA_PARITYE_SHIFT                14                                                  /*!< LPUART0_DATA: PARITYE Position          */
#define LPUART_DATA_NOISY_MASK                   (0x01UL << LPUART_DATA_NOISY_SHIFT)                 /*!< LPUART0_DATA: NOISY Mask                */
#define LPUART_DATA_NOISY_SHIFT                  15                                                  /*!< LPUART0_DATA: NOISY Position            */
/* ------- MATCH Bit Fields                         ------ */
#define LPUART_MATCH_MA1_MASK                    (0x3FFUL << LPUART_MATCH_MA1_SHIFT)                 /*!< LPUART0_MATCH: MA1 Mask                 */
#define LPUART_MATCH_MA1_SHIFT                   0                                                   /*!< LPUART0_MATCH: MA1 Position             */
#define LPUART_MATCH_MA1(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA1_SHIFT))&LPUART_MATCH_MA1_MASK) /*!< LPUART0_MATCH                           */
#define LPUART_MATCH_MA2_MASK                    (0x3FFUL << LPUART_MATCH_MA2_SHIFT)                 /*!< LPUART0_MATCH: MA2 Mask                 */
#define LPUART_MATCH_MA2_SHIFT                   16                                                  /*!< LPUART0_MATCH: MA2 Position             */
#define LPUART_MATCH_MA2(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA2_SHIFT))&LPUART_MATCH_MA2_MASK) /*!< LPUART0_MATCH                           */
/* ------- MODIR Bit Fields                         ------ */

/* LPUART0 - Peripheral instance base addresses */
#define LPUART0_BasePtr                0x4002A000UL
#define LPUART0                        ((LPUART0_Type *) LPUART0_BasePtr)
#define LPUART0_BASE_PTR               (LPUART0)

/* ================================================================================ */
/* ================           MCG (file:MCG_MK_ICS48Mx)            ================ */
/* ================================================================================ */

/**
 * @brief Multipurpose Clock Generator module
 */
typedef struct {                                /*!<       MCG Structure                                                */
   __IO uint8_t   C1;                           /*!< 0000: Control 1 Register                                           */
   __IO uint8_t   C2;                           /*!< 0001: Control 2 Register                                           */
   __IO uint8_t   C3;                           /*!< 0002: Control 3 Register                                           */
   __IO uint8_t   C4;                           /*!< 0003: Control 4 Register                                           */
   __IO uint8_t   C5;                           /*!< 0004: Control 5 Register                                           */
   __IO uint8_t   C6;                           /*!< 0005: Control 6 Register                                           */
   __IO uint8_t   S;                            /*!< 0006: Status Register                                              */
   __I  uint8_t   RESERVED0;                    /*!< 0007:                                                              */
   __IO uint8_t   SC;                           /*!< 0008: Status and Control Register                                  */
   __I  uint8_t   RESERVED1;                    /*!< 0009:                                                              */
   __IO uint8_t   ATCVH;                        /*!< 000A: ATM Compare Value High                                       */
   __IO uint8_t   ATCVL;                        /*!< 000B: ATM Compare Value Low                                        */
   __IO uint8_t   C7;                           /*!< 000C: Control 7 Register                                           */
   __IO uint8_t   C8;                           /*!< 000D: Control 8 Register                                           */
} MCG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- C1 Bit Fields                            ------ */
#define MCG_C1_IREFSTEN_MASK                     (0x01UL << MCG_C1_IREFSTEN_SHIFT)                   /*!< MCG_C1: IREFSTEN Mask                   */
#define MCG_C1_IREFSTEN_SHIFT                    0                                                   /*!< MCG_C1: IREFSTEN Position               */
#define MCG_C1_IRCLKEN_MASK                      (0x01UL << MCG_C1_IRCLKEN_SHIFT)                    /*!< MCG_C1: IRCLKEN Mask                    */
#define MCG_C1_IRCLKEN_SHIFT                     1                                                   /*!< MCG_C1: IRCLKEN Position                */
#define MCG_C1_IREFS_MASK                        (0x01UL << MCG_C1_IREFS_SHIFT)                      /*!< MCG_C1: IREFS Mask                      */
#define MCG_C1_IREFS_SHIFT                       2                                                   /*!< MCG_C1: IREFS Position                  */
#define MCG_C1_FRDIV_MASK                        (0x07UL << MCG_C1_FRDIV_SHIFT)                      /*!< MCG_C1: FRDIV Mask                      */
#define MCG_C1_FRDIV_SHIFT                       3                                                   /*!< MCG_C1: FRDIV Position                  */
#define MCG_C1_FRDIV(x)                          (((uint8_t)(((uint8_t)(x))<<MCG_C1_FRDIV_SHIFT))&MCG_C1_FRDIV_MASK) /*!< MCG_C1                                  */
#define MCG_C1_CLKS_MASK                         (0x03UL << MCG_C1_CLKS_SHIFT)                       /*!< MCG_C1: CLKS Mask                       */
#define MCG_C1_CLKS_SHIFT                        6                                                   /*!< MCG_C1: CLKS Position                   */
#define MCG_C1_CLKS(x)                           (((uint8_t)(((uint8_t)(x))<<MCG_C1_CLKS_SHIFT))&MCG_C1_CLKS_MASK) /*!< MCG_C1                                  */
/* ------- C2 Bit Fields                            ------ */
#define MCG_C2_IRCS_MASK                         (0x01UL << MCG_C2_IRCS_SHIFT)                       /*!< MCG_C2: IRCS Mask                       */
#define MCG_C2_IRCS_SHIFT                        0                                                   /*!< MCG_C2: IRCS Position                   */
#define MCG_C2_LP_MASK                           (0x01UL << MCG_C2_LP_SHIFT)                         /*!< MCG_C2: LP Mask                         */
#define MCG_C2_LP_SHIFT                          1                                                   /*!< MCG_C2: LP Position                     */
#define MCG_C2_EREFS0_MASK                       (0x01UL << MCG_C2_EREFS0_SHIFT)                     /*!< MCG_C2: EREFS0 Mask                     */
#define MCG_C2_EREFS0_SHIFT                      2                                                   /*!< MCG_C2: EREFS0 Position                 */
#define MCG_C2_HGO0_MASK                         (0x01UL << MCG_C2_HGO0_SHIFT)                       /*!< MCG_C2: HGO0 Mask                       */
#define MCG_C2_HGO0_SHIFT                        3                                                   /*!< MCG_C2: HGO0 Position                   */
#define MCG_C2_RANGE0_MASK                       (0x03UL << MCG_C2_RANGE0_SHIFT)                     /*!< MCG_C2: RANGE0 Mask                     */
#define MCG_C2_RANGE0_SHIFT                      4                                                   /*!< MCG_C2: RANGE0 Position                 */
#define MCG_C2_RANGE0(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_C2_RANGE0_SHIFT))&MCG_C2_RANGE0_MASK) /*!< MCG_C2                                  */
#define MCG_C2_FCFTRIM_MASK                      (0x01UL << MCG_C2_FCFTRIM_SHIFT)                    /*!< MCG_C2: FCFTRIM Mask                    */
#define MCG_C2_FCFTRIM_SHIFT                     6                                                   /*!< MCG_C2: FCFTRIM Position                */
#define MCG_C2_LOCRE0_MASK                       (0x01UL << MCG_C2_LOCRE0_SHIFT)                     /*!< MCG_C2: LOCRE0 Mask                     */
#define MCG_C2_LOCRE0_SHIFT                      7                                                   /*!< MCG_C2: LOCRE0 Position                 */
/* ------- C3 Bit Fields                            ------ */
#define MCG_C3_SCTRIM_MASK                       (0xFFUL << MCG_C3_SCTRIM_SHIFT)                     /*!< MCG_C3: SCTRIM Mask                     */
#define MCG_C3_SCTRIM_SHIFT                      0                                                   /*!< MCG_C3: SCTRIM Position                 */
#define MCG_C3_SCTRIM(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_C3_SCTRIM_SHIFT))&MCG_C3_SCTRIM_MASK) /*!< MCG_C3                                  */
/* ------- C4 Bit Fields                            ------ */
#define MCG_C4_SCFTRIM_MASK                      (0x01UL << MCG_C4_SCFTRIM_SHIFT)                    /*!< MCG_C4: SCFTRIM Mask                    */
#define MCG_C4_SCFTRIM_SHIFT                     0                                                   /*!< MCG_C4: SCFTRIM Position                */
#define MCG_C4_FCTRIM_MASK                       (0x0FUL << MCG_C4_FCTRIM_SHIFT)                     /*!< MCG_C4: FCTRIM Mask                     */
#define MCG_C4_FCTRIM_SHIFT                      1                                                   /*!< MCG_C4: FCTRIM Position                 */
#define MCG_C4_FCTRIM(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_C4_FCTRIM_SHIFT))&MCG_C4_FCTRIM_MASK) /*!< MCG_C4                                  */
#define MCG_C4_DRST_DRS_MASK                     (0x03UL << MCG_C4_DRST_DRS_SHIFT)                   /*!< MCG_C4: DRST_DRS Mask                   */
#define MCG_C4_DRST_DRS_SHIFT                    5                                                   /*!< MCG_C4: DRST_DRS Position               */
#define MCG_C4_DRST_DRS(x)                       (((uint8_t)(((uint8_t)(x))<<MCG_C4_DRST_DRS_SHIFT))&MCG_C4_DRST_DRS_MASK) /*!< MCG_C4                                  */
#define MCG_C4_DMX32_MASK                        (0x01UL << MCG_C4_DMX32_SHIFT)                      /*!< MCG_C4: DMX32 Mask                      */
#define MCG_C4_DMX32_SHIFT                       7                                                   /*!< MCG_C4: DMX32 Position                  */
/* ------- C5 Bit Fields                            ------ */
#define MCG_C5_PRDIV0_MASK                       (0x1FUL << MCG_C5_PRDIV0_SHIFT)                     /*!< MCG_C5: PRDIV0 Mask                     */
#define MCG_C5_PRDIV0_SHIFT                      0                                                   /*!< MCG_C5: PRDIV0 Position                 */
#define MCG_C5_PRDIV0(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_C5_PRDIV0_SHIFT))&MCG_C5_PRDIV0_MASK) /*!< MCG_C5                                  */
#define MCG_C5_PLLSTEN0_MASK                     (0x01UL << MCG_C5_PLLSTEN0_SHIFT)                   /*!< MCG_C5: PLLSTEN0 Mask                   */
#define MCG_C5_PLLSTEN0_SHIFT                    5                                                   /*!< MCG_C5: PLLSTEN0 Position               */
#define MCG_C5_PLLCLKEN0_MASK                    (0x01UL << MCG_C5_PLLCLKEN0_SHIFT)                  /*!< MCG_C5: PLLCLKEN0 Mask                  */
#define MCG_C5_PLLCLKEN0_SHIFT                   6                                                   /*!< MCG_C5: PLLCLKEN0 Position              */
/* ------- C6 Bit Fields                            ------ */
#define MCG_C6_VDIV0_MASK                        (0x1FUL << MCG_C6_VDIV0_SHIFT)                      /*!< MCG_C6: VDIV0 Mask                      */
#define MCG_C6_VDIV0_SHIFT                       0                                                   /*!< MCG_C6: VDIV0 Position                  */
#define MCG_C6_VDIV0(x)                          (((uint8_t)(((uint8_t)(x))<<MCG_C6_VDIV0_SHIFT))&MCG_C6_VDIV0_MASK) /*!< MCG_C6                                  */
#define MCG_C6_CME0_MASK                         (0x01UL << MCG_C6_CME0_SHIFT)                       /*!< MCG_C6: CME0 Mask                       */
#define MCG_C6_CME0_SHIFT                        5                                                   /*!< MCG_C6: CME0 Position                   */
#define MCG_C6_PLLS_MASK                         (0x01UL << MCG_C6_PLLS_SHIFT)                       /*!< MCG_C6: PLLS Mask                       */
#define MCG_C6_PLLS_SHIFT                        6                                                   /*!< MCG_C6: PLLS Position                   */
#define MCG_C6_LOLIE0_MASK                       (0x01UL << MCG_C6_LOLIE0_SHIFT)                     /*!< MCG_C6: LOLIE0 Mask                     */
#define MCG_C6_LOLIE0_SHIFT                      7                                                   /*!< MCG_C6: LOLIE0 Position                 */
/* ------- S Bit Fields                             ------ */
#define MCG_S_IRCST_MASK                         (0x01UL << MCG_S_IRCST_SHIFT)                       /*!< MCG_S: IRCST Mask                       */
#define MCG_S_IRCST_SHIFT                        0                                                   /*!< MCG_S: IRCST Position                   */
#define MCG_S_OSCINIT0_MASK                      (0x01UL << MCG_S_OSCINIT0_SHIFT)                    /*!< MCG_S: OSCINIT0 Mask                    */
#define MCG_S_OSCINIT0_SHIFT                     1                                                   /*!< MCG_S: OSCINIT0 Position                */
#define MCG_S_CLKST_MASK                         (0x03UL << MCG_S_CLKST_SHIFT)                       /*!< MCG_S: CLKST Mask                       */
#define MCG_S_CLKST_SHIFT                        2                                                   /*!< MCG_S: CLKST Position                   */
#define MCG_S_CLKST(x)                           (((uint8_t)(((uint8_t)(x))<<MCG_S_CLKST_SHIFT))&MCG_S_CLKST_MASK) /*!< MCG_S                                   */
#define MCG_S_IREFST_MASK                        (0x01UL << MCG_S_IREFST_SHIFT)                      /*!< MCG_S: IREFST Mask                      */
#define MCG_S_IREFST_SHIFT                       4                                                   /*!< MCG_S: IREFST Position                  */
#define MCG_S_PLLST_MASK                         (0x01UL << MCG_S_PLLST_SHIFT)                       /*!< MCG_S: PLLST Mask                       */
#define MCG_S_PLLST_SHIFT                        5                                                   /*!< MCG_S: PLLST Position                   */
#define MCG_S_LOCK0_MASK                         (0x01UL << MCG_S_LOCK0_SHIFT)                       /*!< MCG_S: LOCK0 Mask                       */
#define MCG_S_LOCK0_SHIFT                        6                                                   /*!< MCG_S: LOCK0 Position                   */
#define MCG_S_LOLS0_MASK                         (0x01UL << MCG_S_LOLS0_SHIFT)                       /*!< MCG_S: LOLS0 Mask                       */
#define MCG_S_LOLS0_SHIFT                        7                                                   /*!< MCG_S: LOLS0 Position                   */
/* ------- SC Bit Fields                            ------ */
#define MCG_SC_LOCS0_MASK                        (0x01UL << MCG_SC_LOCS0_SHIFT)                      /*!< MCG_SC: LOCS0 Mask                      */
#define MCG_SC_LOCS0_SHIFT                       0                                                   /*!< MCG_SC: LOCS0 Position                  */
#define MCG_SC_FCRDIV_MASK                       (0x07UL << MCG_SC_FCRDIV_SHIFT)                     /*!< MCG_SC: FCRDIV Mask                     */
#define MCG_SC_FCRDIV_SHIFT                      1                                                   /*!< MCG_SC: FCRDIV Position                 */
#define MCG_SC_FCRDIV(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_SC_FCRDIV_SHIFT))&MCG_SC_FCRDIV_MASK) /*!< MCG_SC                                  */
#define MCG_SC_FLTPRSRV_MASK                     (0x01UL << MCG_SC_FLTPRSRV_SHIFT)                   /*!< MCG_SC: FLTPRSRV Mask                   */
#define MCG_SC_FLTPRSRV_SHIFT                    4                                                   /*!< MCG_SC: FLTPRSRV Position               */
#define MCG_SC_ATMF_MASK                         (0x01UL << MCG_SC_ATMF_SHIFT)                       /*!< MCG_SC: ATMF Mask                       */
#define MCG_SC_ATMF_SHIFT                        5                                                   /*!< MCG_SC: ATMF Position                   */
#define MCG_SC_ATMS_MASK                         (0x01UL << MCG_SC_ATMS_SHIFT)                       /*!< MCG_SC: ATMS Mask                       */
#define MCG_SC_ATMS_SHIFT                        6                                                   /*!< MCG_SC: ATMS Position                   */
#define MCG_SC_ATME_MASK                         (0x01UL << MCG_SC_ATME_SHIFT)                       /*!< MCG_SC: ATME Mask                       */
#define MCG_SC_ATME_SHIFT                        7                                                   /*!< MCG_SC: ATME Position                   */
/* ------- ATCVH Bit Fields                         ------ */
#define MCG_ATCVH_ATCVH_MASK                     (0xFFUL << MCG_ATCVH_ATCVH_SHIFT)                   /*!< MCG_ATCVH: ATCVH Mask                   */
#define MCG_ATCVH_ATCVH_SHIFT                    0                                                   /*!< MCG_ATCVH: ATCVH Position               */
#define MCG_ATCVH_ATCVH(x)                       (((uint8_t)(((uint8_t)(x))<<MCG_ATCVH_ATCVH_SHIFT))&MCG_ATCVH_ATCVH_MASK) /*!< MCG_ATCVH                               */
/* ------- ATCVL Bit Fields                         ------ */
#define MCG_ATCVL_ATCVL_MASK                     (0xFFUL << MCG_ATCVL_ATCVL_SHIFT)                   /*!< MCG_ATCVL: ATCVL Mask                   */
#define MCG_ATCVL_ATCVL_SHIFT                    0                                                   /*!< MCG_ATCVL: ATCVL Position               */
#define MCG_ATCVL_ATCVL(x)                       (((uint8_t)(((uint8_t)(x))<<MCG_ATCVL_ATCVL_SHIFT))&MCG_ATCVL_ATCVL_MASK) /*!< MCG_ATCVL                               */
/* ------- C7 Bit Fields                            ------ */
#define MCG_C7_OSCSEL_MASK                       (0x03UL << MCG_C7_OSCSEL_SHIFT)                     /*!< MCG_C7: OSCSEL Mask                     */
#define MCG_C7_OSCSEL_SHIFT                      0                                                   /*!< MCG_C7: OSCSEL Position                 */
#define MCG_C7_OSCSEL(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_C7_OSCSEL_SHIFT))&MCG_C7_OSCSEL_MASK) /*!< MCG_C7                                  */
/* ------- C8 Bit Fields                            ------ */
#define MCG_C8_LOCS1_MASK                        (0x01UL << MCG_C8_LOCS1_SHIFT)                      /*!< MCG_C8: LOCS1 Mask                      */
#define MCG_C8_LOCS1_SHIFT                       0                                                   /*!< MCG_C8: LOCS1 Position                  */
#define MCG_C8_CME1_MASK                         (0x01UL << MCG_C8_CME1_SHIFT)                       /*!< MCG_C8: CME1 Mask                       */
#define MCG_C8_CME1_SHIFT                        5                                                   /*!< MCG_C8: CME1 Position                   */
#define MCG_C8_LOLRE_MASK                        (0x01UL << MCG_C8_LOLRE_SHIFT)                      /*!< MCG_C8: LOLRE Mask                      */
#define MCG_C8_LOLRE_SHIFT                       6                                                   /*!< MCG_C8: LOLRE Position                  */
#define MCG_C8_LOCRE1_MASK                       (0x01UL << MCG_C8_LOCRE1_SHIFT)                     /*!< MCG_C8: LOCRE1 Mask                     */
#define MCG_C8_LOCRE1_SHIFT                      7                                                   /*!< MCG_C8: LOCRE1 Position                 */

/* MCG - Peripheral instance base addresses */
#define MCG_BasePtr                    0x40064000UL
#define MCG                            ((MCG_Type *) MCG_BasePtr)
#define MCG_BASE_PTR                   (MCG)

/* ================================================================================ */
/* ================           MCM (file:MCM_MK22F512)              ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module
 */
typedef struct {                                /*!<       MCM Structure                                                */
   __I  uint32_t  RESERVED0[2];                 /*!< 0000:                                                              */
   __I  uint16_t  PLASC;                        /*!< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /*!< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /*!< 000C: Platform Control Register                                    */
   __IO uint32_t  ISCR;                         /*!< 0010: Interrupt Status and Control Register                        */
   __I  uint32_t  RESERVED1[11];                /*!< 0014:                                                              */
   __IO uint32_t  CPO;                          /*!< 0040: Compute Operation Control Register                           */
} MCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PLASC Bit Fields                         ------ */
#define MCM_PLASC_ASC_MASK                       (0xFFUL << MCM_PLASC_ASC_SHIFT)                     /*!< MCM_PLASC: ASC Mask                     */
#define MCM_PLASC_ASC_SHIFT                      0                                                   /*!< MCM_PLASC: ASC Position                 */
#define MCM_PLASC_ASC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLASC_ASC_SHIFT))&MCM_PLASC_ASC_MASK) /*!< MCM_PLASC                               */
/* ------- PLAMC Bit Fields                         ------ */
#define MCM_PLAMC_AMC_MASK                       (0xFFUL << MCM_PLAMC_AMC_SHIFT)                     /*!< MCM_PLAMC: AMC Mask                     */
#define MCM_PLAMC_AMC_SHIFT                      0                                                   /*!< MCM_PLAMC: AMC Position                 */
#define MCM_PLAMC_AMC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLAMC_AMC_SHIFT))&MCM_PLAMC_AMC_MASK) /*!< MCM_PLAMC                               */
/* ------- PLACR Bit Fields                         ------ */
#define MCM_PLACR_ARB_MASK                       (0x01UL << MCM_PLACR_ARB_SHIFT)                     /*!< MCM_PLACR: ARB Mask                     */
#define MCM_PLACR_ARB_SHIFT                      9                                                   /*!< MCM_PLACR: ARB Position                 */
/* ------- ISCR Bit Fields                          ------ */
#define MCM_ISCR_FIOC_MASK                       (0x01UL << MCM_ISCR_FIOC_SHIFT)                     /*!< MCM_ISCR: FIOC Mask                     */
#define MCM_ISCR_FIOC_SHIFT                      8                                                   /*!< MCM_ISCR: FIOC Position                 */
#define MCM_ISCR_FDZC_MASK                       (0x01UL << MCM_ISCR_FDZC_SHIFT)                     /*!< MCM_ISCR: FDZC Mask                     */
#define MCM_ISCR_FDZC_SHIFT                      9                                                   /*!< MCM_ISCR: FDZC Position                 */
#define MCM_ISCR_FOFC_MASK                       (0x01UL << MCM_ISCR_FOFC_SHIFT)                     /*!< MCM_ISCR: FOFC Mask                     */
#define MCM_ISCR_FOFC_SHIFT                      10                                                  /*!< MCM_ISCR: FOFC Position                 */
#define MCM_ISCR_FUFC_MASK                       (0x01UL << MCM_ISCR_FUFC_SHIFT)                     /*!< MCM_ISCR: FUFC Mask                     */
#define MCM_ISCR_FUFC_SHIFT                      11                                                  /*!< MCM_ISCR: FUFC Position                 */
#define MCM_ISCR_FIXC_MASK                       (0x01UL << MCM_ISCR_FIXC_SHIFT)                     /*!< MCM_ISCR: FIXC Mask                     */
#define MCM_ISCR_FIXC_SHIFT                      12                                                  /*!< MCM_ISCR: FIXC Position                 */
#define MCM_ISCR_FIDC_MASK                       (0x01UL << MCM_ISCR_FIDC_SHIFT)                     /*!< MCM_ISCR: FIDC Mask                     */
#define MCM_ISCR_FIDC_SHIFT                      15                                                  /*!< MCM_ISCR: FIDC Position                 */
#define MCM_ISCR_FIOCE_MASK                      (0x01UL << MCM_ISCR_FIOCE_SHIFT)                    /*!< MCM_ISCR: FIOCE Mask                    */
#define MCM_ISCR_FIOCE_SHIFT                     24                                                  /*!< MCM_ISCR: FIOCE Position                */
#define MCM_ISCR_FDZCE_MASK                      (0x01UL << MCM_ISCR_FDZCE_SHIFT)                    /*!< MCM_ISCR: FDZCE Mask                    */
#define MCM_ISCR_FDZCE_SHIFT                     25                                                  /*!< MCM_ISCR: FDZCE Position                */
#define MCM_ISCR_FOFCE_MASK                      (0x01UL << MCM_ISCR_FOFCE_SHIFT)                    /*!< MCM_ISCR: FOFCE Mask                    */
#define MCM_ISCR_FOFCE_SHIFT                     26                                                  /*!< MCM_ISCR: FOFCE Position                */
#define MCM_ISCR_FUFCE_MASK                      (0x01UL << MCM_ISCR_FUFCE_SHIFT)                    /*!< MCM_ISCR: FUFCE Mask                    */
#define MCM_ISCR_FUFCE_SHIFT                     27                                                  /*!< MCM_ISCR: FUFCE Position                */
#define MCM_ISCR_FIXCE_MASK                      (0x01UL << MCM_ISCR_FIXCE_SHIFT)                    /*!< MCM_ISCR: FIXCE Mask                    */
#define MCM_ISCR_FIXCE_SHIFT                     28                                                  /*!< MCM_ISCR: FIXCE Position                */
#define MCM_ISCR_FIDCE_MASK                      (0x01UL << MCM_ISCR_FIDCE_SHIFT)                    /*!< MCM_ISCR: FIDCE Mask                    */
#define MCM_ISCR_FIDCE_SHIFT                     31                                                  /*!< MCM_ISCR: FIDCE Position                */
/* ------- CPO Bit Fields                           ------ */
#define MCM_CPO_CPOREQ_MASK                      (0x01UL << MCM_CPO_CPOREQ_SHIFT)                    /*!< MCM_CPO: CPOREQ Mask                    */
#define MCM_CPO_CPOREQ_SHIFT                     0                                                   /*!< MCM_CPO: CPOREQ Position                */
#define MCM_CPO_CPOACK_MASK                      (0x01UL << MCM_CPO_CPOACK_SHIFT)                    /*!< MCM_CPO: CPOACK Mask                    */
#define MCM_CPO_CPOACK_SHIFT                     1                                                   /*!< MCM_CPO: CPOACK Position                */
#define MCM_CPO_CPOWOI_MASK                      (0x01UL << MCM_CPO_CPOWOI_SHIFT)                    /*!< MCM_CPO: CPOWOI Mask                    */
#define MCM_CPO_CPOWOI_SHIFT                     2                                                   /*!< MCM_CPO: CPOWOI Position                */

/* MCM - Peripheral instance base addresses */
#define MCM_BasePtr                    0xE0080000UL
#define MCM                            ((MCM_Type *) MCM_BasePtr)
#define MCM_BASE_PTR                   (MCM)

/* ================================================================================ */
/* ================           NV (file:NV_FTFE)                    ================ */
/* ================================================================================ */

/**
 * @brief Flash configuration field
 */
typedef struct {                                /*!<       NV Structure                                                 */
   __I  uint8_t   BACKKEY3;                     /*!< 0000: Backdoor Comparison Key 3                                    */
   __I  uint8_t   BACKKEY2;                     /*!< 0001: Backdoor Comparison Key 2                                    */
   __I  uint8_t   BACKKEY1;                     /*!< 0002: Backdoor Comparison Key 1                                    */
   __I  uint8_t   BACKKEY0;                     /*!< 0003: Backdoor Comparison Key 0                                    */
   __I  uint8_t   BACKKEY7;                     /*!< 0004: Backdoor Comparison Key 7                                    */
   __I  uint8_t   BACKKEY6;                     /*!< 0005: Backdoor Comparison Key 6                                    */
   __I  uint8_t   BACKKEY5;                     /*!< 0006: Backdoor Comparison Key 5                                    */
   __I  uint8_t   BACKKEY4;                     /*!< 0007: Backdoor Comparison Key 4                                    */
   __I  uint8_t   FPROT3;                       /*!< 0008: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT2;                       /*!< 0009: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT1;                       /*!< 000A: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT0;                       /*!< 000B: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FSEC;                         /*!< 000C: Non-volatile Flash Security Register                         */
   __I  uint8_t   FOPT;                         /*!< 000D: Non-volatile Flash Option Register                           */
   __I  uint8_t   FEPROT;                       /*!< 000E: Non-volatile EERAM Protection Register                       */
   __I  uint8_t   FDPROT;                       /*!< 000F: Non-volatile D-Flash Protection Register                     */
} NV_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- BACKKEY Bit Fields                       ------ */
#define NV_BACKKEY_KEY_MASK                      (0xFFUL << NV_BACKKEY_KEY_SHIFT)                    /*!< NV_BACKKEY: KEY Mask                    */
#define NV_BACKKEY_KEY_SHIFT                     0                                                   /*!< NV_BACKKEY: KEY Position                */
#define NV_BACKKEY_KEY(x)                        (((uint8_t)(((uint8_t)(x))<<NV_BACKKEY_KEY_SHIFT))&NV_BACKKEY_KEY_MASK) /*!< NV_BACKKEY                              */
/* ------- FPROT Bit Fields                         ------ */
#define NV_FPROT_PROT_MASK                       (0xFFUL << NV_FPROT_PROT_SHIFT)                     /*!< NV_FPROT: PROT Mask                     */
#define NV_FPROT_PROT_SHIFT                      0                                                   /*!< NV_FPROT: PROT Position                 */
#define NV_FPROT_PROT(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FPROT_PROT_SHIFT))&NV_FPROT_PROT_MASK) /*!< NV_FPROT                                */
/* ------- FSEC Bit Fields                          ------ */
#define NV_FSEC_SEC_MASK                         (0x03UL << NV_FSEC_SEC_SHIFT)                       /*!< NV_FSEC: SEC Mask                       */
#define NV_FSEC_SEC_SHIFT                        0                                                   /*!< NV_FSEC: SEC Position                   */
#define NV_FSEC_SEC(x)                           (((uint8_t)(((uint8_t)(x))<<NV_FSEC_SEC_SHIFT))&NV_FSEC_SEC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_FSLACC_MASK                      (0x03UL << NV_FSEC_FSLACC_SHIFT)                    /*!< NV_FSEC: FSLACC Mask                    */
#define NV_FSEC_FSLACC_SHIFT                     2                                                   /*!< NV_FSEC: FSLACC Position                */
#define NV_FSEC_FSLACC(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FSEC_FSLACC_SHIFT))&NV_FSEC_FSLACC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_MEEN_MASK                        (0x03UL << NV_FSEC_MEEN_SHIFT)                      /*!< NV_FSEC: MEEN Mask                      */
#define NV_FSEC_MEEN_SHIFT                       4                                                   /*!< NV_FSEC: MEEN Position                  */
#define NV_FSEC_MEEN(x)                          (((uint8_t)(((uint8_t)(x))<<NV_FSEC_MEEN_SHIFT))&NV_FSEC_MEEN_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_KEYEN_MASK                       (0x03UL << NV_FSEC_KEYEN_SHIFT)                     /*!< NV_FSEC: KEYEN Mask                     */
#define NV_FSEC_KEYEN_SHIFT                      6                                                   /*!< NV_FSEC: KEYEN Position                 */
#define NV_FSEC_KEYEN(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FSEC_KEYEN_SHIFT))&NV_FSEC_KEYEN_MASK) /*!< NV_FSEC                                 */
/* ------- FOPT Bit Fields                          ------ */
#define NV_FOPT_LPBOOT_MASK                      (0x01UL << NV_FOPT_LPBOOT_SHIFT)                    /*!< NV_FOPT: LPBOOT Mask                    */
#define NV_FOPT_LPBOOT_SHIFT                     0                                                   /*!< NV_FOPT: LPBOOT Position                */
#define NV_FOPT_EZPORT_DIS_MASK                  (0x01UL << NV_FOPT_EZPORT_DIS_SHIFT)                /*!< NV_FOPT: EZPORT_DIS Mask                */
#define NV_FOPT_EZPORT_DIS_SHIFT                 1                                                   /*!< NV_FOPT: EZPORT_DIS Position            */
#define NV_FOPT_NMI_DIS_MASK                     (0x01UL << NV_FOPT_NMI_DIS_SHIFT)                   /*!< NV_FOPT: NMI_DIS Mask                   */
#define NV_FOPT_NMI_DIS_SHIFT                    2                                                   /*!< NV_FOPT: NMI_DIS Position               */
/* ------- FEPROT Bit Fields                        ------ */
#define NV_FEPROT_EPROT_MASK                     (0xFFUL << NV_FEPROT_EPROT_SHIFT)                   /*!< NV_FEPROT: EPROT Mask                   */
#define NV_FEPROT_EPROT_SHIFT                    0                                                   /*!< NV_FEPROT: EPROT Position               */
#define NV_FEPROT_EPROT(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FEPROT_EPROT_SHIFT))&NV_FEPROT_EPROT_MASK) /*!< NV_FEPROT                               */
/* ------- FDPROT Bit Fields                        ------ */
#define NV_FDPROT_DPROT_MASK                     (0xFFUL << NV_FDPROT_DPROT_SHIFT)                   /*!< NV_FDPROT: DPROT Mask                   */
#define NV_FDPROT_DPROT_SHIFT                    0                                                   /*!< NV_FDPROT: DPROT Position               */
#define NV_FDPROT_DPROT(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FDPROT_DPROT_SHIFT))&NV_FDPROT_DPROT_MASK) /*!< NV_FDPROT                               */

/* NV - Peripheral instance base addresses */
#define NV_BasePtr                     0x00000400UL
#define NV                             ((NV_Type *) NV_BasePtr)
#define NV_BASE_PTR                    (NV)

/* ================================================================================ */
/* ================           OSC0 (file:OSC_0)                    ================ */
/* ================================================================================ */

/**
 * @brief System Oscillator
 */
typedef struct {                                /*!<       OSC0 Structure                                               */
   __IO uint8_t   CR;                           /*!< 0000: Control Register                                             */
} OSC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'OSC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CR Bit Fields                            ------ */
#define OSC_CR_SC16P_MASK                        (0x01UL << OSC_CR_SC16P_SHIFT)                      /*!< OSC0_CR: SC16P Mask                     */
#define OSC_CR_SC16P_SHIFT                       0                                                   /*!< OSC0_CR: SC16P Position                 */
#define OSC_CR_SC8P_MASK                         (0x01UL << OSC_CR_SC8P_SHIFT)                       /*!< OSC0_CR: SC8P Mask                      */
#define OSC_CR_SC8P_SHIFT                        1                                                   /*!< OSC0_CR: SC8P Position                  */
#define OSC_CR_SC4P_MASK                         (0x01UL << OSC_CR_SC4P_SHIFT)                       /*!< OSC0_CR: SC4P Mask                      */
#define OSC_CR_SC4P_SHIFT                        2                                                   /*!< OSC0_CR: SC4P Position                  */
#define OSC_CR_SC2P_MASK                         (0x01UL << OSC_CR_SC2P_SHIFT)                       /*!< OSC0_CR: SC2P Mask                      */
#define OSC_CR_SC2P_SHIFT                        3                                                   /*!< OSC0_CR: SC2P Position                  */
#define OSC_CR_EREFSTEN_MASK                     (0x01UL << OSC_CR_EREFSTEN_SHIFT)                   /*!< OSC0_CR: EREFSTEN Mask                  */
#define OSC_CR_EREFSTEN_SHIFT                    5                                                   /*!< OSC0_CR: EREFSTEN Position              */
#define OSC_CR_ERCLKEN_MASK                      (0x01UL << OSC_CR_ERCLKEN_SHIFT)                    /*!< OSC0_CR: ERCLKEN Mask                   */
#define OSC_CR_ERCLKEN_SHIFT                     7                                                   /*!< OSC0_CR: ERCLKEN Position               */

/* OSC0 - Peripheral instance base addresses */
#define OSC0_BasePtr                   0x40065000UL
#define OSC0                           ((OSC0_Type *) OSC0_BasePtr)
#define OSC0_BASE_PTR                  (OSC0)

/* ================================================================================ */
/* ================           PDB0 (file:PDB0_2CH_2TRIG_2PO)       ================ */
/* ================================================================================ */

/**
 * @brief Programmable Delay Block (2 channels, 2 triggers, 2 pulse outputs)
 */
typedef struct {                                /*!<       PDB0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control Register                                  */
   __IO uint32_t  MOD;                          /*!< 0004: Modulus Register                                             */
   __I  uint32_t  CNT;                          /*!< 0008: Counter Register                                             */
   __IO uint32_t  IDLY;                         /*!< 000C: Interrupt Delay Register                                     */
   struct { /* (cluster) */                     /*!< 0010: (size=0x0050, 80)                                            */
      __IO uint32_t  C1;                        /*!< 0010: Channel  Control Register 1                                  */
      __IO uint32_t  S;                         /*!< 0014: Channel  Status Register                                     */
      __IO uint32_t  DLY[2];                    /*!< 0018: Channel n Delay  Register                                    */
      __I  uint32_t  RESERVED0[6];              /*!< 0020:                                                              */
   } CH[2];
   __I  uint32_t  RESERVED0[60];                /*!< 0060:                                                              */
   struct { /* (cluster) */                     /*!< 0150: (size=0x0010, 16)                                            */
      __IO uint32_t  INTC;                      /*!< 0150: DAC Interval Trigger n Control Register                      */
      __IO uint32_t  INT;                       /*!< 0154: DAC Interval n Register                                      */
   } DAC[2];
   __I  uint32_t  RESERVED1[12];                /*!< 0160:                                                              */
   __IO uint32_t  POEN;                         /*!< 0190: Pulse-Out Enable Register                                    */
   __IO uint32_t  PODLY[2];                     /*!< 0194: Pulse-Out  Delay Register                                    */
} PDB0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PDB0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC Bit Fields                            ------ */
#define PDB_SC_LDOK_MASK                         (0x01UL << PDB_SC_LDOK_SHIFT)                       /*!< PDB0_SC: LDOK Mask                      */
#define PDB_SC_LDOK_SHIFT                        0                                                   /*!< PDB0_SC: LDOK Position                  */
#define PDB_SC_CONT_MASK                         (0x01UL << PDB_SC_CONT_SHIFT)                       /*!< PDB0_SC: CONT Mask                      */
#define PDB_SC_CONT_SHIFT                        1                                                   /*!< PDB0_SC: CONT Position                  */
#define PDB_SC_MULT_MASK                         (0x03UL << PDB_SC_MULT_SHIFT)                       /*!< PDB0_SC: MULT Mask                      */
#define PDB_SC_MULT_SHIFT                        2                                                   /*!< PDB0_SC: MULT Position                  */
#define PDB_SC_MULT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_MULT_SHIFT))&PDB_SC_MULT_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PDBIE_MASK                        (0x01UL << PDB_SC_PDBIE_SHIFT)                      /*!< PDB0_SC: PDBIE Mask                     */
#define PDB_SC_PDBIE_SHIFT                       5                                                   /*!< PDB0_SC: PDBIE Position                 */
#define PDB_SC_PDBIF_MASK                        (0x01UL << PDB_SC_PDBIF_SHIFT)                      /*!< PDB0_SC: PDBIF Mask                     */
#define PDB_SC_PDBIF_SHIFT                       6                                                   /*!< PDB0_SC: PDBIF Position                 */
#define PDB_SC_PDBEN_MASK                        (0x01UL << PDB_SC_PDBEN_SHIFT)                      /*!< PDB0_SC: PDBEN Mask                     */
#define PDB_SC_PDBEN_SHIFT                       7                                                   /*!< PDB0_SC: PDBEN Position                 */
#define PDB_SC_TRGSEL_MASK                       (0x0FUL << PDB_SC_TRGSEL_SHIFT)                     /*!< PDB0_SC: TRGSEL Mask                    */
#define PDB_SC_TRGSEL_SHIFT                      8                                                   /*!< PDB0_SC: TRGSEL Position                */
#define PDB_SC_TRGSEL(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_TRGSEL_SHIFT))&PDB_SC_TRGSEL_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_PRESCALER_MASK                    (0x07UL << PDB_SC_PRESCALER_SHIFT)                  /*!< PDB0_SC: PRESCALER Mask                 */
#define PDB_SC_PRESCALER_SHIFT                   12                                                  /*!< PDB0_SC: PRESCALER Position             */
#define PDB_SC_PRESCALER(x)                      (((uint32_t)(((uint32_t)(x))<<PDB_SC_PRESCALER_SHIFT))&PDB_SC_PRESCALER_MASK) /*!< PDB0_SC                                 */
#define PDB_SC_DMAEN_MASK                        (0x01UL << PDB_SC_DMAEN_SHIFT)                      /*!< PDB0_SC: DMAEN Mask                     */
#define PDB_SC_DMAEN_SHIFT                       15                                                  /*!< PDB0_SC: DMAEN Position                 */
#define PDB_SC_SWTRIG_MASK                       (0x01UL << PDB_SC_SWTRIG_SHIFT)                     /*!< PDB0_SC: SWTRIG Mask                    */
#define PDB_SC_SWTRIG_SHIFT                      16                                                  /*!< PDB0_SC: SWTRIG Position                */
#define PDB_SC_PDBEIE_MASK                       (0x01UL << PDB_SC_PDBEIE_SHIFT)                     /*!< PDB0_SC: PDBEIE Mask                    */
#define PDB_SC_PDBEIE_SHIFT                      17                                                  /*!< PDB0_SC: PDBEIE Position                */
#define PDB_SC_LDMOD_MASK                        (0x03UL << PDB_SC_LDMOD_SHIFT)                      /*!< PDB0_SC: LDMOD Mask                     */
#define PDB_SC_LDMOD_SHIFT                       18                                                  /*!< PDB0_SC: LDMOD Position                 */
#define PDB_SC_LDMOD(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_LDMOD_SHIFT))&PDB_SC_LDMOD_MASK) /*!< PDB0_SC                                 */
/* ------- MOD Bit Fields                           ------ */
#define PDB_MOD_MOD_MASK                         (0xFFFFUL << PDB_MOD_MOD_SHIFT)                     /*!< PDB0_MOD: MOD Mask                      */
#define PDB_MOD_MOD_SHIFT                        0                                                   /*!< PDB0_MOD: MOD Position                  */
#define PDB_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_MOD_MOD_SHIFT))&PDB_MOD_MOD_MASK) /*!< PDB0_MOD                                */
/* ------- CNT Bit Fields                           ------ */
#define PDB_CNT_CNT_MASK                         (0xFFFFUL << PDB_CNT_CNT_SHIFT)                     /*!< PDB0_CNT: CNT Mask                      */
#define PDB_CNT_CNT_SHIFT                        0                                                   /*!< PDB0_CNT: CNT Position                  */
#define PDB_CNT_CNT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_CNT_CNT_SHIFT))&PDB_CNT_CNT_MASK) /*!< PDB0_CNT                                */
/* ------- IDLY Bit Fields                          ------ */
#define PDB_IDLY_IDLY_MASK                       (0xFFFFUL << PDB_IDLY_IDLY_SHIFT)                   /*!< PDB0_IDLY: IDLY Mask                    */
#define PDB_IDLY_IDLY_SHIFT                      0                                                   /*!< PDB0_IDLY: IDLY Position                */
#define PDB_IDLY_IDLY(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_IDLY_IDLY_SHIFT))&PDB_IDLY_IDLY_MASK) /*!< PDB0_IDLY                               */
/* ------- C1 Bit Fields                            ------ */
#define PDB_C1_EN_MASK                           (0xFFUL << PDB_C1_EN_SHIFT)                         /*!< PDB0_C1: EN Mask                        */
#define PDB_C1_EN_SHIFT                          0                                                   /*!< PDB0_C1: EN Position                    */
#define PDB_C1_EN(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_EN_SHIFT))&PDB_C1_EN_MASK) /*!< PDB0_C1                                 */
#define PDB_C1_TOS_MASK                          (0xFFUL << PDB_C1_TOS_SHIFT)                        /*!< PDB0_C1: TOS Mask                       */
#define PDB_C1_TOS_SHIFT                         8                                                   /*!< PDB0_C1: TOS Position                   */
#define PDB_C1_TOS(x)                            (((uint32_t)(((uint32_t)(x))<<PDB_C1_TOS_SHIFT))&PDB_C1_TOS_MASK) /*!< PDB0_C1                                 */
#define PDB_C1_BB_MASK                           (0xFFUL << PDB_C1_BB_SHIFT)                         /*!< PDB0_C1: BB Mask                        */
#define PDB_C1_BB_SHIFT                          16                                                  /*!< PDB0_C1: BB Position                    */
#define PDB_C1_BB(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_BB_SHIFT))&PDB_C1_BB_MASK) /*!< PDB0_C1                                 */
/* ------- S Bit Fields                             ------ */
#define PDB_S_ERR_MASK                           (0xFFUL << PDB_S_ERR_SHIFT)                         /*!< PDB0_S: ERR Mask                        */
#define PDB_S_ERR_SHIFT                          0                                                   /*!< PDB0_S: ERR Position                    */
#define PDB_S_ERR(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_S_ERR_SHIFT))&PDB_S_ERR_MASK) /*!< PDB0_S                                  */
#define PDB_S_CF_MASK                            (0xFFUL << PDB_S_CF_SHIFT)                          /*!< PDB0_S: CF Mask                         */
#define PDB_S_CF_SHIFT                           16                                                  /*!< PDB0_S: CF Position                     */
#define PDB_S_CF(x)                              (((uint32_t)(((uint32_t)(x))<<PDB_S_CF_SHIFT))&PDB_S_CF_MASK) /*!< PDB0_S                                  */
/* ------- DLY Bit Fields                           ------ */
#define PDB_DLY_DLY_MASK                         (0xFFFFUL << PDB_DLY_DLY_SHIFT)                     /*!< PDB0_DLY: DLY Mask                      */
#define PDB_DLY_DLY_SHIFT                        0                                                   /*!< PDB0_DLY: DLY Position                  */
#define PDB_DLY_DLY(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_DLY_DLY_SHIFT))&PDB_DLY_DLY_MASK) /*!< PDB0_DLY                                */
/* ------- INTC Bit Fields                          ------ */
#define PDB_INTC_TOE_MASK                        (0x01UL << PDB_INTC_TOE_SHIFT)                      /*!< PDB0_INTC: TOE Mask                     */
#define PDB_INTC_TOE_SHIFT                       0                                                   /*!< PDB0_INTC: TOE Position                 */
#define PDB_INTC_EXT_MASK                        (0x01UL << PDB_INTC_EXT_SHIFT)                      /*!< PDB0_INTC: EXT Mask                     */
#define PDB_INTC_EXT_SHIFT                       1                                                   /*!< PDB0_INTC: EXT Position                 */
/* ------- INT Bit Fields                           ------ */
#define PDB_INT_INT_MASK                         (0xFFFFUL << PDB_INT_INT_SHIFT)                     /*!< PDB0_INT: INT Mask                      */
#define PDB_INT_INT_SHIFT                        0                                                   /*!< PDB0_INT: INT Position                  */
#define PDB_INT_INT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_INT_INT_SHIFT))&PDB_INT_INT_MASK) /*!< PDB0_INT                                */
/* ------- POEN Bit Fields                          ------ */
#define PDB_POEN_POEN_MASK                       (0xFFUL << PDB_POEN_POEN_SHIFT)                     /*!< PDB0_POEN: POEN Mask                    */
#define PDB_POEN_POEN_SHIFT                      0                                                   /*!< PDB0_POEN: POEN Position                */
#define PDB_POEN_POEN(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_POEN_POEN_SHIFT))&PDB_POEN_POEN_MASK) /*!< PDB0_POEN                               */
/* ------- PODLY Bit Fields                         ------ */
#define PDB_PODLY_DLY2_MASK                      (0xFFFFUL << PDB_PODLY_DLY2_SHIFT)                  /*!< PDB0_PODLY: DLY2 Mask                   */
#define PDB_PODLY_DLY2_SHIFT                     0                                                   /*!< PDB0_PODLY: DLY2 Position               */
#define PDB_PODLY_DLY2(x)                        (((uint32_t)(((uint32_t)(x))<<PDB_PODLY_DLY2_SHIFT))&PDB_PODLY_DLY2_MASK) /*!< PDB0_PODLY                              */
#define PDB_PODLY_DLY1_MASK                      (0xFFFFUL << PDB_PODLY_DLY1_SHIFT)                  /*!< PDB0_PODLY: DLY1 Mask                   */
#define PDB_PODLY_DLY1_SHIFT                     16                                                  /*!< PDB0_PODLY: DLY1 Position               */
#define PDB_PODLY_DLY1(x)                        (((uint32_t)(((uint32_t)(x))<<PDB_PODLY_DLY1_SHIFT))&PDB_PODLY_DLY1_MASK) /*!< PDB0_PODLY                              */

/* PDB0 - Peripheral instance base addresses */
#define PDB0_BasePtr                   0x40036000UL
#define PDB0                           ((PDB0_Type *) PDB0_BasePtr)
#define PDB0_BASE_PTR                  (PDB0)

/* ================================================================================ */
/* ================           PIT (file:PIT_4CH_CHAIN)             ================ */
/* ================================================================================ */

/**
 * @brief Periodic Interrupt Timer (4 channels)
 */
typedef struct {                                /*!<       PIT Structure                                                */
   __IO uint32_t  MCR;                          /*!< 0000: Module Control Register                                      */
   __I  uint32_t  RESERVED0[63];                /*!< 0004:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0040, 64)                                            */
      __IO uint32_t  LDVAL;                     /*!< 0100: Timer Load Value Register                                    */
      __I  uint32_t  CVAL;                      /*!< 0104: Current Timer Value Register                                 */
      __IO uint32_t  TCTRL;                     /*!< 0108: Timer Control Register                                       */
      __IO uint32_t  TFLG;                      /*!< 010C: Timer Flag Register                                          */
   } CHANNEL[4];
} PIT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- MCR Bit Fields                           ------ */
#define PIT_MCR_FRZ_MASK                         (0x01UL << PIT_MCR_FRZ_SHIFT)                       /*!< PIT_MCR: FRZ Mask                       */
#define PIT_MCR_FRZ_SHIFT                        0                                                   /*!< PIT_MCR: FRZ Position                   */
#define PIT_MCR_MDIS_MASK                        (0x01UL << PIT_MCR_MDIS_SHIFT)                      /*!< PIT_MCR: MDIS Mask                      */
#define PIT_MCR_MDIS_SHIFT                       1                                                   /*!< PIT_MCR: MDIS Position                  */
/* ------- LDVAL Bit Fields                         ------ */
#define PIT_LDVAL_TSV_MASK                       (0xFFFFFFFFUL << PIT_LDVAL_TSV_SHIFT)               /*!< PIT_LDVAL: TSV Mask                     */
#define PIT_LDVAL_TSV_SHIFT                      0                                                   /*!< PIT_LDVAL: TSV Position                 */
#define PIT_LDVAL_TSV(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_LDVAL_TSV_SHIFT))&PIT_LDVAL_TSV_MASK) /*!< PIT_LDVAL                               */
/* ------- CVAL Bit Fields                          ------ */
#define PIT_CVAL_TVL_MASK                        (0xFFFFFFFFUL << PIT_CVAL_TVL_SHIFT)                /*!< PIT_CVAL: TVL Mask                      */
#define PIT_CVAL_TVL_SHIFT                       0                                                   /*!< PIT_CVAL: TVL Position                  */
#define PIT_CVAL_TVL(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_CVAL_TVL_SHIFT))&PIT_CVAL_TVL_MASK) /*!< PIT_CVAL                                */
/* ------- TCTRL Bit Fields                         ------ */
#define PIT_TCTRL_TEN_MASK                       (0x01UL << PIT_TCTRL_TEN_SHIFT)                     /*!< PIT_TCTRL: TEN Mask                     */
#define PIT_TCTRL_TEN_SHIFT                      0                                                   /*!< PIT_TCTRL: TEN Position                 */
#define PIT_TCTRL_TIE_MASK                       (0x01UL << PIT_TCTRL_TIE_SHIFT)                     /*!< PIT_TCTRL: TIE Mask                     */
#define PIT_TCTRL_TIE_SHIFT                      1                                                   /*!< PIT_TCTRL: TIE Position                 */
#define PIT_TCTRL_CHN_MASK                       (0x01UL << PIT_TCTRL_CHN_SHIFT)                     /*!< PIT_TCTRL: CHN Mask                     */
#define PIT_TCTRL_CHN_SHIFT                      2                                                   /*!< PIT_TCTRL: CHN Position                 */
/* ------- TFLG Bit Fields                          ------ */
#define PIT_TFLG_TIF_MASK                        (0x01UL << PIT_TFLG_TIF_SHIFT)                      /*!< PIT_TFLG: TIF Mask                      */
#define PIT_TFLG_TIF_SHIFT                       0                                                   /*!< PIT_TFLG: TIF Position                  */

/* PIT - Peripheral instance base addresses */
#define PIT_BasePtr                    0x40037000UL
#define PIT                            ((PIT_Type *) PIT_BasePtr)
#define PIT_BASE_PTR                   (PIT)

/* ================================================================================ */
/* ================           PMC (file:PMC_BGEN)                  ================ */
/* ================================================================================ */

/**
 * @brief Power Management Controller
 */
typedef struct {                                /*!<       PMC Structure                                                */
   __IO uint8_t   LVDSC1;                       /*!< 0000: Low Voltage Status and Control 1                             */
   __IO uint8_t   LVDSC2;                       /*!< 0001: Low Voltage Status and Control 2                             */
   __IO uint8_t   REGSC;                        /*!< 0002: Regulator Status and Control                                 */
} PMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- LVDSC1 Bit Fields                        ------ */
#define PMC_LVDSC1_LVDV_MASK                     (0x03UL << PMC_LVDSC1_LVDV_SHIFT)                   /*!< PMC_LVDSC1: LVDV Mask                   */
#define PMC_LVDSC1_LVDV_SHIFT                    0                                                   /*!< PMC_LVDSC1: LVDV Position               */
#define PMC_LVDSC1_LVDV(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC1_LVDV_SHIFT))&PMC_LVDSC1_LVDV_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDRE_MASK                    (0x01UL << PMC_LVDSC1_LVDRE_SHIFT)                  /*!< PMC_LVDSC1: LVDRE Mask                  */
#define PMC_LVDSC1_LVDRE_SHIFT                   4                                                   /*!< PMC_LVDSC1: LVDRE Position              */
#define PMC_LVDSC1_LVDIE_MASK                    (0x01UL << PMC_LVDSC1_LVDIE_SHIFT)                  /*!< PMC_LVDSC1: LVDIE Mask                  */
#define PMC_LVDSC1_LVDIE_SHIFT                   5                                                   /*!< PMC_LVDSC1: LVDIE Position              */
#define PMC_LVDSC1_LVDACK_MASK                   (0x01UL << PMC_LVDSC1_LVDACK_SHIFT)                 /*!< PMC_LVDSC1: LVDACK Mask                 */
#define PMC_LVDSC1_LVDACK_SHIFT                  6                                                   /*!< PMC_LVDSC1: LVDACK Position             */
#define PMC_LVDSC1_LVDF_MASK                     (0x01UL << PMC_LVDSC1_LVDF_SHIFT)                   /*!< PMC_LVDSC1: LVDF Mask                   */
#define PMC_LVDSC1_LVDF_SHIFT                    7                                                   /*!< PMC_LVDSC1: LVDF Position               */
/* ------- LVDSC2 Bit Fields                        ------ */
#define PMC_LVDSC2_LVWV_MASK                     (0x03UL << PMC_LVDSC2_LVWV_SHIFT)                   /*!< PMC_LVDSC2: LVWV Mask                   */
#define PMC_LVDSC2_LVWV_SHIFT                    0                                                   /*!< PMC_LVDSC2: LVWV Position               */
#define PMC_LVDSC2_LVWV(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_LVDSC2_LVWV_SHIFT))&PMC_LVDSC2_LVWV_MASK) /*!< PMC_LVDSC2                              */
#define PMC_LVDSC2_LVWIE_MASK                    (0x01UL << PMC_LVDSC2_LVWIE_SHIFT)                  /*!< PMC_LVDSC2: LVWIE Mask                  */
#define PMC_LVDSC2_LVWIE_SHIFT                   5                                                   /*!< PMC_LVDSC2: LVWIE Position              */
#define PMC_LVDSC2_LVWACK_MASK                   (0x01UL << PMC_LVDSC2_LVWACK_SHIFT)                 /*!< PMC_LVDSC2: LVWACK Mask                 */
#define PMC_LVDSC2_LVWACK_SHIFT                  6                                                   /*!< PMC_LVDSC2: LVWACK Position             */
#define PMC_LVDSC2_LVWF_MASK                     (0x01UL << PMC_LVDSC2_LVWF_SHIFT)                   /*!< PMC_LVDSC2: LVWF Mask                   */
#define PMC_LVDSC2_LVWF_SHIFT                    7                                                   /*!< PMC_LVDSC2: LVWF Position               */
/* ------- REGSC Bit Fields                         ------ */
#define PMC_REGSC_BGBE_MASK                      (0x01UL << PMC_REGSC_BGBE_SHIFT)                    /*!< PMC_REGSC: BGBE Mask                    */
#define PMC_REGSC_BGBE_SHIFT                     0                                                   /*!< PMC_REGSC: BGBE Position                */
#define PMC_REGSC_REGONS_MASK                    (0x01UL << PMC_REGSC_REGONS_SHIFT)                  /*!< PMC_REGSC: REGONS Mask                  */
#define PMC_REGSC_REGONS_SHIFT                   2                                                   /*!< PMC_REGSC: REGONS Position              */
#define PMC_REGSC_ACKISO_MASK                    (0x01UL << PMC_REGSC_ACKISO_SHIFT)                  /*!< PMC_REGSC: ACKISO Mask                  */
#define PMC_REGSC_ACKISO_SHIFT                   3                                                   /*!< PMC_REGSC: ACKISO Position              */
#define PMC_REGSC_BGEN_MASK                      (0x01UL << PMC_REGSC_BGEN_SHIFT)                    /*!< PMC_REGSC: BGEN Mask                    */
#define PMC_REGSC_BGEN_SHIFT                     4                                                   /*!< PMC_REGSC: BGEN Position                */

/* PMC - Peripheral instance base addresses */
#define PMC_BasePtr                    0x4007D000UL
#define PMC                            ((PMC_Type *) PMC_BasePtr)
#define PMC_BASE_PTR                   (PMC)

/* ================================================================================ */
/* ================           PORTA (file:PORTA_FILT)              ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */
typedef struct {                                /*!<       PORTA Structure                                              */
   __IO uint32_t  PCR[32];                      /*!< 0000: Pin Control Register                                         */
   __O  uint32_t  GPCLR;                        /*!< 0080: Global Pin Control Low Register                              */
   __O  uint32_t  GPCHR;                        /*!< 0084: Global Pin Control High Register                             */
   __I  uint32_t  RESERVED0[6];                 /*!< 0088:                                                              */
   __IO uint32_t  ISFR;                         /*!< 00A0: Interrupt Status Flag Register                               */
   __I  uint32_t  RESERVED1[7];                 /*!< 00A4:                                                              */
   __IO uint32_t  DFER;                         /*!< 00C0: Digital Filter Enable Register                               */
   __IO uint32_t  DFCR;                         /*!< 00C4: Digital Filter Clock Register                                */
   __IO uint32_t  DFWR;                         /*!< 00C8: Digital Filter Width Register                                */
} PORT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PCR Bit Fields                           ------ */
#define PORT_PCR_PS_MASK                         (0x01UL << PORT_PCR_PS_SHIFT)                       /*!< PORTA_PCR: PS Mask                      */
#define PORT_PCR_PS_SHIFT                        0                                                   /*!< PORTA_PCR: PS Position                  */
#define PORT_PCR_PE_MASK                         (0x01UL << PORT_PCR_PE_SHIFT)                       /*!< PORTA_PCR: PE Mask                      */
#define PORT_PCR_PE_SHIFT                        1                                                   /*!< PORTA_PCR: PE Position                  */
#define PORT_PCR_SRE_MASK                        (0x01UL << PORT_PCR_SRE_SHIFT)                      /*!< PORTA_PCR: SRE Mask                     */
#define PORT_PCR_SRE_SHIFT                       2                                                   /*!< PORTA_PCR: SRE Position                 */
#define PORT_PCR_PFE_MASK                        (0x01UL << PORT_PCR_PFE_SHIFT)                      /*!< PORTA_PCR: PFE Mask                     */
#define PORT_PCR_PFE_SHIFT                       4                                                   /*!< PORTA_PCR: PFE Position                 */
#define PORT_PCR_ODE_MASK                        (0x01UL << PORT_PCR_ODE_SHIFT)                      /*!< PORTA_PCR: ODE Mask                     */
#define PORT_PCR_ODE_SHIFT                       5                                                   /*!< PORTA_PCR: ODE Position                 */
#define PORT_PCR_DSE_MASK                        (0x01UL << PORT_PCR_DSE_SHIFT)                      /*!< PORTA_PCR: DSE Mask                     */
#define PORT_PCR_DSE_SHIFT                       6                                                   /*!< PORTA_PCR: DSE Position                 */
#define PORT_PCR_MUX_MASK                        (0x07UL << PORT_PCR_MUX_SHIFT)                      /*!< PORTA_PCR: MUX Mask                     */
#define PORT_PCR_MUX_SHIFT                       8                                                   /*!< PORTA_PCR: MUX Position                 */
#define PORT_PCR_MUX(x)                          (((uint32_t)(((uint32_t)(x))<<PORT_PCR_MUX_SHIFT))&PORT_PCR_MUX_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_LK_MASK                         (0x01UL << PORT_PCR_LK_SHIFT)                       /*!< PORTA_PCR: LK Mask                      */
#define PORT_PCR_LK_SHIFT                        15                                                  /*!< PORTA_PCR: LK Position                  */
#define PORT_PCR_IRQC_MASK                       (0x0FUL << PORT_PCR_IRQC_SHIFT)                     /*!< PORTA_PCR: IRQC Mask                    */
#define PORT_PCR_IRQC_SHIFT                      16                                                  /*!< PORTA_PCR: IRQC Position                */
#define PORT_PCR_IRQC(x)                         (((uint32_t)(((uint32_t)(x))<<PORT_PCR_IRQC_SHIFT))&PORT_PCR_IRQC_MASK) /*!< PORTA_PCR                               */
#define PORT_PCR_ISF_MASK                        (0x01UL << PORT_PCR_ISF_SHIFT)                      /*!< PORTA_PCR: ISF Mask                     */
#define PORT_PCR_ISF_SHIFT                       24                                                  /*!< PORTA_PCR: ISF Position                 */
/* ------- GPCLR Bit Fields                         ------ */
#define PORT_GPCLR_GPWD_MASK                     (0xFFFFUL << PORT_GPCLR_GPWD_SHIFT)                 /*!< PORTA_GPCLR: GPWD Mask                  */
#define PORT_GPCLR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCLR: GPWD Position              */
#define PORT_GPCLR_GPWD(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCLR_GPWD_SHIFT))&PORT_GPCLR_GPWD_MASK) /*!< PORTA_GPCLR                             */
#define PORT_GPCLR_GPWE_MASK                     (0xFFFFUL << PORT_GPCLR_GPWE_SHIFT)                 /*!< PORTA_GPCLR: GPWE Mask                  */
#define PORT_GPCLR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCLR: GPWE Position              */
#define PORT_GPCLR_GPWE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCLR_GPWE_SHIFT))&PORT_GPCLR_GPWE_MASK) /*!< PORTA_GPCLR                             */
/* ------- GPCHR Bit Fields                         ------ */
#define PORT_GPCHR_GPWD_MASK                     (0xFFFFUL << PORT_GPCHR_GPWD_SHIFT)                 /*!< PORTA_GPCHR: GPWD Mask                  */
#define PORT_GPCHR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCHR: GPWD Position              */
#define PORT_GPCHR_GPWD(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCHR_GPWD_SHIFT))&PORT_GPCHR_GPWD_MASK) /*!< PORTA_GPCHR                             */
#define PORT_GPCHR_GPWE_MASK                     (0xFFFFUL << PORT_GPCHR_GPWE_SHIFT)                 /*!< PORTA_GPCHR: GPWE Mask                  */
#define PORT_GPCHR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCHR: GPWE Position              */
#define PORT_GPCHR_GPWE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_GPCHR_GPWE_SHIFT))&PORT_GPCHR_GPWE_MASK) /*!< PORTA_GPCHR                             */
/* ------- ISFR Bit Fields                          ------ */
/* ------- DFER Bit Fields                          ------ */
/* ------- DFCR Bit Fields                          ------ */
#define PORT_DFCR_CS_MASK                        (0x01UL << PORT_DFCR_CS_SHIFT)                      /*!< PORTA_DFCR: CS Mask                     */
#define PORT_DFCR_CS_SHIFT                       0                                                   /*!< PORTA_DFCR: CS Position                 */
/* ------- DFWR Bit Fields                          ------ */
#define PORT_DFWR_FILT_MASK                      (0x1FUL << PORT_DFWR_FILT_SHIFT)                    /*!< PORTA_DFWR: FILT Mask                   */
#define PORT_DFWR_FILT_SHIFT                     0                                                   /*!< PORTA_DFWR: FILT Position               */
#define PORT_DFWR_FILT(x)                        (((uint32_t)(((uint32_t)(x))<<PORT_DFWR_FILT_SHIFT))&PORT_DFWR_FILT_MASK) /*!< PORTA_DFWR                              */

/* PORTA - Peripheral instance base addresses */
#define PORTA_BasePtr                  0x40049000UL
#define PORTA                          ((PORT_Type *) PORTA_BasePtr)
#define PORTA_BASE_PTR                 (PORTA)

/* ================================================================================ */
/* ================           PORTB (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTB - Peripheral instance base addresses */
#define PORTB_BasePtr                  0x4004A000UL
#define PORTB                          ((PORT_Type *) PORTB_BasePtr)
#define PORTB_BASE_PTR                 (PORTB)

/* ================================================================================ */
/* ================           PORTC (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTC - Peripheral instance base addresses */
#define PORTC_BasePtr                  0x4004B000UL
#define PORTC                          ((PORT_Type *) PORTC_BasePtr)
#define PORTC_BASE_PTR                 (PORTC)

/* ================================================================================ */
/* ================           PORTD (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTD - Peripheral instance base addresses */
#define PORTD_BasePtr                  0x4004C000UL
#define PORTD                          ((PORT_Type *) PORTD_BasePtr)
#define PORTD_BASE_PTR                 (PORTD)

/* ================================================================================ */
/* ================           PORTE (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts
 */

/* PORTE - Peripheral instance base addresses */
#define PORTE_BasePtr                  0x4004D000UL
#define PORTE                          ((PORT_Type *) PORTE_BasePtr)
#define PORTE_BASE_PTR                 (PORTE)

/* ================================================================================ */
/* ================           RCM (file:RCM_MK_LOL)                ================ */
/* ================================================================================ */

/**
 * @brief Reset Control Module
 */
typedef struct {                                /*!<       RCM Structure                                                */
   __I  uint8_t   SRS0;                         /*!< 0000: System Reset Status Register 0                               */
   __I  uint8_t   SRS1;                         /*!< 0001: System Reset Status Register 1                               */
   __I  uint16_t  RESERVED0;                    /*!< 0002:                                                              */
   __IO uint8_t   RPFC;                         /*!< 0004: Reset Pin Filter Control Register                            */
   __IO uint8_t   RPFW;                         /*!< 0005: Reset Pin Filter Width Register                              */
   __I  uint8_t   RESERVED1;                    /*!< 0006:                                                              */
   __I  uint8_t   MR;                           /*!< 0007: Mode Register                                                */
} RCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SRS0 Bit Fields                          ------ */
#define RCM_SRS0_WAKEUP_MASK                     (0x01UL << RCM_SRS0_WAKEUP_SHIFT)                   /*!< RCM_SRS0: WAKEUP Mask                   */
#define RCM_SRS0_WAKEUP_SHIFT                    0                                                   /*!< RCM_SRS0: WAKEUP Position               */
#define RCM_SRS0_LVD_MASK                        (0x01UL << RCM_SRS0_LVD_SHIFT)                      /*!< RCM_SRS0: LVD Mask                      */
#define RCM_SRS0_LVD_SHIFT                       1                                                   /*!< RCM_SRS0: LVD Position                  */
#define RCM_SRS0_LOC_MASK                        (0x01UL << RCM_SRS0_LOC_SHIFT)                      /*!< RCM_SRS0: LOC Mask                      */
#define RCM_SRS0_LOC_SHIFT                       2                                                   /*!< RCM_SRS0: LOC Position                  */
#define RCM_SRS0_LOL_MASK                        (0x01UL << RCM_SRS0_LOL_SHIFT)                      /*!< RCM_SRS0: LOL Mask                      */
#define RCM_SRS0_LOL_SHIFT                       3                                                   /*!< RCM_SRS0: LOL Position                  */
#define RCM_SRS0_WDOG_MASK                       (0x01UL << RCM_SRS0_WDOG_SHIFT)                     /*!< RCM_SRS0: WDOG Mask                     */
#define RCM_SRS0_WDOG_SHIFT                      5                                                   /*!< RCM_SRS0: WDOG Position                 */
#define RCM_SRS0_PIN_MASK                        (0x01UL << RCM_SRS0_PIN_SHIFT)                      /*!< RCM_SRS0: PIN Mask                      */
#define RCM_SRS0_PIN_SHIFT                       6                                                   /*!< RCM_SRS0: PIN Position                  */
#define RCM_SRS0_POR_MASK                        (0x01UL << RCM_SRS0_POR_SHIFT)                      /*!< RCM_SRS0: POR Mask                      */
#define RCM_SRS0_POR_SHIFT                       7                                                   /*!< RCM_SRS0: POR Position                  */
/* ------- SRS1 Bit Fields                          ------ */
#define RCM_SRS1_JTAG_MASK                       (0x01UL << RCM_SRS1_JTAG_SHIFT)                     /*!< RCM_SRS1: JTAG Mask                     */
#define RCM_SRS1_JTAG_SHIFT                      0                                                   /*!< RCM_SRS1: JTAG Position                 */
#define RCM_SRS1_LOCKUP_MASK                     (0x01UL << RCM_SRS1_LOCKUP_SHIFT)                   /*!< RCM_SRS1: LOCKUP Mask                   */
#define RCM_SRS1_LOCKUP_SHIFT                    1                                                   /*!< RCM_SRS1: LOCKUP Position               */
#define RCM_SRS1_SW_MASK                         (0x01UL << RCM_SRS1_SW_SHIFT)                       /*!< RCM_SRS1: SW Mask                       */
#define RCM_SRS1_SW_SHIFT                        2                                                   /*!< RCM_SRS1: SW Position                   */
#define RCM_SRS1_MDM_AP_MASK                     (0x01UL << RCM_SRS1_MDM_AP_SHIFT)                   /*!< RCM_SRS1: MDM_AP Mask                   */
#define RCM_SRS1_MDM_AP_SHIFT                    3                                                   /*!< RCM_SRS1: MDM_AP Position               */
#define RCM_SRS1_EZPT_MASK                       (0x01UL << RCM_SRS1_EZPT_SHIFT)                     /*!< RCM_SRS1: EZPT Mask                     */
#define RCM_SRS1_EZPT_SHIFT                      4                                                   /*!< RCM_SRS1: EZPT Position                 */
#define RCM_SRS1_SACKERR_MASK                    (0x01UL << RCM_SRS1_SACKERR_SHIFT)                  /*!< RCM_SRS1: SACKERR Mask                  */
#define RCM_SRS1_SACKERR_SHIFT                   5                                                   /*!< RCM_SRS1: SACKERR Position              */
/* ------- RPFC Bit Fields                          ------ */
#define RCM_RPFC_RSTFLTSRW_MASK                  (0x03UL << RCM_RPFC_RSTFLTSRW_SHIFT)                /*!< RCM_RPFC: RSTFLTSRW Mask                */
#define RCM_RPFC_RSTFLTSRW_SHIFT                 0                                                   /*!< RCM_RPFC: RSTFLTSRW Position            */
#define RCM_RPFC_RSTFLTSRW(x)                    (((uint8_t)(((uint8_t)(x))<<RCM_RPFC_RSTFLTSRW_SHIFT))&RCM_RPFC_RSTFLTSRW_MASK) /*!< RCM_RPFC                                */
#define RCM_RPFC_RSTFLTSS_MASK                   (0x01UL << RCM_RPFC_RSTFLTSS_SHIFT)                 /*!< RCM_RPFC: RSTFLTSS Mask                 */
#define RCM_RPFC_RSTFLTSS_SHIFT                  2                                                   /*!< RCM_RPFC: RSTFLTSS Position             */
/* ------- RPFW Bit Fields                          ------ */
#define RCM_RPFW_RSTFLTSEL_MASK                  (0x1FUL << RCM_RPFW_RSTFLTSEL_SHIFT)                /*!< RCM_RPFW: RSTFLTSEL Mask                */
#define RCM_RPFW_RSTFLTSEL_SHIFT                 0                                                   /*!< RCM_RPFW: RSTFLTSEL Position            */
#define RCM_RPFW_RSTFLTSEL(x)                    (((uint8_t)(((uint8_t)(x))<<RCM_RPFW_RSTFLTSEL_SHIFT))&RCM_RPFW_RSTFLTSEL_MASK) /*!< RCM_RPFW                                */
/* ------- MR Bit Fields                            ------ */
#define RCM_MR_EZP_MS_MASK                       (0x01UL << RCM_MR_EZP_MS_SHIFT)                     /*!< RCM_MR: EZP_MS Mask                     */
#define RCM_MR_EZP_MS_SHIFT                      1                                                   /*!< RCM_MR: EZP_MS Position                 */

/* RCM - Peripheral instance base addresses */
#define RCM_BasePtr                    0x4007F000UL
#define RCM                            ((RCM_Type *) RCM_BasePtr)
#define RCM_BASE_PTR                   (RCM)

/* ================================================================================ */
/* ================           RFSYS (file:RFSYS_0)                 ================ */
/* ================================================================================ */

/**
 * @brief System register file
 */
typedef struct {                                /*!<       RFSYS Structure                                              */
   __IO uint32_t  REG[8];                       /*!< 0000: Register file register                                       */
} RFSYS_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RFSYS' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- REG Bit Fields                           ------ */
#define RFSYS_REG_LL_MASK                        (0xFFUL << RFSYS_REG_LL_SHIFT)                      /*!< RFSYS_REG: LL Mask                      */
#define RFSYS_REG_LL_SHIFT                       0                                                   /*!< RFSYS_REG: LL Position                  */
#define RFSYS_REG_LL(x)                          (((uint32_t)(((uint32_t)(x))<<RFSYS_REG_LL_SHIFT))&RFSYS_REG_LL_MASK) /*!< RFSYS_REG                               */
#define RFSYS_REG_LH_MASK                        (0xFFUL << RFSYS_REG_LH_SHIFT)                      /*!< RFSYS_REG: LH Mask                      */
#define RFSYS_REG_LH_SHIFT                       8                                                   /*!< RFSYS_REG: LH Position                  */
#define RFSYS_REG_LH(x)                          (((uint32_t)(((uint32_t)(x))<<RFSYS_REG_LH_SHIFT))&RFSYS_REG_LH_MASK) /*!< RFSYS_REG                               */
#define RFSYS_REG_HL_MASK                        (0xFFUL << RFSYS_REG_HL_SHIFT)                      /*!< RFSYS_REG: HL Mask                      */
#define RFSYS_REG_HL_SHIFT                       16                                                  /*!< RFSYS_REG: HL Position                  */
#define RFSYS_REG_HL(x)                          (((uint32_t)(((uint32_t)(x))<<RFSYS_REG_HL_SHIFT))&RFSYS_REG_HL_MASK) /*!< RFSYS_REG                               */
#define RFSYS_REG_HH_MASK                        (0xFFUL << RFSYS_REG_HH_SHIFT)                      /*!< RFSYS_REG: HH Mask                      */
#define RFSYS_REG_HH_SHIFT                       24                                                  /*!< RFSYS_REG: HH Position                  */
#define RFSYS_REG_HH(x)                          (((uint32_t)(((uint32_t)(x))<<RFSYS_REG_HH_SHIFT))&RFSYS_REG_HH_MASK) /*!< RFSYS_REG                               */

/* RFSYS - Peripheral instance base addresses */
#define RFSYS_BasePtr                  0x40041000UL
#define RFSYS                          ((RFSYS_Type *) RFSYS_BasePtr)
#define RFSYS_BASE_PTR                 (RFSYS)

/* ================================================================================ */
/* ================           RFVBAT (file:RFVBAT_0)               ================ */
/* ================================================================================ */

/**
 * @brief VBAT register file
 */
typedef struct {                                /*!<       RFVBAT Structure                                             */
   __IO uint32_t  REG[8];                       /*!< 0000: VBAT register file register                                  */
} RFVBAT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RFVBAT' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- REG Bit Fields                           ------ */
#define RFVBAT_REG_LL_MASK                       (0xFFUL << RFVBAT_REG_LL_SHIFT)                     /*!< RFVBAT_REG: LL Mask                     */
#define RFVBAT_REG_LL_SHIFT                      0                                                   /*!< RFVBAT_REG: LL Position                 */
#define RFVBAT_REG_LL(x)                         (((uint32_t)(((uint32_t)(x))<<RFVBAT_REG_LL_SHIFT))&RFVBAT_REG_LL_MASK) /*!< RFVBAT_REG                              */
#define RFVBAT_REG_LH_MASK                       (0xFFUL << RFVBAT_REG_LH_SHIFT)                     /*!< RFVBAT_REG: LH Mask                     */
#define RFVBAT_REG_LH_SHIFT                      8                                                   /*!< RFVBAT_REG: LH Position                 */
#define RFVBAT_REG_LH(x)                         (((uint32_t)(((uint32_t)(x))<<RFVBAT_REG_LH_SHIFT))&RFVBAT_REG_LH_MASK) /*!< RFVBAT_REG                              */
#define RFVBAT_REG_HL_MASK                       (0xFFUL << RFVBAT_REG_HL_SHIFT)                     /*!< RFVBAT_REG: HL Mask                     */
#define RFVBAT_REG_HL_SHIFT                      16                                                  /*!< RFVBAT_REG: HL Position                 */
#define RFVBAT_REG_HL(x)                         (((uint32_t)(((uint32_t)(x))<<RFVBAT_REG_HL_SHIFT))&RFVBAT_REG_HL_MASK) /*!< RFVBAT_REG                              */
#define RFVBAT_REG_HH_MASK                       (0xFFUL << RFVBAT_REG_HH_SHIFT)                     /*!< RFVBAT_REG: HH Mask                     */
#define RFVBAT_REG_HH_SHIFT                      24                                                  /*!< RFVBAT_REG: HH Position                 */
#define RFVBAT_REG_HH(x)                         (((uint32_t)(((uint32_t)(x))<<RFVBAT_REG_HH_SHIFT))&RFVBAT_REG_HH_MASK) /*!< RFVBAT_REG                              */

/* RFVBAT - Peripheral instance base addresses */
#define RFVBAT_BasePtr                 0x4003E000UL
#define RFVBAT                         ((RFVBAT_Type *) RFVBAT_BasePtr)
#define RFVBAT_BASE_PTR                (RFVBAT)

/* ================================================================================ */
/* ================           RNG (file:RNG_1)                     ================ */
/* ================================================================================ */

/**
 * @brief Random Number Generator Accelerator
 */
typedef struct {                                /*!<       RNG Structure                                                */
   __IO uint32_t  CR;                           /*!< 0000: RNGA Control Register                                        */
   __I  uint32_t  SR;                           /*!< 0004: RNGA Status Register                                         */
   __O  uint32_t  ER;                           /*!< 0008: RNGA Entropy Register                                        */
   __I  uint32_t  OR;                           /*!< 000C: RNGA Output Register                                         */
} RNG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RNG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CR Bit Fields                            ------ */
#define RNG_CR_GO_MASK                           (0x01UL << RNG_CR_GO_SHIFT)                         /*!< RNG_CR: GO Mask                         */
#define RNG_CR_GO_SHIFT                          0                                                   /*!< RNG_CR: GO Position                     */
#define RNG_CR_HA_MASK                           (0x01UL << RNG_CR_HA_SHIFT)                         /*!< RNG_CR: HA Mask                         */
#define RNG_CR_HA_SHIFT                          1                                                   /*!< RNG_CR: HA Position                     */
#define RNG_CR_INTM_MASK                         (0x01UL << RNG_CR_INTM_SHIFT)                       /*!< RNG_CR: INTM Mask                       */
#define RNG_CR_INTM_SHIFT                        2                                                   /*!< RNG_CR: INTM Position                   */
#define RNG_CR_CLRI_MASK                         (0x01UL << RNG_CR_CLRI_SHIFT)                       /*!< RNG_CR: CLRI Mask                       */
#define RNG_CR_CLRI_SHIFT                        3                                                   /*!< RNG_CR: CLRI Position                   */
#define RNG_CR_SLP_MASK                          (0x01UL << RNG_CR_SLP_SHIFT)                        /*!< RNG_CR: SLP Mask                        */
#define RNG_CR_SLP_SHIFT                         4                                                   /*!< RNG_CR: SLP Position                    */
/* ------- SR Bit Fields                            ------ */
#define RNG_SR_SECV_MASK                         (0x01UL << RNG_SR_SECV_SHIFT)                       /*!< RNG_SR: SECV Mask                       */
#define RNG_SR_SECV_SHIFT                        0                                                   /*!< RNG_SR: SECV Position                   */
#define RNG_SR_LRS_MASK                          (0x01UL << RNG_SR_LRS_SHIFT)                        /*!< RNG_SR: LRS Mask                        */
#define RNG_SR_LRS_SHIFT                         1                                                   /*!< RNG_SR: LRS Position                    */
#define RNG_SR_ORU_MASK                          (0x01UL << RNG_SR_ORU_SHIFT)                        /*!< RNG_SR: ORU Mask                        */
#define RNG_SR_ORU_SHIFT                         2                                                   /*!< RNG_SR: ORU Position                    */
#define RNG_SR_ERRI_MASK                         (0x01UL << RNG_SR_ERRI_SHIFT)                       /*!< RNG_SR: ERRI Mask                       */
#define RNG_SR_ERRI_SHIFT                        3                                                   /*!< RNG_SR: ERRI Position                   */
#define RNG_SR_SLP_MASK                          (0x01UL << RNG_SR_SLP_SHIFT)                        /*!< RNG_SR: SLP Mask                        */
#define RNG_SR_SLP_SHIFT                         4                                                   /*!< RNG_SR: SLP Position                    */
#define RNG_SR_OREG_LVL_MASK                     (0xFFUL << RNG_SR_OREG_LVL_SHIFT)                   /*!< RNG_SR: OREG_LVL Mask                   */
#define RNG_SR_OREG_LVL_SHIFT                    8                                                   /*!< RNG_SR: OREG_LVL Position               */
#define RNG_SR_OREG_LVL(x)                       (((uint32_t)(((uint32_t)(x))<<RNG_SR_OREG_LVL_SHIFT))&RNG_SR_OREG_LVL_MASK) /*!< RNG_SR                                  */
#define RNG_SR_OREG_SIZE_MASK                    (0xFFUL << RNG_SR_OREG_SIZE_SHIFT)                  /*!< RNG_SR: OREG_SIZE Mask                  */
#define RNG_SR_OREG_SIZE_SHIFT                   16                                                  /*!< RNG_SR: OREG_SIZE Position              */
#define RNG_SR_OREG_SIZE(x)                      (((uint32_t)(((uint32_t)(x))<<RNG_SR_OREG_SIZE_SHIFT))&RNG_SR_OREG_SIZE_MASK) /*!< RNG_SR                                  */
/* ------- ER Bit Fields                            ------ */
#define RNG_ER_EXT_ENT_MASK                      (0xFFFFFFFFUL << RNG_ER_EXT_ENT_SHIFT)              /*!< RNG_ER: EXT_ENT Mask                    */
#define RNG_ER_EXT_ENT_SHIFT                     0                                                   /*!< RNG_ER: EXT_ENT Position                */
#define RNG_ER_EXT_ENT(x)                        (((uint32_t)(((uint32_t)(x))<<RNG_ER_EXT_ENT_SHIFT))&RNG_ER_EXT_ENT_MASK) /*!< RNG_ER                                  */
/* ------- OR Bit Fields                            ------ */
#define RNG_OR_RANDOUT_MASK                      (0xFFFFFFFFUL << RNG_OR_RANDOUT_SHIFT)              /*!< RNG_OR: RANDOUT Mask                    */
#define RNG_OR_RANDOUT_SHIFT                     0                                                   /*!< RNG_OR: RANDOUT Position                */
#define RNG_OR_RANDOUT(x)                        (((uint32_t)(((uint32_t)(x))<<RNG_OR_RANDOUT_SHIFT))&RNG_OR_RANDOUT_MASK) /*!< RNG_OR                                  */

/* RNG - Peripheral instance base addresses */
#define RNG_BasePtr                    0x40029000UL
#define RNG                            ((RNG_Type *) RNG_BasePtr)
#define RNG_BASE_PTR                   (RNG)

/* ================================================================================ */
/* ================           RTC (file:RTC_WAR_RAR)               ================ */
/* ================================================================================ */

/**
 * @brief Secure Real Time Clock
 */
typedef struct {                                /*!<       RTC Structure                                                */
   __IO uint32_t  TSR;                          /*!< 0000: Time Seconds Register                                        */
   __IO uint32_t  TPR;                          /*!< 0004: Time Prescaler Register                                      */
   __IO uint32_t  TAR;                          /*!< 0008: Time Alarm Register                                          */
   __IO uint32_t  TCR;                          /*!< 000C: Time Compensation Register                                   */
   __IO uint32_t  CR;                           /*!< 0010: Control Register                                             */
   __IO uint32_t  SR;                           /*!< 0014: Status Register                                              */
   __IO uint32_t  LR;                           /*!< 0018: Lock Register                                                */
   __IO uint32_t  IER;                          /*!< 001C: Interrupt Enable Register                                    */
   __I  uint32_t  RESERVED0[504];               /*!< 0020:                                                              */
   __IO uint32_t  WAR;                          /*!< 0800: Write Access Register                                        */
   __IO uint32_t  RAR;                          /*!< 0804: Read Access Register                                         */
} RTC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- TSR Bit Fields                           ------ */
#define RTC_TSR_TSR_MASK                         (0xFFFFFFFFUL << RTC_TSR_TSR_SHIFT)                 /*!< RTC_TSR: TSR Mask                       */
#define RTC_TSR_TSR_SHIFT                        0                                                   /*!< RTC_TSR: TSR Position                   */
#define RTC_TSR_TSR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TSR_TSR_SHIFT))&RTC_TSR_TSR_MASK) /*!< RTC_TSR                                 */
/* ------- TPR Bit Fields                           ------ */
#define RTC_TPR_TPR_MASK                         (0xFFFFUL << RTC_TPR_TPR_SHIFT)                     /*!< RTC_TPR: TPR Mask                       */
#define RTC_TPR_TPR_SHIFT                        0                                                   /*!< RTC_TPR: TPR Position                   */
#define RTC_TPR_TPR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TPR_TPR_SHIFT))&RTC_TPR_TPR_MASK) /*!< RTC_TPR                                 */
/* ------- TAR Bit Fields                           ------ */
#define RTC_TAR_TAR_MASK                         (0xFFFFFFFFUL << RTC_TAR_TAR_SHIFT)                 /*!< RTC_TAR: TAR Mask                       */
#define RTC_TAR_TAR_SHIFT                        0                                                   /*!< RTC_TAR: TAR Position                   */
#define RTC_TAR_TAR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TAR_TAR_SHIFT))&RTC_TAR_TAR_MASK) /*!< RTC_TAR                                 */
/* ------- TCR Bit Fields                           ------ */
#define RTC_TCR_TCR_MASK                         (0xFFUL << RTC_TCR_TCR_SHIFT)                       /*!< RTC_TCR: TCR Mask                       */
#define RTC_TCR_TCR_SHIFT                        0                                                   /*!< RTC_TCR: TCR Position                   */
#define RTC_TCR_TCR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_TCR_SHIFT))&RTC_TCR_TCR_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_CIR_MASK                         (0xFFUL << RTC_TCR_CIR_SHIFT)                       /*!< RTC_TCR: CIR Mask                       */
#define RTC_TCR_CIR_SHIFT                        8                                                   /*!< RTC_TCR: CIR Position                   */
#define RTC_TCR_CIR(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_CIR_SHIFT))&RTC_TCR_CIR_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_TCV_MASK                         (0xFFUL << RTC_TCR_TCV_SHIFT)                       /*!< RTC_TCR: TCV Mask                       */
#define RTC_TCR_TCV_SHIFT                        16                                                  /*!< RTC_TCR: TCV Position                   */
#define RTC_TCR_TCV(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_TCV_SHIFT))&RTC_TCR_TCV_MASK) /*!< RTC_TCR                                 */
#define RTC_TCR_CIC_MASK                         (0xFFUL << RTC_TCR_CIC_SHIFT)                       /*!< RTC_TCR: CIC Mask                       */
#define RTC_TCR_CIC_SHIFT                        24                                                  /*!< RTC_TCR: CIC Position                   */
#define RTC_TCR_CIC(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_TCR_CIC_SHIFT))&RTC_TCR_CIC_MASK) /*!< RTC_TCR                                 */
/* ------- CR Bit Fields                            ------ */
#define RTC_CR_SWR_MASK                          (0x01UL << RTC_CR_SWR_SHIFT)                        /*!< RTC_CR: SWR Mask                        */
#define RTC_CR_SWR_SHIFT                         0                                                   /*!< RTC_CR: SWR Position                    */
#define RTC_CR_WPE_MASK                          (0x01UL << RTC_CR_WPE_SHIFT)                        /*!< RTC_CR: WPE Mask                        */
#define RTC_CR_WPE_SHIFT                         1                                                   /*!< RTC_CR: WPE Position                    */
#define RTC_CR_SUP_MASK                          (0x01UL << RTC_CR_SUP_SHIFT)                        /*!< RTC_CR: SUP Mask                        */
#define RTC_CR_SUP_SHIFT                         2                                                   /*!< RTC_CR: SUP Position                    */
#define RTC_CR_UM_MASK                           (0x01UL << RTC_CR_UM_SHIFT)                         /*!< RTC_CR: UM Mask                         */
#define RTC_CR_UM_SHIFT                          3                                                   /*!< RTC_CR: UM Position                     */
#define RTC_CR_OSCE_MASK                         (0x01UL << RTC_CR_OSCE_SHIFT)                       /*!< RTC_CR: OSCE Mask                       */
#define RTC_CR_OSCE_SHIFT                        8                                                   /*!< RTC_CR: OSCE Position                   */
#define RTC_CR_CLKO_MASK                         (0x01UL << RTC_CR_CLKO_SHIFT)                       /*!< RTC_CR: CLKO Mask                       */
#define RTC_CR_CLKO_SHIFT                        9                                                   /*!< RTC_CR: CLKO Position                   */
#define RTC_CR_SC16P_MASK                        (0x01UL << RTC_CR_SC16P_SHIFT)                      /*!< RTC_CR: SC16P Mask                      */
#define RTC_CR_SC16P_SHIFT                       10                                                  /*!< RTC_CR: SC16P Position                  */
#define RTC_CR_SC8P_MASK                         (0x01UL << RTC_CR_SC8P_SHIFT)                       /*!< RTC_CR: SC8P Mask                       */
#define RTC_CR_SC8P_SHIFT                        11                                                  /*!< RTC_CR: SC8P Position                   */
#define RTC_CR_SC4P_MASK                         (0x01UL << RTC_CR_SC4P_SHIFT)                       /*!< RTC_CR: SC4P Mask                       */
#define RTC_CR_SC4P_SHIFT                        12                                                  /*!< RTC_CR: SC4P Position                   */
#define RTC_CR_SC2P_MASK                         (0x01UL << RTC_CR_SC2P_SHIFT)                       /*!< RTC_CR: SC2P Mask                       */
#define RTC_CR_SC2P_SHIFT                        13                                                  /*!< RTC_CR: SC2P Position                   */
/* ------- SR Bit Fields                            ------ */
#define RTC_SR_TIF_MASK                          (0x01UL << RTC_SR_TIF_SHIFT)                        /*!< RTC_SR: TIF Mask                        */
#define RTC_SR_TIF_SHIFT                         0                                                   /*!< RTC_SR: TIF Position                    */
#define RTC_SR_TOF_MASK                          (0x01UL << RTC_SR_TOF_SHIFT)                        /*!< RTC_SR: TOF Mask                        */
#define RTC_SR_TOF_SHIFT                         1                                                   /*!< RTC_SR: TOF Position                    */
#define RTC_SR_TAF_MASK                          (0x01UL << RTC_SR_TAF_SHIFT)                        /*!< RTC_SR: TAF Mask                        */
#define RTC_SR_TAF_SHIFT                         2                                                   /*!< RTC_SR: TAF Position                    */
#define RTC_SR_TCE_MASK                          (0x01UL << RTC_SR_TCE_SHIFT)                        /*!< RTC_SR: TCE Mask                        */
#define RTC_SR_TCE_SHIFT                         4                                                   /*!< RTC_SR: TCE Position                    */
/* ------- LR Bit Fields                            ------ */
#define RTC_LR_TCL_MASK                          (0x01UL << RTC_LR_TCL_SHIFT)                        /*!< RTC_LR: TCL Mask                        */
#define RTC_LR_TCL_SHIFT                         3                                                   /*!< RTC_LR: TCL Position                    */
#define RTC_LR_CRL_MASK                          (0x01UL << RTC_LR_CRL_SHIFT)                        /*!< RTC_LR: CRL Mask                        */
#define RTC_LR_CRL_SHIFT                         4                                                   /*!< RTC_LR: CRL Position                    */
#define RTC_LR_SRL_MASK                          (0x01UL << RTC_LR_SRL_SHIFT)                        /*!< RTC_LR: SRL Mask                        */
#define RTC_LR_SRL_SHIFT                         5                                                   /*!< RTC_LR: SRL Position                    */
#define RTC_LR_LRL_MASK                          (0x01UL << RTC_LR_LRL_SHIFT)                        /*!< RTC_LR: LRL Mask                        */
#define RTC_LR_LRL_SHIFT                         6                                                   /*!< RTC_LR: LRL Position                    */
/* ------- IER Bit Fields                           ------ */
#define RTC_IER_TIIE_MASK                        (0x01UL << RTC_IER_TIIE_SHIFT)                      /*!< RTC_IER: TIIE Mask                      */
#define RTC_IER_TIIE_SHIFT                       0                                                   /*!< RTC_IER: TIIE Position                  */
#define RTC_IER_TOIE_MASK                        (0x01UL << RTC_IER_TOIE_SHIFT)                      /*!< RTC_IER: TOIE Mask                      */
#define RTC_IER_TOIE_SHIFT                       1                                                   /*!< RTC_IER: TOIE Position                  */
#define RTC_IER_TAIE_MASK                        (0x01UL << RTC_IER_TAIE_SHIFT)                      /*!< RTC_IER: TAIE Mask                      */
#define RTC_IER_TAIE_SHIFT                       2                                                   /*!< RTC_IER: TAIE Position                  */
/* ------- WAR Bit Fields                           ------ */
#define RTC_WAR_TSRW_MASK                        (0x01UL << RTC_WAR_TSRW_SHIFT)                      /*!< RTC_WAR: TSRW Mask                      */
#define RTC_WAR_TSRW_SHIFT                       0                                                   /*!< RTC_WAR: TSRW Position                  */
#define RTC_WAR_TPRW_MASK                        (0x01UL << RTC_WAR_TPRW_SHIFT)                      /*!< RTC_WAR: TPRW Mask                      */
#define RTC_WAR_TPRW_SHIFT                       1                                                   /*!< RTC_WAR: TPRW Position                  */
#define RTC_WAR_TARW_MASK                        (0x01UL << RTC_WAR_TARW_SHIFT)                      /*!< RTC_WAR: TARW Mask                      */
#define RTC_WAR_TARW_SHIFT                       2                                                   /*!< RTC_WAR: TARW Position                  */
#define RTC_WAR_TCRW_MASK                        (0x01UL << RTC_WAR_TCRW_SHIFT)                      /*!< RTC_WAR: TCRW Mask                      */
#define RTC_WAR_TCRW_SHIFT                       3                                                   /*!< RTC_WAR: TCRW Position                  */
#define RTC_WAR_CRW_MASK                         (0x01UL << RTC_WAR_CRW_SHIFT)                       /*!< RTC_WAR: CRW Mask                       */
#define RTC_WAR_CRW_SHIFT                        4                                                   /*!< RTC_WAR: CRW Position                   */
#define RTC_WAR_SRW_MASK                         (0x01UL << RTC_WAR_SRW_SHIFT)                       /*!< RTC_WAR: SRW Mask                       */
#define RTC_WAR_SRW_SHIFT                        5                                                   /*!< RTC_WAR: SRW Position                   */
#define RTC_WAR_LRW_MASK                         (0x01UL << RTC_WAR_LRW_SHIFT)                       /*!< RTC_WAR: LRW Mask                       */
#define RTC_WAR_LRW_SHIFT                        6                                                   /*!< RTC_WAR: LRW Position                   */
#define RTC_WAR_IERW_MASK                        (0x01UL << RTC_WAR_IERW_SHIFT)                      /*!< RTC_WAR: IERW Mask                      */
#define RTC_WAR_IERW_SHIFT                       7                                                   /*!< RTC_WAR: IERW Position                  */
/* ------- RAR Bit Fields                           ------ */
#define RTC_RAR_TSRR_MASK                        (0x01UL << RTC_RAR_TSRR_SHIFT)                      /*!< RTC_RAR: TSRR Mask                      */
#define RTC_RAR_TSRR_SHIFT                       0                                                   /*!< RTC_RAR: TSRR Position                  */
#define RTC_RAR_TPRR_MASK                        (0x01UL << RTC_RAR_TPRR_SHIFT)                      /*!< RTC_RAR: TPRR Mask                      */
#define RTC_RAR_TPRR_SHIFT                       1                                                   /*!< RTC_RAR: TPRR Position                  */
#define RTC_RAR_TARR_MASK                        (0x01UL << RTC_RAR_TARR_SHIFT)                      /*!< RTC_RAR: TARR Mask                      */
#define RTC_RAR_TARR_SHIFT                       2                                                   /*!< RTC_RAR: TARR Position                  */
#define RTC_RAR_TCRR_MASK                        (0x01UL << RTC_RAR_TCRR_SHIFT)                      /*!< RTC_RAR: TCRR Mask                      */
#define RTC_RAR_TCRR_SHIFT                       3                                                   /*!< RTC_RAR: TCRR Position                  */
#define RTC_RAR_CRR_MASK                         (0x01UL << RTC_RAR_CRR_SHIFT)                       /*!< RTC_RAR: CRR Mask                       */
#define RTC_RAR_CRR_SHIFT                        4                                                   /*!< RTC_RAR: CRR Position                   */
#define RTC_RAR_SRR_MASK                         (0x01UL << RTC_RAR_SRR_SHIFT)                       /*!< RTC_RAR: SRR Mask                       */
#define RTC_RAR_SRR_SHIFT                        5                                                   /*!< RTC_RAR: SRR Position                   */
#define RTC_RAR_LRR_MASK                         (0x01UL << RTC_RAR_LRR_SHIFT)                       /*!< RTC_RAR: LRR Mask                       */
#define RTC_RAR_LRR_SHIFT                        6                                                   /*!< RTC_RAR: LRR Position                   */
#define RTC_RAR_IERR_MASK                        (0x01UL << RTC_RAR_IERR_SHIFT)                      /*!< RTC_RAR: IERR Mask                      */
#define RTC_RAR_IERR_SHIFT                       7                                                   /*!< RTC_RAR: IERR Position                  */

/* RTC - Peripheral instance base addresses */
#define RTC_BasePtr                    0x4003D000UL
#define RTC                            ((RTC_Type *) RTC_BasePtr)
#define RTC_BASE_PTR                   (RTC)

/* ================================================================================ */
/* ================           SIM (file:SIM_MK22F51212)            ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module
 */
typedef struct {                                /*!<       SIM Structure                                                */
   __IO uint32_t  SOPT1;                        /*!< 0000: System Options Register 1                                    */
   __IO uint32_t  SOPT1CFG;                     /*!< 0004: SOPT1 Configuration Register                                 */
   __I  uint32_t  RESERVED0[1023];              /*!< 0008:                                                              */
   __IO uint32_t  SOPT2;                        /*!< 1004: System Options Register 2                                    */
   __I  uint32_t  RESERVED1;                    /*!< 1008:                                                              */
   __IO uint32_t  SOPT4;                        /*!< 100C: System Options Register 4                                    */
   __IO uint32_t  SOPT5;                        /*!< 1010: System Options Register 5                                    */
   __I  uint32_t  RESERVED2;                    /*!< 1014:                                                              */
   __IO uint32_t  SOPT7;                        /*!< 1018: System Options Register 7                                    */
   __IO uint32_t  SOPT8;                        /*!< 101C: System Options Register 8                                    */
   __I  uint32_t  RESERVED3;                    /*!< 1020:                                                              */
   __I  uint32_t  SDID;                         /*!< 1024: System Device Identification Register                        */
   __I  uint32_t  RESERVED4[3];                 /*!< 1028:                                                              */
   __IO uint32_t  SCGC4;                        /*!< 1034: System Clock Gating Control Register 4                       */
   __IO uint32_t  SCGC5;                        /*!< 1038: System Clock Gating Control Register 5                       */
   __IO uint32_t  SCGC6;                        /*!< 103C: System Clock Gating Control Register 6                       */
   __IO uint32_t  SCGC7;                        /*!< 1040: System Clock Gating Control Register 7                       */
   __IO uint32_t  CLKDIV1;                      /*!< 1044: System Clock Divider Register 1                              */
   __IO uint32_t  CLKDIV2;                      /*!< 1048: System Clock Divider Register 2                              */
   __IO uint32_t  FCFG1;                        /*!< 104C: Flash Configuration Register 1                               */
   __I  uint32_t  FCFG2;                        /*!< 1050: Flash Configuration Register 2                               */
   __I  uint32_t  UIDH;                         /*!< 1054: Unique Identification Register High                          */
   __I  uint32_t  UIDMH;                        /*!< 1058: Unique Identification Register Mid-High                      */
   __I  uint32_t  UIDML;                        /*!< 105C: Unique Identification Register Mid Low                       */
   __I  uint32_t  UIDL;                         /*!< 1060: Unique Identification Register Low                           */
} SIM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SOPT1 Bit Fields                         ------ */
#define SIM_SOPT1_RAMSIZE_MASK                   (0x0FUL << SIM_SOPT1_RAMSIZE_SHIFT)                 /*!< SIM_SOPT1: RAMSIZE Mask                 */
#define SIM_SOPT1_RAMSIZE_SHIFT                  12                                                  /*!< SIM_SOPT1: RAMSIZE Position             */
#define SIM_SOPT1_RAMSIZE(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_RAMSIZE_SHIFT))&SIM_SOPT1_RAMSIZE_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_OSC32KOUT_MASK                 (0x03UL << SIM_SOPT1_OSC32KOUT_SHIFT)               /*!< SIM_SOPT1: OSC32KOUT Mask               */
#define SIM_SOPT1_OSC32KOUT_SHIFT                16                                                  /*!< SIM_SOPT1: OSC32KOUT Position           */
#define SIM_SOPT1_OSC32KOUT(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_OSC32KOUT_SHIFT))&SIM_SOPT1_OSC32KOUT_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_OSC32KSEL_MASK                 (0x03UL << SIM_SOPT1_OSC32KSEL_SHIFT)               /*!< SIM_SOPT1: OSC32KSEL Mask               */
#define SIM_SOPT1_OSC32KSEL_SHIFT                18                                                  /*!< SIM_SOPT1: OSC32KSEL Position           */
#define SIM_SOPT1_OSC32KSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_OSC32KSEL_SHIFT))&SIM_SOPT1_OSC32KSEL_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_USBVSTBY_MASK                  (0x01UL << SIM_SOPT1_USBVSTBY_SHIFT)                /*!< SIM_SOPT1: USBVSTBY Mask                */
#define SIM_SOPT1_USBVSTBY_SHIFT                 29                                                  /*!< SIM_SOPT1: USBVSTBY Position            */
#define SIM_SOPT1_USBSSTBY_MASK                  (0x01UL << SIM_SOPT1_USBSSTBY_SHIFT)                /*!< SIM_SOPT1: USBSSTBY Mask                */
#define SIM_SOPT1_USBSSTBY_SHIFT                 30                                                  /*!< SIM_SOPT1: USBSSTBY Position            */
#define SIM_SOPT1_USBREGEN_MASK                  (0x01UL << SIM_SOPT1_USBREGEN_SHIFT)                /*!< SIM_SOPT1: USBREGEN Mask                */
#define SIM_SOPT1_USBREGEN_SHIFT                 31                                                  /*!< SIM_SOPT1: USBREGEN Position            */
/* ------- SOPT1CFG Bit Fields                      ------ */
#define SIM_SOPT1CFG_URWE_MASK                   (0x01UL << SIM_SOPT1CFG_URWE_SHIFT)                 /*!< SIM_SOPT1CFG: URWE Mask                 */
#define SIM_SOPT1CFG_URWE_SHIFT                  24                                                  /*!< SIM_SOPT1CFG: URWE Position             */
#define SIM_SOPT1CFG_UVSWE_MASK                  (0x01UL << SIM_SOPT1CFG_UVSWE_SHIFT)                /*!< SIM_SOPT1CFG: UVSWE Mask                */
#define SIM_SOPT1CFG_UVSWE_SHIFT                 25                                                  /*!< SIM_SOPT1CFG: UVSWE Position            */
#define SIM_SOPT1CFG_USSWE_MASK                  (0x01UL << SIM_SOPT1CFG_USSWE_SHIFT)                /*!< SIM_SOPT1CFG: USSWE Mask                */
#define SIM_SOPT1CFG_USSWE_SHIFT                 26                                                  /*!< SIM_SOPT1CFG: USSWE Position            */
/* ------- SOPT2 Bit Fields                         ------ */
#define SIM_SOPT2_RTCCLKOUTSEL_MASK              (0x01UL << SIM_SOPT2_RTCCLKOUTSEL_SHIFT)            /*!< SIM_SOPT2: RTCCLKOUTSEL Mask            */
#define SIM_SOPT2_RTCCLKOUTSEL_SHIFT             4                                                   /*!< SIM_SOPT2: RTCCLKOUTSEL Position        */
#define SIM_SOPT2_CLKOUTSEL_MASK                 (0x07UL << SIM_SOPT2_CLKOUTSEL_SHIFT)               /*!< SIM_SOPT2: CLKOUTSEL Mask               */
#define SIM_SOPT2_CLKOUTSEL_SHIFT                5                                                   /*!< SIM_SOPT2: CLKOUTSEL Position           */
#define SIM_SOPT2_CLKOUTSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_CLKOUTSEL_SHIFT))&SIM_SOPT2_CLKOUTSEL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_FBSL_MASK                      (0x03UL << SIM_SOPT2_FBSL_SHIFT)                    /*!< SIM_SOPT2: FBSL Mask                    */
#define SIM_SOPT2_FBSL_SHIFT                     8                                                   /*!< SIM_SOPT2: FBSL Position                */
#define SIM_SOPT2_FBSL(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_FBSL_SHIFT))&SIM_SOPT2_FBSL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_TRACECLKSEL_MASK               (0x01UL << SIM_SOPT2_TRACECLKSEL_SHIFT)             /*!< SIM_SOPT2: TRACECLKSEL Mask             */
#define SIM_SOPT2_TRACECLKSEL_SHIFT              12                                                  /*!< SIM_SOPT2: TRACECLKSEL Position         */
#define SIM_SOPT2_PLLFLLSEL_MASK                 (0x03UL << SIM_SOPT2_PLLFLLSEL_SHIFT)               /*!< SIM_SOPT2: PLLFLLSEL Mask               */
#define SIM_SOPT2_PLLFLLSEL_SHIFT                16                                                  /*!< SIM_SOPT2: PLLFLLSEL Position           */
#define SIM_SOPT2_PLLFLLSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_PLLFLLSEL_SHIFT))&SIM_SOPT2_PLLFLLSEL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_USBSRC_MASK                    (0x01UL << SIM_SOPT2_USBSRC_SHIFT)                  /*!< SIM_SOPT2: USBSRC Mask                  */
#define SIM_SOPT2_USBSRC_SHIFT                   18                                                  /*!< SIM_SOPT2: USBSRC Position              */
#define SIM_SOPT2_LPUARTSRC_MASK                 (0x03UL << SIM_SOPT2_LPUARTSRC_SHIFT)               /*!< SIM_SOPT2: LPUARTSRC Mask               */
#define SIM_SOPT2_LPUARTSRC_SHIFT                26                                                  /*!< SIM_SOPT2: LPUARTSRC Position           */
#define SIM_SOPT2_LPUARTSRC(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_LPUARTSRC_SHIFT))&SIM_SOPT2_LPUARTSRC_MASK) /*!< SIM_SOPT2                               */
/* ------- SOPT4 Bit Fields                         ------ */
#define SIM_SOPT4_FTM0FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM0FLT0_SHIFT)                /*!< SIM_SOPT4: FTM0FLT0 Mask                */
#define SIM_SOPT4_FTM0FLT0_SHIFT                 0                                                   /*!< SIM_SOPT4: FTM0FLT0 Position            */
#define SIM_SOPT4_FTM0FLT1_MASK                  (0x01UL << SIM_SOPT4_FTM0FLT1_SHIFT)                /*!< SIM_SOPT4: FTM0FLT1 Mask                */
#define SIM_SOPT4_FTM0FLT1_SHIFT                 1                                                   /*!< SIM_SOPT4: FTM0FLT1 Position            */
#define SIM_SOPT4_FTM1FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM1FLT0_SHIFT)                /*!< SIM_SOPT4: FTM1FLT0 Mask                */
#define SIM_SOPT4_FTM1FLT0_SHIFT                 4                                                   /*!< SIM_SOPT4: FTM1FLT0 Position            */
#define SIM_SOPT4_FTM2FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM2FLT0_SHIFT)                /*!< SIM_SOPT4: FTM2FLT0 Mask                */
#define SIM_SOPT4_FTM2FLT0_SHIFT                 8                                                   /*!< SIM_SOPT4: FTM2FLT0 Position            */
#define SIM_SOPT4_FTM3FLT0_MASK                  (0x01UL << SIM_SOPT4_FTM3FLT0_SHIFT)                /*!< SIM_SOPT4: FTM3FLT0 Mask                */
#define SIM_SOPT4_FTM3FLT0_SHIFT                 12                                                  /*!< SIM_SOPT4: FTM3FLT0 Position            */
#define SIM_SOPT4_FTM1CH0SRC_MASK                (0x03UL << SIM_SOPT4_FTM1CH0SRC_SHIFT)              /*!< SIM_SOPT4: FTM1CH0SRC Mask              */
#define SIM_SOPT4_FTM1CH0SRC_SHIFT               18                                                  /*!< SIM_SOPT4: FTM1CH0SRC Position          */
#define SIM_SOPT4_FTM1CH0SRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT4_FTM1CH0SRC_SHIFT))&SIM_SOPT4_FTM1CH0SRC_MASK) /*!< SIM_SOPT4                               */
#define SIM_SOPT4_FTM2CH0SRC_MASK                (0x03UL << SIM_SOPT4_FTM2CH0SRC_SHIFT)              /*!< SIM_SOPT4: FTM2CH0SRC Mask              */
#define SIM_SOPT4_FTM2CH0SRC_SHIFT               20                                                  /*!< SIM_SOPT4: FTM2CH0SRC Position          */
#define SIM_SOPT4_FTM2CH0SRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT4_FTM2CH0SRC_SHIFT))&SIM_SOPT4_FTM2CH0SRC_MASK) /*!< SIM_SOPT4                               */
#define SIM_SOPT4_FTM2CH1SRC_MASK                (0x01UL << SIM_SOPT4_FTM2CH1SRC_SHIFT)              /*!< SIM_SOPT4: FTM2CH1SRC Mask              */
#define SIM_SOPT4_FTM2CH1SRC_SHIFT               22                                                  /*!< SIM_SOPT4: FTM2CH1SRC Position          */
#define SIM_SOPT4_FTM0CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM0CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM0CLKSEL Mask              */
#define SIM_SOPT4_FTM0CLKSEL_SHIFT               24                                                  /*!< SIM_SOPT4: FTM0CLKSEL Position          */
#define SIM_SOPT4_FTM1CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM1CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM1CLKSEL Mask              */
#define SIM_SOPT4_FTM1CLKSEL_SHIFT               25                                                  /*!< SIM_SOPT4: FTM1CLKSEL Position          */
#define SIM_SOPT4_FTM2CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM2CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM2CLKSEL Mask              */
#define SIM_SOPT4_FTM2CLKSEL_SHIFT               26                                                  /*!< SIM_SOPT4: FTM2CLKSEL Position          */
#define SIM_SOPT4_FTM3CLKSEL_MASK                (0x01UL << SIM_SOPT4_FTM3CLKSEL_SHIFT)              /*!< SIM_SOPT4: FTM3CLKSEL Mask              */
#define SIM_SOPT4_FTM3CLKSEL_SHIFT               27                                                  /*!< SIM_SOPT4: FTM3CLKSEL Position          */
#define SIM_SOPT4_FTM0TRG0SRC_MASK               (0x01UL << SIM_SOPT4_FTM0TRG0SRC_SHIFT)             /*!< SIM_SOPT4: FTM0TRG0SRC Mask             */
#define SIM_SOPT4_FTM0TRG0SRC_SHIFT              28                                                  /*!< SIM_SOPT4: FTM0TRG0SRC Position         */
#define SIM_SOPT4_FTM0TRG1SRC_MASK               (0x01UL << SIM_SOPT4_FTM0TRG1SRC_SHIFT)             /*!< SIM_SOPT4: FTM0TRG1SRC Mask             */
#define SIM_SOPT4_FTM0TRG1SRC_SHIFT              29                                                  /*!< SIM_SOPT4: FTM0TRG1SRC Position         */
#define SIM_SOPT4_FTM3TRG0SRC_MASK               (0x01UL << SIM_SOPT4_FTM3TRG0SRC_SHIFT)             /*!< SIM_SOPT4: FTM3TRG0SRC Mask             */
#define SIM_SOPT4_FTM3TRG0SRC_SHIFT              30                                                  /*!< SIM_SOPT4: FTM3TRG0SRC Position         */
#define SIM_SOPT4_FTM3TRG1SRC_MASK               (0x01UL << SIM_SOPT4_FTM3TRG1SRC_SHIFT)             /*!< SIM_SOPT4: FTM3TRG1SRC Mask             */
#define SIM_SOPT4_FTM3TRG1SRC_SHIFT              31                                                  /*!< SIM_SOPT4: FTM3TRG1SRC Position         */
/* ------- SOPT5 Bit Fields                         ------ */
#define SIM_SOPT5_UART0TXSRC_MASK                (0x03UL << SIM_SOPT5_UART0TXSRC_SHIFT)              /*!< SIM_SOPT5: UART0TXSRC Mask              */
#define SIM_SOPT5_UART0TXSRC_SHIFT               0                                                   /*!< SIM_SOPT5: UART0TXSRC Position          */
#define SIM_SOPT5_UART0TXSRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT5_UART0TXSRC_SHIFT))&SIM_SOPT5_UART0TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART0RXSRC_MASK                (0x03UL << SIM_SOPT5_UART0RXSRC_SHIFT)              /*!< SIM_SOPT5: UART0RXSRC Mask              */
#define SIM_SOPT5_UART0RXSRC_SHIFT               2                                                   /*!< SIM_SOPT5: UART0RXSRC Position          */
#define SIM_SOPT5_UART0RXSRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT5_UART0RXSRC_SHIFT))&SIM_SOPT5_UART0RXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART1TXSRC_MASK                (0x03UL << SIM_SOPT5_UART1TXSRC_SHIFT)              /*!< SIM_SOPT5: UART1TXSRC Mask              */
#define SIM_SOPT5_UART1TXSRC_SHIFT               4                                                   /*!< SIM_SOPT5: UART1TXSRC Position          */
#define SIM_SOPT5_UART1TXSRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT5_UART1TXSRC_SHIFT))&SIM_SOPT5_UART1TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART1RXSRC_MASK                (0x03UL << SIM_SOPT5_UART1RXSRC_SHIFT)              /*!< SIM_SOPT5: UART1RXSRC Mask              */
#define SIM_SOPT5_UART1RXSRC_SHIFT               6                                                   /*!< SIM_SOPT5: UART1RXSRC Position          */
#define SIM_SOPT5_UART1RXSRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT5_UART1RXSRC_SHIFT))&SIM_SOPT5_UART1RXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_LPUART0RXSRC_MASK              (0x03UL << SIM_SOPT5_LPUART0RXSRC_SHIFT)            /*!< SIM_SOPT5: LPUART0RXSRC Mask            */
#define SIM_SOPT5_LPUART0RXSRC_SHIFT             18                                                  /*!< SIM_SOPT5: LPUART0RXSRC Position        */
#define SIM_SOPT5_LPUART0RXSRC(x)                (((uint32_t)(((uint32_t)(x))<<SIM_SOPT5_LPUART0RXSRC_SHIFT))&SIM_SOPT5_LPUART0RXSRC_MASK) /*!< SIM_SOPT5                               */
/* ------- SOPT7 Bit Fields                         ------ */
#define SIM_SOPT7_ADC0TRGSEL_MASK                (0x0FUL << SIM_SOPT7_ADC0TRGSEL_SHIFT)              /*!< SIM_SOPT7: ADC0TRGSEL Mask              */
#define SIM_SOPT7_ADC0TRGSEL_SHIFT               0                                                   /*!< SIM_SOPT7: ADC0TRGSEL Position          */
#define SIM_SOPT7_ADC0TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT7_ADC0TRGSEL_SHIFT))&SIM_SOPT7_ADC0TRGSEL_MASK) /*!< SIM_SOPT7                               */
#define SIM_SOPT7_ADC0PRETRGSEL_MASK             (0x01UL << SIM_SOPT7_ADC0PRETRGSEL_SHIFT)           /*!< SIM_SOPT7: ADC0PRETRGSEL Mask           */
#define SIM_SOPT7_ADC0PRETRGSEL_SHIFT            4                                                   /*!< SIM_SOPT7: ADC0PRETRGSEL Position       */
#define SIM_SOPT7_ADC0ALTTRGEN_MASK              (0x01UL << SIM_SOPT7_ADC0ALTTRGEN_SHIFT)            /*!< SIM_SOPT7: ADC0ALTTRGEN Mask            */
#define SIM_SOPT7_ADC0ALTTRGEN_SHIFT             7                                                   /*!< SIM_SOPT7: ADC0ALTTRGEN Position        */
#define SIM_SOPT7_ADC1TRGSEL_MASK                (0x0FUL << SIM_SOPT7_ADC1TRGSEL_SHIFT)              /*!< SIM_SOPT7: ADC1TRGSEL Mask              */
#define SIM_SOPT7_ADC1TRGSEL_SHIFT               8                                                   /*!< SIM_SOPT7: ADC1TRGSEL Position          */
#define SIM_SOPT7_ADC1TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT7_ADC1TRGSEL_SHIFT))&SIM_SOPT7_ADC1TRGSEL_MASK) /*!< SIM_SOPT7                               */
#define SIM_SOPT7_ADC1PRETRGSEL_MASK             (0x01UL << SIM_SOPT7_ADC1PRETRGSEL_SHIFT)           /*!< SIM_SOPT7: ADC1PRETRGSEL Mask           */
#define SIM_SOPT7_ADC1PRETRGSEL_SHIFT            12                                                  /*!< SIM_SOPT7: ADC1PRETRGSEL Position       */
#define SIM_SOPT7_ADC1ALTTRGEN_MASK              (0x01UL << SIM_SOPT7_ADC1ALTTRGEN_SHIFT)            /*!< SIM_SOPT7: ADC1ALTTRGEN Mask            */
#define SIM_SOPT7_ADC1ALTTRGEN_SHIFT             15                                                  /*!< SIM_SOPT7: ADC1ALTTRGEN Position        */
/* ------- SOPT8 Bit Fields                         ------ */
#define SIM_SOPT8_FTM0SYNCBIT_MASK               (0x01UL << SIM_SOPT8_FTM0SYNCBIT_SHIFT)             /*!< SIM_SOPT8: FTM0SYNCBIT Mask             */
#define SIM_SOPT8_FTM0SYNCBIT_SHIFT              0                                                   /*!< SIM_SOPT8: FTM0SYNCBIT Position         */
#define SIM_SOPT8_FTM1SYNCBIT_MASK               (0x01UL << SIM_SOPT8_FTM1SYNCBIT_SHIFT)             /*!< SIM_SOPT8: FTM1SYNCBIT Mask             */
#define SIM_SOPT8_FTM1SYNCBIT_SHIFT              1                                                   /*!< SIM_SOPT8: FTM1SYNCBIT Position         */
#define SIM_SOPT8_FTM2SYNCBIT_MASK               (0x01UL << SIM_SOPT8_FTM2SYNCBIT_SHIFT)             /*!< SIM_SOPT8: FTM2SYNCBIT Mask             */
#define SIM_SOPT8_FTM2SYNCBIT_SHIFT              2                                                   /*!< SIM_SOPT8: FTM2SYNCBIT Position         */
#define SIM_SOPT8_FTM3SYNCBIT_MASK               (0x01UL << SIM_SOPT8_FTM3SYNCBIT_SHIFT)             /*!< SIM_SOPT8: FTM3SYNCBIT Mask             */
#define SIM_SOPT8_FTM3SYNCBIT_SHIFT              3                                                   /*!< SIM_SOPT8: FTM3SYNCBIT Position         */
#define SIM_SOPT8_FTM0OCH0SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH0SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH0SRC Mask             */
#define SIM_SOPT8_FTM0OCH0SRC_SHIFT              16                                                  /*!< SIM_SOPT8: FTM0OCH0SRC Position         */
#define SIM_SOPT8_FTM0OCH1SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH1SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH1SRC Mask             */
#define SIM_SOPT8_FTM0OCH1SRC_SHIFT              17                                                  /*!< SIM_SOPT8: FTM0OCH1SRC Position         */
#define SIM_SOPT8_FTM0OCH2SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH2SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH2SRC Mask             */
#define SIM_SOPT8_FTM0OCH2SRC_SHIFT              18                                                  /*!< SIM_SOPT8: FTM0OCH2SRC Position         */
#define SIM_SOPT8_FTM0OCH3SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH3SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH3SRC Mask             */
#define SIM_SOPT8_FTM0OCH3SRC_SHIFT              19                                                  /*!< SIM_SOPT8: FTM0OCH3SRC Position         */
#define SIM_SOPT8_FTM0OCH4SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH4SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH4SRC Mask             */
#define SIM_SOPT8_FTM0OCH4SRC_SHIFT              20                                                  /*!< SIM_SOPT8: FTM0OCH4SRC Position         */
#define SIM_SOPT8_FTM0OCH5SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH5SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH5SRC Mask             */
#define SIM_SOPT8_FTM0OCH5SRC_SHIFT              21                                                  /*!< SIM_SOPT8: FTM0OCH5SRC Position         */
#define SIM_SOPT8_FTM0OCH6SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH6SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH6SRC Mask             */
#define SIM_SOPT8_FTM0OCH6SRC_SHIFT              22                                                  /*!< SIM_SOPT8: FTM0OCH6SRC Position         */
#define SIM_SOPT8_FTM0OCH7SRC_MASK               (0x01UL << SIM_SOPT8_FTM0OCH7SRC_SHIFT)             /*!< SIM_SOPT8: FTM0OCH7SRC Mask             */
#define SIM_SOPT8_FTM0OCH7SRC_SHIFT              23                                                  /*!< SIM_SOPT8: FTM0OCH7SRC Position         */
#define SIM_SOPT8_FTM3OCH0SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH0SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH0SRC Mask             */
#define SIM_SOPT8_FTM3OCH0SRC_SHIFT              24                                                  /*!< SIM_SOPT8: FTM3OCH0SRC Position         */
#define SIM_SOPT8_FTM3OCH1SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH1SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH1SRC Mask             */
#define SIM_SOPT8_FTM3OCH1SRC_SHIFT              25                                                  /*!< SIM_SOPT8: FTM3OCH1SRC Position         */
#define SIM_SOPT8_FTM3OCH2SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH2SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH2SRC Mask             */
#define SIM_SOPT8_FTM3OCH2SRC_SHIFT              26                                                  /*!< SIM_SOPT8: FTM3OCH2SRC Position         */
#define SIM_SOPT8_FTM3OCH3SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH3SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH3SRC Mask             */
#define SIM_SOPT8_FTM3OCH3SRC_SHIFT              27                                                  /*!< SIM_SOPT8: FTM3OCH3SRC Position         */
#define SIM_SOPT8_FTM3OCH4SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH4SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH4SRC Mask             */
#define SIM_SOPT8_FTM3OCH4SRC_SHIFT              28                                                  /*!< SIM_SOPT8: FTM3OCH4SRC Position         */
#define SIM_SOPT8_FTM3OCH5SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH5SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH5SRC Mask             */
#define SIM_SOPT8_FTM3OCH5SRC_SHIFT              29                                                  /*!< SIM_SOPT8: FTM3OCH5SRC Position         */
#define SIM_SOPT8_FTM3OCH6SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH6SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH6SRC Mask             */
#define SIM_SOPT8_FTM3OCH6SRC_SHIFT              30                                                  /*!< SIM_SOPT8: FTM3OCH6SRC Position         */
#define SIM_SOPT8_FTM3OCH7SRC_MASK               (0x01UL << SIM_SOPT8_FTM3OCH7SRC_SHIFT)             /*!< SIM_SOPT8: FTM3OCH7SRC Mask             */
#define SIM_SOPT8_FTM3OCH7SRC_SHIFT              31                                                  /*!< SIM_SOPT8: FTM3OCH7SRC Position         */
/* ------- SDID Bit Fields                          ------ */
#define SIM_SDID_PINID_MASK                      (0x0FUL << SIM_SDID_PINID_SHIFT)                    /*!< SIM_SDID: PINID Mask                    */
#define SIM_SDID_PINID_SHIFT                     0                                                   /*!< SIM_SDID: PINID Position                */
#define SIM_SDID_PINID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_PINID_SHIFT))&SIM_SDID_PINID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_FAMID_MASK                      (0x07UL << SIM_SDID_FAMID_SHIFT)                    /*!< SIM_SDID: FAMID Mask                    */
#define SIM_SDID_FAMID_SHIFT                     4                                                   /*!< SIM_SDID: FAMID Position                */
#define SIM_SDID_FAMID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_FAMID_SHIFT))&SIM_SDID_FAMID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_DIEID_MASK                      (0x1FUL << SIM_SDID_DIEID_SHIFT)                    /*!< SIM_SDID: DIEID Mask                    */
#define SIM_SDID_DIEID_SHIFT                     7                                                   /*!< SIM_SDID: DIEID Position                */
#define SIM_SDID_DIEID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_DIEID_SHIFT))&SIM_SDID_DIEID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_REVID_MASK                      (0x0FUL << SIM_SDID_REVID_SHIFT)                    /*!< SIM_SDID: REVID Mask                    */
#define SIM_SDID_REVID_SHIFT                     12                                                  /*!< SIM_SDID: REVID Position                */
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_REVID_SHIFT))&SIM_SDID_REVID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SERIESID_MASK                   (0x0FUL << SIM_SDID_SERIESID_SHIFT)                 /*!< SIM_SDID: SERIESID Mask                 */
#define SIM_SDID_SERIESID_SHIFT                  20                                                  /*!< SIM_SDID: SERIESID Position             */
#define SIM_SDID_SERIESID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SERIESID_SHIFT))&SIM_SDID_SERIESID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SUBFAMID_MASK                   (0x0FUL << SIM_SDID_SUBFAMID_SHIFT)                 /*!< SIM_SDID: SUBFAMID Mask                 */
#define SIM_SDID_SUBFAMID_SHIFT                  24                                                  /*!< SIM_SDID: SUBFAMID Position             */
#define SIM_SDID_SUBFAMID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SUBFAMID_SHIFT))&SIM_SDID_SUBFAMID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_FAMILYID_MASK                   (0x0FUL << SIM_SDID_FAMILYID_SHIFT)                 /*!< SIM_SDID: FAMILYID Mask                 */
#define SIM_SDID_FAMILYID_SHIFT                  28                                                  /*!< SIM_SDID: FAMILYID Position             */
#define SIM_SDID_FAMILYID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_FAMILYID_SHIFT))&SIM_SDID_FAMILYID_MASK) /*!< SIM_SDID                                */
/* ------- SCGC4 Bit Fields                         ------ */
#define SIM_SCGC4_EWM_MASK                       (0x01UL << SIM_SCGC4_EWM_SHIFT)                     /*!< SIM_SCGC4: EWM Mask                     */
#define SIM_SCGC4_EWM_SHIFT                      1                                                   /*!< SIM_SCGC4: EWM Position                 */
#define SIM_SCGC4_I2C0_MASK                      (0x01UL << SIM_SCGC4_I2C0_SHIFT)                    /*!< SIM_SCGC4: I2C0 Mask                    */
#define SIM_SCGC4_I2C0_SHIFT                     6                                                   /*!< SIM_SCGC4: I2C0 Position                */
#define SIM_SCGC4_I2C1_MASK                      (0x01UL << SIM_SCGC4_I2C1_SHIFT)                    /*!< SIM_SCGC4: I2C1 Mask                    */
#define SIM_SCGC4_I2C1_SHIFT                     7                                                   /*!< SIM_SCGC4: I2C1 Position                */
#define SIM_SCGC4_UART0_MASK                     (0x01UL << SIM_SCGC4_UART0_SHIFT)                   /*!< SIM_SCGC4: UART0 Mask                   */
#define SIM_SCGC4_UART0_SHIFT                    10                                                  /*!< SIM_SCGC4: UART0 Position               */
#define SIM_SCGC4_UART1_MASK                     (0x01UL << SIM_SCGC4_UART1_SHIFT)                   /*!< SIM_SCGC4: UART1 Mask                   */
#define SIM_SCGC4_UART1_SHIFT                    11                                                  /*!< SIM_SCGC4: UART1 Position               */
#define SIM_SCGC4_UART2_MASK                     (0x01UL << SIM_SCGC4_UART2_SHIFT)                   /*!< SIM_SCGC4: UART2 Mask                   */
#define SIM_SCGC4_UART2_SHIFT                    12                                                  /*!< SIM_SCGC4: UART2 Position               */
#define SIM_SCGC4_USBOTG_MASK                    (0x01UL << SIM_SCGC4_USBOTG_SHIFT)                  /*!< SIM_SCGC4: USBOTG Mask                  */
#define SIM_SCGC4_USBOTG_SHIFT                   18                                                  /*!< SIM_SCGC4: USBOTG Position              */
#define SIM_SCGC4_CMP_MASK                       (0x01UL << SIM_SCGC4_CMP_SHIFT)                     /*!< SIM_SCGC4: CMP Mask                     */
#define SIM_SCGC4_CMP_SHIFT                      19                                                  /*!< SIM_SCGC4: CMP Position                 */
#define SIM_SCGC4_VREF_MASK                      (0x01UL << SIM_SCGC4_VREF_SHIFT)                    /*!< SIM_SCGC4: VREF Mask                    */
#define SIM_SCGC4_VREF_SHIFT                     20                                                  /*!< SIM_SCGC4: VREF Position                */
/* ------- SCGC5 Bit Fields                         ------ */
#define SIM_SCGC5_LPTMR_MASK                     (0x01UL << SIM_SCGC5_LPTMR_SHIFT)                   /*!< SIM_SCGC5: LPTMR Mask                   */
#define SIM_SCGC5_LPTMR_SHIFT                    0                                                   /*!< SIM_SCGC5: LPTMR Position               */
#define SIM_SCGC5_PORTA_MASK                     (0x01UL << SIM_SCGC5_PORTA_SHIFT)                   /*!< SIM_SCGC5: PORTA Mask                   */
#define SIM_SCGC5_PORTA_SHIFT                    9                                                   /*!< SIM_SCGC5: PORTA Position               */
#define SIM_SCGC5_PORTB_MASK                     (0x01UL << SIM_SCGC5_PORTB_SHIFT)                   /*!< SIM_SCGC5: PORTB Mask                   */
#define SIM_SCGC5_PORTB_SHIFT                    10                                                  /*!< SIM_SCGC5: PORTB Position               */
#define SIM_SCGC5_PORTC_MASK                     (0x01UL << SIM_SCGC5_PORTC_SHIFT)                   /*!< SIM_SCGC5: PORTC Mask                   */
#define SIM_SCGC5_PORTC_SHIFT                    11                                                  /*!< SIM_SCGC5: PORTC Position               */
#define SIM_SCGC5_PORTD_MASK                     (0x01UL << SIM_SCGC5_PORTD_SHIFT)                   /*!< SIM_SCGC5: PORTD Mask                   */
#define SIM_SCGC5_PORTD_SHIFT                    12                                                  /*!< SIM_SCGC5: PORTD Position               */
#define SIM_SCGC5_PORTE_MASK                     (0x01UL << SIM_SCGC5_PORTE_SHIFT)                   /*!< SIM_SCGC5: PORTE Mask                   */
#define SIM_SCGC5_PORTE_SHIFT                    13                                                  /*!< SIM_SCGC5: PORTE Position               */
/* ------- SCGC6 Bit Fields                         ------ */
#define SIM_SCGC6_FTF_MASK                       (0x01UL << SIM_SCGC6_FTF_SHIFT)                     /*!< SIM_SCGC6: FTF Mask                     */
#define SIM_SCGC6_FTF_SHIFT                      0                                                   /*!< SIM_SCGC6: FTF Position                 */
#define SIM_SCGC6_DMAMUX0_MASK                   (0x01UL << SIM_SCGC6_DMAMUX0_SHIFT)                 /*!< SIM_SCGC6: DMAMUX0 Mask                 */
#define SIM_SCGC6_DMAMUX0_SHIFT                  1                                                   /*!< SIM_SCGC6: DMAMUX0 Position             */
#define SIM_SCGC6_FTM3_MASK                      (0x01UL << SIM_SCGC6_FTM3_SHIFT)                    /*!< SIM_SCGC6: FTM3 Mask                    */
#define SIM_SCGC6_FTM3_SHIFT                     6                                                   /*!< SIM_SCGC6: FTM3 Position                */
#define SIM_SCGC6_ADC1_MASK                      (0x01UL << SIM_SCGC6_ADC1_SHIFT)                    /*!< SIM_SCGC6: ADC1 Mask                    */
#define SIM_SCGC6_ADC1_SHIFT                     7                                                   /*!< SIM_SCGC6: ADC1 Position                */
#define SIM_SCGC6_DAC1_MASK                      (0x01UL << SIM_SCGC6_DAC1_SHIFT)                    /*!< SIM_SCGC6: DAC1 Mask                    */
#define SIM_SCGC6_DAC1_SHIFT                     8                                                   /*!< SIM_SCGC6: DAC1 Position                */
#define SIM_SCGC6_RNGA_MASK                      (0x01UL << SIM_SCGC6_RNGA_SHIFT)                    /*!< SIM_SCGC6: RNGA Mask                    */
#define SIM_SCGC6_RNGA_SHIFT                     9                                                   /*!< SIM_SCGC6: RNGA Position                */
#define SIM_SCGC6_LPUART0_MASK                   (0x01UL << SIM_SCGC6_LPUART0_SHIFT)                 /*!< SIM_SCGC6: LPUART0 Mask                 */
#define SIM_SCGC6_LPUART0_SHIFT                  10                                                  /*!< SIM_SCGC6: LPUART0 Position             */
#define SIM_SCGC6_SPI0_MASK                      (0x01UL << SIM_SCGC6_SPI0_SHIFT)                    /*!< SIM_SCGC6: SPI0 Mask                    */
#define SIM_SCGC6_SPI0_SHIFT                     12                                                  /*!< SIM_SCGC6: SPI0 Position                */
#define SIM_SCGC6_SPI1_MASK                      (0x01UL << SIM_SCGC6_SPI1_SHIFT)                    /*!< SIM_SCGC6: SPI1 Mask                    */
#define SIM_SCGC6_SPI1_SHIFT                     13                                                  /*!< SIM_SCGC6: SPI1 Position                */
#define SIM_SCGC6_I2S_MASK                       (0x01UL << SIM_SCGC6_I2S_SHIFT)                     /*!< SIM_SCGC6: I2S Mask                     */
#define SIM_SCGC6_I2S_SHIFT                      15                                                  /*!< SIM_SCGC6: I2S Position                 */
#define SIM_SCGC6_CRC_MASK                       (0x01UL << SIM_SCGC6_CRC_SHIFT)                     /*!< SIM_SCGC6: CRC Mask                     */
#define SIM_SCGC6_CRC_SHIFT                      18                                                  /*!< SIM_SCGC6: CRC Position                 */
#define SIM_SCGC6_PDB_MASK                       (0x01UL << SIM_SCGC6_PDB_SHIFT)                     /*!< SIM_SCGC6: PDB Mask                     */
#define SIM_SCGC6_PDB_SHIFT                      22                                                  /*!< SIM_SCGC6: PDB Position                 */
#define SIM_SCGC6_PIT_MASK                       (0x01UL << SIM_SCGC6_PIT_SHIFT)                     /*!< SIM_SCGC6: PIT Mask                     */
#define SIM_SCGC6_PIT_SHIFT                      23                                                  /*!< SIM_SCGC6: PIT Position                 */
#define SIM_SCGC6_FTM0_MASK                      (0x01UL << SIM_SCGC6_FTM0_SHIFT)                    /*!< SIM_SCGC6: FTM0 Mask                    */
#define SIM_SCGC6_FTM0_SHIFT                     24                                                  /*!< SIM_SCGC6: FTM0 Position                */
#define SIM_SCGC6_FTM1_MASK                      (0x01UL << SIM_SCGC6_FTM1_SHIFT)                    /*!< SIM_SCGC6: FTM1 Mask                    */
#define SIM_SCGC6_FTM1_SHIFT                     25                                                  /*!< SIM_SCGC6: FTM1 Position                */
#define SIM_SCGC6_FTM2_MASK                      (0x01UL << SIM_SCGC6_FTM2_SHIFT)                    /*!< SIM_SCGC6: FTM2 Mask                    */
#define SIM_SCGC6_FTM2_SHIFT                     26                                                  /*!< SIM_SCGC6: FTM2 Position                */
#define SIM_SCGC6_ADC0_MASK                      (0x01UL << SIM_SCGC6_ADC0_SHIFT)                    /*!< SIM_SCGC6: ADC0 Mask                    */
#define SIM_SCGC6_ADC0_SHIFT                     27                                                  /*!< SIM_SCGC6: ADC0 Position                */
#define SIM_SCGC6_RTC_MASK                       (0x01UL << SIM_SCGC6_RTC_SHIFT)                     /*!< SIM_SCGC6: RTC Mask                     */
#define SIM_SCGC6_RTC_SHIFT                      29                                                  /*!< SIM_SCGC6: RTC Position                 */
#define SIM_SCGC6_DAC0_MASK                      (0x01UL << SIM_SCGC6_DAC0_SHIFT)                    /*!< SIM_SCGC6: DAC0 Mask                    */
#define SIM_SCGC6_DAC0_SHIFT                     31                                                  /*!< SIM_SCGC6: DAC0 Position                */
/* ------- SCGC7 Bit Fields                         ------ */
#define SIM_SCGC7_FLEXBUS_MASK                   (0x01UL << SIM_SCGC7_FLEXBUS_SHIFT)                 /*!< SIM_SCGC7: FLEXBUS Mask                 */
#define SIM_SCGC7_FLEXBUS_SHIFT                  0                                                   /*!< SIM_SCGC7: FLEXBUS Position             */
#define SIM_SCGC7_DMA_MASK                       (0x01UL << SIM_SCGC7_DMA_SHIFT)                     /*!< SIM_SCGC7: DMA Mask                     */
#define SIM_SCGC7_DMA_SHIFT                      1                                                   /*!< SIM_SCGC7: DMA Position                 */
/* ------- CLKDIV1 Bit Fields                       ------ */
#define SIM_CLKDIV1_OUTDIV4_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV4_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV4 Mask               */
#define SIM_CLKDIV1_OUTDIV4_SHIFT                16                                                  /*!< SIM_CLKDIV1: OUTDIV4 Position           */
#define SIM_CLKDIV1_OUTDIV4(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV4_SHIFT))&SIM_CLKDIV1_OUTDIV4_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV3_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV3_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV3 Mask               */
#define SIM_CLKDIV1_OUTDIV3_SHIFT                20                                                  /*!< SIM_CLKDIV1: OUTDIV3 Position           */
#define SIM_CLKDIV1_OUTDIV3(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV3_SHIFT))&SIM_CLKDIV1_OUTDIV3_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV2_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV2_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV2 Mask               */
#define SIM_CLKDIV1_OUTDIV2_SHIFT                24                                                  /*!< SIM_CLKDIV1: OUTDIV2 Position           */
#define SIM_CLKDIV1_OUTDIV2(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV2_SHIFT))&SIM_CLKDIV1_OUTDIV2_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV1_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV1_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV1 Mask               */
#define SIM_CLKDIV1_OUTDIV1_SHIFT                28                                                  /*!< SIM_CLKDIV1: OUTDIV1 Position           */
#define SIM_CLKDIV1_OUTDIV1(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV1_SHIFT))&SIM_CLKDIV1_OUTDIV1_MASK) /*!< SIM_CLKDIV1                             */
/* ------- CLKDIV2 Bit Fields                       ------ */
#define SIM_CLKDIV2_USBFRAC_MASK                 (0x01UL << SIM_CLKDIV2_USBFRAC_SHIFT)               /*!< SIM_CLKDIV2: USBFRAC Mask               */
#define SIM_CLKDIV2_USBFRAC_SHIFT                0                                                   /*!< SIM_CLKDIV2: USBFRAC Position           */
#define SIM_CLKDIV2_USBDIV_MASK                  (0x07UL << SIM_CLKDIV2_USBDIV_SHIFT)                /*!< SIM_CLKDIV2: USBDIV Mask                */
#define SIM_CLKDIV2_USBDIV_SHIFT                 1                                                   /*!< SIM_CLKDIV2: USBDIV Position            */
#define SIM_CLKDIV2_USBDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV2_USBDIV_SHIFT))&SIM_CLKDIV2_USBDIV_MASK) /*!< SIM_CLKDIV2                             */
/* ------- FCFG1 Bit Fields                         ------ */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x01UL << SIM_FCFG1_FLASHDIS_SHIFT)                /*!< SIM_FCFG1: FLASHDIS Mask                */
#define SIM_FCFG1_FLASHDIS_SHIFT                 0                                                   /*!< SIM_FCFG1: FLASHDIS Position            */
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x01UL << SIM_FCFG1_FLASHDOZE_SHIFT)               /*!< SIM_FCFG1: FLASHDOZE Mask               */
#define SIM_FCFG1_FLASHDOZE_SHIFT                1                                                   /*!< SIM_FCFG1: FLASHDOZE Position           */
#define SIM_FCFG1_DEPART_MASK                    (0x0FUL << SIM_FCFG1_DEPART_SHIFT)                  /*!< SIM_FCFG1: DEPART Mask                  */
#define SIM_FCFG1_DEPART_SHIFT                   8                                                   /*!< SIM_FCFG1: DEPART Position              */
#define SIM_FCFG1_DEPART(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_DEPART_SHIFT))&SIM_FCFG1_DEPART_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_EESIZE_MASK                    (0x0FUL << SIM_FCFG1_EESIZE_SHIFT)                  /*!< SIM_FCFG1: EESIZE Mask                  */
#define SIM_FCFG1_EESIZE_SHIFT                   16                                                  /*!< SIM_FCFG1: EESIZE Position              */
#define SIM_FCFG1_EESIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_EESIZE_SHIFT))&SIM_FCFG1_EESIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_PFSIZE_MASK                    (0x0FUL << SIM_FCFG1_PFSIZE_SHIFT)                  /*!< SIM_FCFG1: PFSIZE Mask                  */
#define SIM_FCFG1_PFSIZE_SHIFT                   24                                                  /*!< SIM_FCFG1: PFSIZE Position              */
#define SIM_FCFG1_PFSIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_PFSIZE_SHIFT))&SIM_FCFG1_PFSIZE_MASK) /*!< SIM_FCFG1                               */
#define SIM_FCFG1_NVMSIZE_MASK                   (0x0FUL << SIM_FCFG1_NVMSIZE_SHIFT)                 /*!< SIM_FCFG1: NVMSIZE Mask                 */
#define SIM_FCFG1_NVMSIZE_SHIFT                  28                                                  /*!< SIM_FCFG1: NVMSIZE Position             */
#define SIM_FCFG1_NVMSIZE(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_NVMSIZE_SHIFT))&SIM_FCFG1_NVMSIZE_MASK) /*!< SIM_FCFG1                               */
/* ------- FCFG2 Bit Fields                         ------ */
#define SIM_FCFG2_MAXADDR1_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR1_SHIFT)                /*!< SIM_FCFG2: MAXADDR1 Mask                */
#define SIM_FCFG2_MAXADDR1_SHIFT                 16                                                  /*!< SIM_FCFG2: MAXADDR1 Position            */
#define SIM_FCFG2_MAXADDR1(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG2_MAXADDR1_SHIFT))&SIM_FCFG2_MAXADDR1_MASK) /*!< SIM_FCFG2                               */
#define SIM_FCFG2_MAXADDR0_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR0_SHIFT)                /*!< SIM_FCFG2: MAXADDR0 Mask                */
#define SIM_FCFG2_MAXADDR0_SHIFT                 24                                                  /*!< SIM_FCFG2: MAXADDR0 Position            */
#define SIM_FCFG2_MAXADDR0(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG2_MAXADDR0_SHIFT))&SIM_FCFG2_MAXADDR0_MASK) /*!< SIM_FCFG2                               */
/* ------- UIDH Bit Fields                          ------ */
#define SIM_UIDH_UID_MASK                        (0xFFFFFFFFUL << SIM_UIDH_UID_SHIFT)                /*!< SIM_UIDH: UID Mask                      */
#define SIM_UIDH_UID_SHIFT                       0                                                   /*!< SIM_UIDH: UID Position                  */
#define SIM_UIDH_UID(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_UIDH_UID_SHIFT))&SIM_UIDH_UID_MASK) /*!< SIM_UIDH                                */
/* ------- UIDMH Bit Fields                         ------ */
#define SIM_UIDMH_UID_MASK                       (0xFFFFFFFFUL << SIM_UIDMH_UID_SHIFT)               /*!< SIM_UIDMH: UID Mask                     */
#define SIM_UIDMH_UID_SHIFT                      0                                                   /*!< SIM_UIDMH: UID Position                 */
#define SIM_UIDMH_UID(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_UIDMH_UID_SHIFT))&SIM_UIDMH_UID_MASK) /*!< SIM_UIDMH                               */
/* ------- UIDML Bit Fields                         ------ */
#define SIM_UIDML_UID_MASK                       (0xFFFFFFFFUL << SIM_UIDML_UID_SHIFT)               /*!< SIM_UIDML: UID Mask                     */
#define SIM_UIDML_UID_SHIFT                      0                                                   /*!< SIM_UIDML: UID Position                 */
#define SIM_UIDML_UID(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_UIDML_UID_SHIFT))&SIM_UIDML_UID_MASK) /*!< SIM_UIDML                               */
/* ------- UIDL Bit Fields                          ------ */
#define SIM_UIDL_UID_MASK                        (0xFFFFFFFFUL << SIM_UIDL_UID_SHIFT)                /*!< SIM_UIDL: UID Mask                      */
#define SIM_UIDL_UID_SHIFT                       0                                                   /*!< SIM_UIDL: UID Position                  */
#define SIM_UIDL_UID(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_UIDL_UID_SHIFT))&SIM_UIDL_UID_MASK) /*!< SIM_UIDL                                */

/* SIM - Peripheral instance base addresses */
#define SIM_BasePtr                    0x40047000UL
#define SIM                            ((SIM_Type *) SIM_BasePtr)
#define SIM_BASE_PTR                   (SIM)

/* ================================================================================ */
/* ================           SMC (file:SMC_HSRUN)                 ================ */
/* ================================================================================ */

/**
 * @brief System Mode Controller
 */
typedef struct {                                /*!<       SMC Structure                                                */
   __IO uint8_t   PMPROT;                       /*!< 0000: Power Mode Protection Register                               */
   __IO uint8_t   PMCTRL;                       /*!< 0001: Power Mode Control Register                                  */
   __IO uint8_t   STOPCTRL;                     /*!< 0002: Stop Control Register                                        */
   __I  uint8_t   PMSTAT;                       /*!< 0003: Power Mode Status Register                                   */
} SMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PMPROT Bit Fields                        ------ */
#define SMC_PMPROT_AVLLS_MASK                    (0x01UL << SMC_PMPROT_AVLLS_SHIFT)                  /*!< SMC_PMPROT: AVLLS Mask                  */
#define SMC_PMPROT_AVLLS_SHIFT                   1                                                   /*!< SMC_PMPROT: AVLLS Position              */
#define SMC_PMPROT_ALLS_MASK                     (0x01UL << SMC_PMPROT_ALLS_SHIFT)                   /*!< SMC_PMPROT: ALLS Mask                   */
#define SMC_PMPROT_ALLS_SHIFT                    3                                                   /*!< SMC_PMPROT: ALLS Position               */
#define SMC_PMPROT_AVLP_MASK                     (0x01UL << SMC_PMPROT_AVLP_SHIFT)                   /*!< SMC_PMPROT: AVLP Mask                   */
#define SMC_PMPROT_AVLP_SHIFT                    5                                                   /*!< SMC_PMPROT: AVLP Position               */
#define SMC_PMPROT_AHSRUN_MASK                   (0x01UL << SMC_PMPROT_AHSRUN_SHIFT)                 /*!< SMC_PMPROT: AHSRUN Mask                 */
#define SMC_PMPROT_AHSRUN_SHIFT                  7                                                   /*!< SMC_PMPROT: AHSRUN Position             */
/* ------- PMCTRL Bit Fields                        ------ */
#define SMC_PMCTRL_STOPM_MASK                    (0x07UL << SMC_PMCTRL_STOPM_SHIFT)                  /*!< SMC_PMCTRL: STOPM Mask                  */
#define SMC_PMCTRL_STOPM_SHIFT                   0                                                   /*!< SMC_PMCTRL: STOPM Position              */
#define SMC_PMCTRL_STOPM(x)                      (((uint8_t)(((uint8_t)(x))<<SMC_PMCTRL_STOPM_SHIFT))&SMC_PMCTRL_STOPM_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_STOPA_MASK                    (0x01UL << SMC_PMCTRL_STOPA_SHIFT)                  /*!< SMC_PMCTRL: STOPA Mask                  */
#define SMC_PMCTRL_STOPA_SHIFT                   3                                                   /*!< SMC_PMCTRL: STOPA Position              */
#define SMC_PMCTRL_RUNM_MASK                     (0x03UL << SMC_PMCTRL_RUNM_SHIFT)                   /*!< SMC_PMCTRL: RUNM Mask                   */
#define SMC_PMCTRL_RUNM_SHIFT                    5                                                   /*!< SMC_PMCTRL: RUNM Position               */
#define SMC_PMCTRL_RUNM(x)                       (((uint8_t)(((uint8_t)(x))<<SMC_PMCTRL_RUNM_SHIFT))&SMC_PMCTRL_RUNM_MASK) /*!< SMC_PMCTRL                              */
/* ------- STOPCTRL Bit Fields                      ------ */
#define SMC_STOPCTRL_LLSM_MASK                   (0x07UL << SMC_STOPCTRL_LLSM_SHIFT)                 /*!< SMC_STOPCTRL: LLSM Mask                 */
#define SMC_STOPCTRL_LLSM_SHIFT                  0                                                   /*!< SMC_STOPCTRL: LLSM Position             */
#define SMC_STOPCTRL_LLSM(x)                     (((uint8_t)(((uint8_t)(x))<<SMC_STOPCTRL_LLSM_SHIFT))&SMC_STOPCTRL_LLSM_MASK) /*!< SMC_STOPCTRL                            */
#define SMC_STOPCTRL_PORPO_MASK                  (0x01UL << SMC_STOPCTRL_PORPO_SHIFT)                /*!< SMC_STOPCTRL: PORPO Mask                */
#define SMC_STOPCTRL_PORPO_SHIFT                 5                                                   /*!< SMC_STOPCTRL: PORPO Position            */
#define SMC_STOPCTRL_PSTOPO_MASK                 (0x03UL << SMC_STOPCTRL_PSTOPO_SHIFT)               /*!< SMC_STOPCTRL: PSTOPO Mask               */
#define SMC_STOPCTRL_PSTOPO_SHIFT                6                                                   /*!< SMC_STOPCTRL: PSTOPO Position           */
#define SMC_STOPCTRL_PSTOPO(x)                   (((uint8_t)(((uint8_t)(x))<<SMC_STOPCTRL_PSTOPO_SHIFT))&SMC_STOPCTRL_PSTOPO_MASK) /*!< SMC_STOPCTRL                            */
/* ------- PMSTAT Bit Fields                        ------ */
#define SMC_PMSTAT_PMSTAT_MASK                   (0xFFUL << SMC_PMSTAT_PMSTAT_SHIFT)                 /*!< SMC_PMSTAT: PMSTAT Mask                 */
#define SMC_PMSTAT_PMSTAT_SHIFT                  0                                                   /*!< SMC_PMSTAT: PMSTAT Position             */
#define SMC_PMSTAT_PMSTAT(x)                     (((uint8_t)(((uint8_t)(x))<<SMC_PMSTAT_PMSTAT_SHIFT))&SMC_PMSTAT_PMSTAT_MASK) /*!< SMC_PMSTAT                              */

/* SMC - Peripheral instance base addresses */
#define SMC_BasePtr                    0x4007E000UL
#define SMC                            ((SMC_Type *) SMC_BasePtr)
#define SMC_BASE_PTR                   (SMC)

/* ================================================================================ */
/* ================           SPI0 (file:SPI0_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
typedef struct {                                /*!<       SPI0 Structure                                               */
   __IO uint32_t  MCR;                          /*!< 0000: Module Configuration Register                                */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  TCR;                          /*!< 0008: Transfer Count Register                                      */
   union {                                      /*!< 0000: (size=0008)                                                  */
      __IO uint32_t  CTAR[2];                   /*!< 000C: Clock and Transfer Attributes Register (In Master Mode)      */
      __IO uint32_t  CTAR0_SLAVE;               /*!< 000C: Clock and Transfer Attributes Register (In Slave Mode)       */
   };
   __I  uint32_t  RESERVED1[6];                 /*!< 0014:                                                              */
   __IO uint32_t  SR;                           /*!< 002C: Status Register                                              */
   __IO uint32_t  RSER;                         /*!< 0030: DMA/Interrupt Request Select and Enable Register             */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  PUSHR;                     /*!< 0034: PUSH TX FIFO Register In Master Mode                         */
      __IO uint32_t  PUSHR_SLAVE;               /*!< 0034: PUSH TX FIFO Register In Slave Mode                          */
   };
   __I  uint32_t  POPR;                         /*!< 0038: POP RX FIFO Register                                         */
   __I  uint32_t  TXFR[4];                      /*!< 003C: Transmit FIFO                                                */
   __I  uint32_t  RESERVED2[12];                /*!< 004C:                                                              */
   __I  uint32_t  RXFR[4];                      /*!< 007C: Receive FIFO                                                 */
} SPI_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- MCR Bit Fields                           ------ */
#define SPI_MCR_HALT_MASK                        (0x01UL << SPI_MCR_HALT_SHIFT)                      /*!< SPI0_MCR: HALT Mask                     */
#define SPI_MCR_HALT_SHIFT                       0                                                   /*!< SPI0_MCR: HALT Position                 */
#define SPI_MCR_SMPL_PT_MASK                     (0x03UL << SPI_MCR_SMPL_PT_SHIFT)                   /*!< SPI0_MCR: SMPL_PT Mask                  */
#define SPI_MCR_SMPL_PT_SHIFT                    8                                                   /*!< SPI0_MCR: SMPL_PT Position              */
#define SPI_MCR_SMPL_PT(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_MCR_SMPL_PT_SHIFT))&SPI_MCR_SMPL_PT_MASK) /*!< SPI0_MCR                                */
#define SPI_MCR_CLR_RXF_MASK                     (0x01UL << SPI_MCR_CLR_RXF_SHIFT)                   /*!< SPI0_MCR: CLR_RXF Mask                  */
#define SPI_MCR_CLR_RXF_SHIFT                    10                                                  /*!< SPI0_MCR: CLR_RXF Position              */
#define SPI_MCR_CLR_TXF_MASK                     (0x01UL << SPI_MCR_CLR_TXF_SHIFT)                   /*!< SPI0_MCR: CLR_TXF Mask                  */
#define SPI_MCR_CLR_TXF_SHIFT                    11                                                  /*!< SPI0_MCR: CLR_TXF Position              */
#define SPI_MCR_DIS_RXF_MASK                     (0x01UL << SPI_MCR_DIS_RXF_SHIFT)                   /*!< SPI0_MCR: DIS_RXF Mask                  */
#define SPI_MCR_DIS_RXF_SHIFT                    12                                                  /*!< SPI0_MCR: DIS_RXF Position              */
#define SPI_MCR_DIS_TXF_MASK                     (0x01UL << SPI_MCR_DIS_TXF_SHIFT)                   /*!< SPI0_MCR: DIS_TXF Mask                  */
#define SPI_MCR_DIS_TXF_SHIFT                    13                                                  /*!< SPI0_MCR: DIS_TXF Position              */
#define SPI_MCR_MDIS_MASK                        (0x01UL << SPI_MCR_MDIS_SHIFT)                      /*!< SPI0_MCR: MDIS Mask                     */
#define SPI_MCR_MDIS_SHIFT                       14                                                  /*!< SPI0_MCR: MDIS Position                 */
#define SPI_MCR_DOZE_MASK                        (0x01UL << SPI_MCR_DOZE_SHIFT)                      /*!< SPI0_MCR: DOZE Mask                     */
#define SPI_MCR_DOZE_SHIFT                       15                                                  /*!< SPI0_MCR: DOZE Position                 */
#define SPI_MCR_PCSIS_MASK                       (0x3FUL << SPI_MCR_PCSIS_SHIFT)                     /*!< SPI0_MCR: PCSIS Mask                    */
#define SPI_MCR_PCSIS_SHIFT                      16                                                  /*!< SPI0_MCR: PCSIS Position                */
#define SPI_MCR_PCSIS(x)                         (((uint32_t)(((uint32_t)(x))<<SPI_MCR_PCSIS_SHIFT))&SPI_MCR_PCSIS_MASK) /*!< SPI0_MCR                                */
#define SPI_MCR_ROOE_MASK                        (0x01UL << SPI_MCR_ROOE_SHIFT)                      /*!< SPI0_MCR: ROOE Mask                     */
#define SPI_MCR_ROOE_SHIFT                       24                                                  /*!< SPI0_MCR: ROOE Position                 */
#define SPI_MCR_PCSSE_MASK                       (0x01UL << SPI_MCR_PCSSE_SHIFT)                     /*!< SPI0_MCR: PCSSE Mask                    */
#define SPI_MCR_PCSSE_SHIFT                      25                                                  /*!< SPI0_MCR: PCSSE Position                */
#define SPI_MCR_MTFE_MASK                        (0x01UL << SPI_MCR_MTFE_SHIFT)                      /*!< SPI0_MCR: MTFE Mask                     */
#define SPI_MCR_MTFE_SHIFT                       26                                                  /*!< SPI0_MCR: MTFE Position                 */
#define SPI_MCR_FRZ_MASK                         (0x01UL << SPI_MCR_FRZ_SHIFT)                       /*!< SPI0_MCR: FRZ Mask                      */
#define SPI_MCR_FRZ_SHIFT                        27                                                  /*!< SPI0_MCR: FRZ Position                  */
#define SPI_MCR_DCONF_MASK                       (0x03UL << SPI_MCR_DCONF_SHIFT)                     /*!< SPI0_MCR: DCONF Mask                    */
#define SPI_MCR_DCONF_SHIFT                      28                                                  /*!< SPI0_MCR: DCONF Position                */
#define SPI_MCR_DCONF(x)                         (((uint32_t)(((uint32_t)(x))<<SPI_MCR_DCONF_SHIFT))&SPI_MCR_DCONF_MASK) /*!< SPI0_MCR                                */
#define SPI_MCR_CONT_SCKE_MASK                   (0x01UL << SPI_MCR_CONT_SCKE_SHIFT)                 /*!< SPI0_MCR: CONT_SCKE Mask                */
#define SPI_MCR_CONT_SCKE_SHIFT                  30                                                  /*!< SPI0_MCR: CONT_SCKE Position            */
#define SPI_MCR_MSTR_MASK                        (0x01UL << SPI_MCR_MSTR_SHIFT)                      /*!< SPI0_MCR: MSTR Mask                     */
#define SPI_MCR_MSTR_SHIFT                       31                                                  /*!< SPI0_MCR: MSTR Position                 */
/* ------- TCR Bit Fields                           ------ */
#define SPI_TCR_SPI_TCNT_MASK                    (0xFFFFUL << SPI_TCR_SPI_TCNT_SHIFT)                /*!< SPI0_TCR: SPI_TCNT Mask                 */
#define SPI_TCR_SPI_TCNT_SHIFT                   16                                                  /*!< SPI0_TCR: SPI_TCNT Position             */
#define SPI_TCR_SPI_TCNT(x)                      (((uint32_t)(((uint32_t)(x))<<SPI_TCR_SPI_TCNT_SHIFT))&SPI_TCR_SPI_TCNT_MASK) /*!< SPI0_TCR                                */
/* ------- CTAR Bit Fields                          ------ */
#define SPI_CTAR_BR_MASK                         (0x0FUL << SPI_CTAR_BR_SHIFT)                       /*!< SPI0_CTAR: BR Mask                      */
#define SPI_CTAR_BR_SHIFT                        0                                                   /*!< SPI0_CTAR: BR Position                  */
#define SPI_CTAR_BR(x)                           (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_BR_SHIFT))&SPI_CTAR_BR_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_DT_MASK                         (0x0FUL << SPI_CTAR_DT_SHIFT)                       /*!< SPI0_CTAR: DT Mask                      */
#define SPI_CTAR_DT_SHIFT                        4                                                   /*!< SPI0_CTAR: DT Position                  */
#define SPI_CTAR_DT(x)                           (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_DT_SHIFT))&SPI_CTAR_DT_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_ASC_MASK                        (0x0FUL << SPI_CTAR_ASC_SHIFT)                      /*!< SPI0_CTAR: ASC Mask                     */
#define SPI_CTAR_ASC_SHIFT                       8                                                   /*!< SPI0_CTAR: ASC Position                 */
#define SPI_CTAR_ASC(x)                          (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_ASC_SHIFT))&SPI_CTAR_ASC_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_CSSCK_MASK                      (0x0FUL << SPI_CTAR_CSSCK_SHIFT)                    /*!< SPI0_CTAR: CSSCK Mask                   */
#define SPI_CTAR_CSSCK_SHIFT                     12                                                  /*!< SPI0_CTAR: CSSCK Position               */
#define SPI_CTAR_CSSCK(x)                        (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_CSSCK_SHIFT))&SPI_CTAR_CSSCK_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_PBR_MASK                        (0x03UL << SPI_CTAR_PBR_SHIFT)                      /*!< SPI0_CTAR: PBR Mask                     */
#define SPI_CTAR_PBR_SHIFT                       16                                                  /*!< SPI0_CTAR: PBR Position                 */
#define SPI_CTAR_PBR(x)                          (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_PBR_SHIFT))&SPI_CTAR_PBR_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_PDT_MASK                        (0x03UL << SPI_CTAR_PDT_SHIFT)                      /*!< SPI0_CTAR: PDT Mask                     */
#define SPI_CTAR_PDT_SHIFT                       18                                                  /*!< SPI0_CTAR: PDT Position                 */
#define SPI_CTAR_PDT(x)                          (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_PDT_SHIFT))&SPI_CTAR_PDT_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_PASC_MASK                       (0x03UL << SPI_CTAR_PASC_SHIFT)                     /*!< SPI0_CTAR: PASC Mask                    */
#define SPI_CTAR_PASC_SHIFT                      20                                                  /*!< SPI0_CTAR: PASC Position                */
#define SPI_CTAR_PASC(x)                         (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_PASC_SHIFT))&SPI_CTAR_PASC_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_PCSSCK_MASK                     (0x03UL << SPI_CTAR_PCSSCK_SHIFT)                   /*!< SPI0_CTAR: PCSSCK Mask                  */
#define SPI_CTAR_PCSSCK_SHIFT                    22                                                  /*!< SPI0_CTAR: PCSSCK Position              */
#define SPI_CTAR_PCSSCK(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_PCSSCK_SHIFT))&SPI_CTAR_PCSSCK_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_LSBFE_MASK                      (0x01UL << SPI_CTAR_LSBFE_SHIFT)                    /*!< SPI0_CTAR: LSBFE Mask                   */
#define SPI_CTAR_LSBFE_SHIFT                     24                                                  /*!< SPI0_CTAR: LSBFE Position               */
#define SPI_CTAR_CPHA_MASK                       (0x01UL << SPI_CTAR_CPHA_SHIFT)                     /*!< SPI0_CTAR: CPHA Mask                    */
#define SPI_CTAR_CPHA_SHIFT                      25                                                  /*!< SPI0_CTAR: CPHA Position                */
#define SPI_CTAR_CPOL_MASK                       (0x01UL << SPI_CTAR_CPOL_SHIFT)                     /*!< SPI0_CTAR: CPOL Mask                    */
#define SPI_CTAR_CPOL_SHIFT                      26                                                  /*!< SPI0_CTAR: CPOL Position                */
#define SPI_CTAR_FMSZ_MASK                       (0x0FUL << SPI_CTAR_FMSZ_SHIFT)                     /*!< SPI0_CTAR: FMSZ Mask                    */
#define SPI_CTAR_FMSZ_SHIFT                      27                                                  /*!< SPI0_CTAR: FMSZ Position                */
#define SPI_CTAR_FMSZ(x)                         (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_FMSZ_SHIFT))&SPI_CTAR_FMSZ_MASK) /*!< SPI0_CTAR                               */
#define SPI_CTAR_DBR_MASK                        (0x01UL << SPI_CTAR_DBR_SHIFT)                      /*!< SPI0_CTAR: DBR Mask                     */
#define SPI_CTAR_DBR_SHIFT                       31                                                  /*!< SPI0_CTAR: DBR Position                 */
/* ------- CTAR0_SLAVE Bit Fields                   ------ */
#define SPI_CTAR_SLAVE_CPHA_MASK                 (0x01UL << SPI_CTAR_SLAVE_CPHA_SHIFT)               /*!< SPI0_CTAR0_SLAVE: CPHA Mask             */
#define SPI_CTAR_SLAVE_CPHA_SHIFT                25                                                  /*!< SPI0_CTAR0_SLAVE: CPHA Position         */
#define SPI_CTAR_SLAVE_CPOL_MASK                 (0x01UL << SPI_CTAR_SLAVE_CPOL_SHIFT)               /*!< SPI0_CTAR0_SLAVE: CPOL Mask             */
#define SPI_CTAR_SLAVE_CPOL_SHIFT                26                                                  /*!< SPI0_CTAR0_SLAVE: CPOL Position         */
#define SPI_CTAR_SLAVE_FMSZ_MASK                 (0x1FUL << SPI_CTAR_SLAVE_FMSZ_SHIFT)               /*!< SPI0_CTAR0_SLAVE: FMSZ Mask             */
#define SPI_CTAR_SLAVE_FMSZ_SHIFT                27                                                  /*!< SPI0_CTAR0_SLAVE: FMSZ Position         */
#define SPI_CTAR_SLAVE_FMSZ(x)                   (((uint32_t)(((uint32_t)(x))<<SPI_CTAR_SLAVE_FMSZ_SHIFT))&SPI_CTAR_SLAVE_FMSZ_MASK) /*!< SPI0_CTAR0_SLAVE                        */
/* ------- SR Bit Fields                            ------ */
#define SPI_SR_POPNXTPTR_MASK                    (0x0FUL << SPI_SR_POPNXTPTR_SHIFT)                  /*!< SPI0_SR: POPNXTPTR Mask                 */
#define SPI_SR_POPNXTPTR_SHIFT                   0                                                   /*!< SPI0_SR: POPNXTPTR Position             */
#define SPI_SR_POPNXTPTR(x)                      (((uint32_t)(((uint32_t)(x))<<SPI_SR_POPNXTPTR_SHIFT))&SPI_SR_POPNXTPTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_RXCTR_MASK                        (0x0FUL << SPI_SR_RXCTR_SHIFT)                      /*!< SPI0_SR: RXCTR Mask                     */
#define SPI_SR_RXCTR_SHIFT                       4                                                   /*!< SPI0_SR: RXCTR Position                 */
#define SPI_SR_RXCTR(x)                          (((uint32_t)(((uint32_t)(x))<<SPI_SR_RXCTR_SHIFT))&SPI_SR_RXCTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_TXNXTPTR_MASK                     (0x0FUL << SPI_SR_TXNXTPTR_SHIFT)                   /*!< SPI0_SR: TXNXTPTR Mask                  */
#define SPI_SR_TXNXTPTR_SHIFT                    8                                                   /*!< SPI0_SR: TXNXTPTR Position              */
#define SPI_SR_TXNXTPTR(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_SR_TXNXTPTR_SHIFT))&SPI_SR_TXNXTPTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_TXCTR_MASK                        (0x0FUL << SPI_SR_TXCTR_SHIFT)                      /*!< SPI0_SR: TXCTR Mask                     */
#define SPI_SR_TXCTR_SHIFT                       12                                                  /*!< SPI0_SR: TXCTR Position                 */
#define SPI_SR_TXCTR(x)                          (((uint32_t)(((uint32_t)(x))<<SPI_SR_TXCTR_SHIFT))&SPI_SR_TXCTR_MASK) /*!< SPI0_SR                                 */
#define SPI_SR_RFDF_MASK                         (0x01UL << SPI_SR_RFDF_SHIFT)                       /*!< SPI0_SR: RFDF Mask                      */
#define SPI_SR_RFDF_SHIFT                        17                                                  /*!< SPI0_SR: RFDF Position                  */
#define SPI_SR_RFOF_MASK                         (0x01UL << SPI_SR_RFOF_SHIFT)                       /*!< SPI0_SR: RFOF Mask                      */
#define SPI_SR_RFOF_SHIFT                        19                                                  /*!< SPI0_SR: RFOF Position                  */
#define SPI_SR_TFFF_MASK                         (0x01UL << SPI_SR_TFFF_SHIFT)                       /*!< SPI0_SR: TFFF Mask                      */
#define SPI_SR_TFFF_SHIFT                        25                                                  /*!< SPI0_SR: TFFF Position                  */
#define SPI_SR_TFUF_MASK                         (0x01UL << SPI_SR_TFUF_SHIFT)                       /*!< SPI0_SR: TFUF Mask                      */
#define SPI_SR_TFUF_SHIFT                        27                                                  /*!< SPI0_SR: TFUF Position                  */
#define SPI_SR_EOQF_MASK                         (0x01UL << SPI_SR_EOQF_SHIFT)                       /*!< SPI0_SR: EOQF Mask                      */
#define SPI_SR_EOQF_SHIFT                        28                                                  /*!< SPI0_SR: EOQF Position                  */
#define SPI_SR_TXRXS_MASK                        (0x01UL << SPI_SR_TXRXS_SHIFT)                      /*!< SPI0_SR: TXRXS Mask                     */
#define SPI_SR_TXRXS_SHIFT                       30                                                  /*!< SPI0_SR: TXRXS Position                 */
#define SPI_SR_TCF_MASK                          (0x01UL << SPI_SR_TCF_SHIFT)                        /*!< SPI0_SR: TCF Mask                       */
#define SPI_SR_TCF_SHIFT                         31                                                  /*!< SPI0_SR: TCF Position                   */
/* ------- RSER Bit Fields                          ------ */
#define SPI_RSER_RFDF_DIRS_MASK                  (0x01UL << SPI_RSER_RFDF_DIRS_SHIFT)                /*!< SPI0_RSER: RFDF_DIRS Mask               */
#define SPI_RSER_RFDF_DIRS_SHIFT                 16                                                  /*!< SPI0_RSER: RFDF_DIRS Position           */
#define SPI_RSER_RFDF_RE_MASK                    (0x01UL << SPI_RSER_RFDF_RE_SHIFT)                  /*!< SPI0_RSER: RFDF_RE Mask                 */
#define SPI_RSER_RFDF_RE_SHIFT                   17                                                  /*!< SPI0_RSER: RFDF_RE Position             */
#define SPI_RSER_RFOF_RE_MASK                    (0x01UL << SPI_RSER_RFOF_RE_SHIFT)                  /*!< SPI0_RSER: RFOF_RE Mask                 */
#define SPI_RSER_RFOF_RE_SHIFT                   19                                                  /*!< SPI0_RSER: RFOF_RE Position             */
#define SPI_RSER_TFFF_DIRS_MASK                  (0x01UL << SPI_RSER_TFFF_DIRS_SHIFT)                /*!< SPI0_RSER: TFFF_DIRS Mask               */
#define SPI_RSER_TFFF_DIRS_SHIFT                 24                                                  /*!< SPI0_RSER: TFFF_DIRS Position           */
#define SPI_RSER_TFFF_RE_MASK                    (0x01UL << SPI_RSER_TFFF_RE_SHIFT)                  /*!< SPI0_RSER: TFFF_RE Mask                 */
#define SPI_RSER_TFFF_RE_SHIFT                   25                                                  /*!< SPI0_RSER: TFFF_RE Position             */
#define SPI_RSER_TFUF_RE_MASK                    (0x01UL << SPI_RSER_TFUF_RE_SHIFT)                  /*!< SPI0_RSER: TFUF_RE Mask                 */
#define SPI_RSER_TFUF_RE_SHIFT                   27                                                  /*!< SPI0_RSER: TFUF_RE Position             */
#define SPI_RSER_EOQF_RE_MASK                    (0x01UL << SPI_RSER_EOQF_RE_SHIFT)                  /*!< SPI0_RSER: EOQF_RE Mask                 */
#define SPI_RSER_EOQF_RE_SHIFT                   28                                                  /*!< SPI0_RSER: EOQF_RE Position             */
#define SPI_RSER_TCF_RE_MASK                     (0x01UL << SPI_RSER_TCF_RE_SHIFT)                   /*!< SPI0_RSER: TCF_RE Mask                  */
#define SPI_RSER_TCF_RE_SHIFT                    31                                                  /*!< SPI0_RSER: TCF_RE Position              */
/* ------- PUSHR Bit Fields                         ------ */
#define SPI_PUSHR_TXDATA_MASK                    (0xFFFFUL << SPI_PUSHR_TXDATA_SHIFT)                /*!< SPI0_PUSHR: TXDATA Mask                 */
#define SPI_PUSHR_TXDATA_SHIFT                   0                                                   /*!< SPI0_PUSHR: TXDATA Position             */
#define SPI_PUSHR_TXDATA(x)                      (((uint32_t)(((uint32_t)(x))<<SPI_PUSHR_TXDATA_SHIFT))&SPI_PUSHR_TXDATA_MASK) /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_PCS_MASK                       (0x3FUL << SPI_PUSHR_PCS_SHIFT)                     /*!< SPI0_PUSHR: PCS Mask                    */
#define SPI_PUSHR_PCS_SHIFT                      16                                                  /*!< SPI0_PUSHR: PCS Position                */
#define SPI_PUSHR_PCS(x)                         (((uint32_t)(((uint32_t)(x))<<SPI_PUSHR_PCS_SHIFT))&SPI_PUSHR_PCS_MASK) /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_CTCNT_MASK                     (0x01UL << SPI_PUSHR_CTCNT_SHIFT)                   /*!< SPI0_PUSHR: CTCNT Mask                  */
#define SPI_PUSHR_CTCNT_SHIFT                    26                                                  /*!< SPI0_PUSHR: CTCNT Position              */
#define SPI_PUSHR_EOQ_MASK                       (0x01UL << SPI_PUSHR_EOQ_SHIFT)                     /*!< SPI0_PUSHR: EOQ Mask                    */
#define SPI_PUSHR_EOQ_SHIFT                      27                                                  /*!< SPI0_PUSHR: EOQ Position                */
#define SPI_PUSHR_CTAS_MASK                      (0x07UL << SPI_PUSHR_CTAS_SHIFT)                    /*!< SPI0_PUSHR: CTAS Mask                   */
#define SPI_PUSHR_CTAS_SHIFT                     28                                                  /*!< SPI0_PUSHR: CTAS Position               */
#define SPI_PUSHR_CTAS(x)                        (((uint32_t)(((uint32_t)(x))<<SPI_PUSHR_CTAS_SHIFT))&SPI_PUSHR_CTAS_MASK) /*!< SPI0_PUSHR                              */
#define SPI_PUSHR_CONT_MASK                      (0x01UL << SPI_PUSHR_CONT_SHIFT)                    /*!< SPI0_PUSHR: CONT Mask                   */
#define SPI_PUSHR_CONT_SHIFT                     31                                                  /*!< SPI0_PUSHR: CONT Position               */
/* ------- PUSHR_SLAVE Bit Fields                   ------ */
#define SPI_PUSHR_SLAVE_TXDATA_MASK              (0xFFFFUL << SPI_PUSHR_SLAVE_TXDATA_SHIFT)          /*!< SPI0_PUSHR_SLAVE: TXDATA Mask           */
#define SPI_PUSHR_SLAVE_TXDATA_SHIFT             0                                                   /*!< SPI0_PUSHR_SLAVE: TXDATA Position       */
#define SPI_PUSHR_SLAVE_TXDATA(x)                (((uint32_t)(((uint32_t)(x))<<SPI_PUSHR_SLAVE_TXDATA_SHIFT))&SPI_PUSHR_SLAVE_TXDATA_MASK) /*!< SPI0_PUSHR_SLAVE                        */
/* ------- POPR Bit Fields                          ------ */
#define SPI_POPR_RXDATA_MASK                     (0xFFFFFFFFUL << SPI_POPR_RXDATA_SHIFT)             /*!< SPI0_POPR: RXDATA Mask                  */
#define SPI_POPR_RXDATA_SHIFT                    0                                                   /*!< SPI0_POPR: RXDATA Position              */
#define SPI_POPR_RXDATA(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_POPR_RXDATA_SHIFT))&SPI_POPR_RXDATA_MASK) /*!< SPI0_POPR                               */
/* ------- TXFR Bit Fields                          ------ */
#define SPI_TXFR_TXDATA_MASK                     (0xFFFFUL << SPI_TXFR_TXDATA_SHIFT)                 /*!< SPI0_TXFR: TXDATA Mask                  */
#define SPI_TXFR_TXDATA_SHIFT                    0                                                   /*!< SPI0_TXFR: TXDATA Position              */
#define SPI_TXFR_TXDATA(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_TXFR_TXDATA_SHIFT))&SPI_TXFR_TXDATA_MASK) /*!< SPI0_TXFR                               */
#define SPI_TXFR_TXCMD_TXDATA_MASK               (0xFFFFUL << SPI_TXFR_TXCMD_TXDATA_SHIFT)           /*!< SPI0_TXFR: TXCMD_TXDATA Mask            */
#define SPI_TXFR_TXCMD_TXDATA_SHIFT              16                                                  /*!< SPI0_TXFR: TXCMD_TXDATA Position        */
#define SPI_TXFR_TXCMD_TXDATA(x)                 (((uint32_t)(((uint32_t)(x))<<SPI_TXFR_TXCMD_TXDATA_SHIFT))&SPI_TXFR_TXCMD_TXDATA_MASK) /*!< SPI0_TXFR                               */
/* ------- RXFR Bit Fields                          ------ */
#define SPI_RXFR_RXDATA_MASK                     (0xFFFFFFFFUL << SPI_RXFR_RXDATA_SHIFT)             /*!< SPI0_RXFR: RXDATA Mask                  */
#define SPI_RXFR_RXDATA_SHIFT                    0                                                   /*!< SPI0_RXFR: RXDATA Position              */
#define SPI_RXFR_RXDATA(x)                       (((uint32_t)(((uint32_t)(x))<<SPI_RXFR_RXDATA_SHIFT))&SPI_RXFR_RXDATA_MASK) /*!< SPI0_RXFR                               */

/* SPI0 - Peripheral instance base addresses */
#define SPI0_BasePtr                   0x4002C000UL
#define SPI0                           ((SPI_Type *) SPI0_BasePtr)
#define SPI0_BASE_PTR                  (SPI0)

/* ================================================================================ */
/* ================           SPI1 (file:SPI1_MK_FIFO_DEPTH1)       ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
typedef struct {                                /*!<       SPI1 Structure                                               */
   __IO uint32_t  MCR;                          /*!< 0000: Module Configuration Register                                */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  TCR;                          /*!< 0008: Transfer Count Register                                      */
   union {                                      /*!< 0000: (size=0008)                                                  */
      __IO uint32_t  CTAR[2];                   /*!< 000C: Clock and Transfer Attributes Register (In Master Mode)      */
      __IO uint32_t  CTAR0_SLAVE;               /*!< 000C: Clock and Transfer Attributes Register (In Slave Mode)       */
   };
   __I  uint32_t  RESERVED1[6];                 /*!< 0014:                                                              */
   __IO uint32_t  SR;                           /*!< 002C: Status Register                                              */
   __IO uint32_t  RSER;                         /*!< 0030: DMA/Interrupt Request Select and Enable Register             */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  PUSHR;                     /*!< 0034: PUSH TX FIFO Register In Master Mode                         */
      __IO uint32_t  PUSHR_SLAVE;               /*!< 0034: PUSH TX FIFO Register In Slave Mode                          */
   };
   __I  uint32_t  POPR;                         /*!< 0038: POP RX FIFO Register                                         */
   __I  uint32_t  TXFR[1];                      /*!< 003C: Transmit FIFO                                                */
   __I  uint32_t  RESERVED2[15];                /*!< 0040:                                                              */
   __I  uint32_t  RXFR[1];                      /*!< 007C: Receive FIFO                                                 */
} SPI1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI1' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- MCR Bit Fields                           ------ */
/* ------- TCR Bit Fields                           ------ */
/* ------- CTAR Bit Fields                          ------ */
/* ------- CTAR0_SLAVE Bit Fields                   ------ */
/* ------- SR Bit Fields                            ------ */
/* ------- RSER Bit Fields                          ------ */
/* ------- PUSHR Bit Fields                         ------ */
/* ------- PUSHR_SLAVE Bit Fields                   ------ */
/* ------- POPR Bit Fields                          ------ */
/* ------- TXFR Bit Fields                          ------ */
/* ------- RXFR Bit Fields                          ------ */

/* SPI1 - Peripheral instance base addresses */
#define SPI1_BasePtr                   0x4002D000UL
#define SPI1                           ((SPI1_Type *) SPI1_BasePtr)
#define SPI1_BASE_PTR                  (SPI1)

/* ================================================================================ */
/* ================           SPI2 (derived from SPI1)             ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */

/* SPI2 - Peripheral instance base addresses */
#define SPI2_BasePtr                   0x400AC000UL
#define SPI2                           ((SPI1_Type *) SPI2_BasePtr)
#define SPI2_BASE_PTR                  (SPI2)

/* ================================================================================ */
/* ================           SYST (file:SysTick_0)                ================ */
/* ================================================================================ */

/**
 * @brief System timer SysTick
 */
typedef struct {                                /*!<       SYST Structure                                               */
   __IO uint32_t  CSR;                          /*!< 0000: Control and Status Register                                  */
   __IO uint32_t  RVR;                          /*!< 0004: Reload Value Register                                        */
   __IO uint32_t  CVR;                          /*!< 0008: Current Value Register                                       */
   __I  uint32_t  CALIB;                        /*!< 000C: Calibration Value Register                                   */
} SYST_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SYST' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CSR Bit Fields                           ------ */
#define SYST_CSR_ENABLE_MASK                     (0x01UL << SYST_CSR_ENABLE_SHIFT)                   /*!< SYST_CSR: ENABLE Mask                   */
#define SYST_CSR_ENABLE_SHIFT                    0                                                   /*!< SYST_CSR: ENABLE Position               */
#define SYST_CSR_TICKINT_MASK                    (0x01UL << SYST_CSR_TICKINT_SHIFT)                  /*!< SYST_CSR: TICKINT Mask                  */
#define SYST_CSR_TICKINT_SHIFT                   1                                                   /*!< SYST_CSR: TICKINT Position              */
#define SYST_CSR_CLKSOURCE_MASK                  (0x01UL << SYST_CSR_CLKSOURCE_SHIFT)                /*!< SYST_CSR: CLKSOURCE Mask                */
#define SYST_CSR_CLKSOURCE_SHIFT                 2                                                   /*!< SYST_CSR: CLKSOURCE Position            */
#define SYST_CSR_COUNTFLAG_MASK                  (0x01UL << SYST_CSR_COUNTFLAG_SHIFT)                /*!< SYST_CSR: COUNTFLAG Mask                */
#define SYST_CSR_COUNTFLAG_SHIFT                 16                                                  /*!< SYST_CSR: COUNTFLAG Position            */
/* ------- RVR Bit Fields                           ------ */
#define SYST_RVR_RELOAD_MASK                     (0xFFFFFFUL << SYST_RVR_RELOAD_SHIFT)               /*!< SYST_RVR: RELOAD Mask                   */
#define SYST_RVR_RELOAD_SHIFT                    0                                                   /*!< SYST_RVR: RELOAD Position               */
#define SYST_RVR_RELOAD(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_RVR_RELOAD_SHIFT))&SYST_RVR_RELOAD_MASK) /*!< SYST_RVR                                */
/* ------- CVR Bit Fields                           ------ */
#define SYST_CVR_CURRENT_MASK                    (0xFFFFFFUL << SYST_CVR_CURRENT_SHIFT)              /*!< SYST_CVR: CURRENT Mask                  */
#define SYST_CVR_CURRENT_SHIFT                   0                                                   /*!< SYST_CVR: CURRENT Position              */
#define SYST_CVR_CURRENT(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CVR_CURRENT_SHIFT))&SYST_CVR_CURRENT_MASK) /*!< SYST_CVR                                */
/* ------- CALIB Bit Fields                         ------ */
#define SYST_CALIB_TENMS_MASK                    (0xFFFFFFUL << SYST_CALIB_TENMS_SHIFT)              /*!< SYST_CALIB: TENMS Mask                  */
#define SYST_CALIB_TENMS_SHIFT                   0                                                   /*!< SYST_CALIB: TENMS Position              */
#define SYST_CALIB_TENMS(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_TENMS_SHIFT))&SYST_CALIB_TENMS_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_SKEW_MASK                     (0x01UL << SYST_CALIB_SKEW_SHIFT)                   /*!< SYST_CALIB: SKEW Mask                   */
#define SYST_CALIB_SKEW_SHIFT                    30                                                  /*!< SYST_CALIB: SKEW Position               */
#define SYST_CALIB_NOREF_MASK                    (0x01UL << SYST_CALIB_NOREF_SHIFT)                  /*!< SYST_CALIB: NOREF Mask                  */
#define SYST_CALIB_NOREF_SHIFT                   31                                                  /*!< SYST_CALIB: NOREF Position              */

/* SYST - Peripheral instance base addresses */
#define SYST_BasePtr                   0xE000E010UL
#define SYST                           ((SYST_Type *) SYST_BasePtr)
#define SYST_BASE_PTR                  (SYST)

/* ================================================================================ */
/* ================           TPIU (file:TPIU_0)                   ================ */
/* ================================================================================ */

/**
 * @brief Trace Port Interface Unit
 */
typedef struct {                                /*!<       TPIU Structure                                               */
   __I  uint32_t  SSPSR;                        /*!< 0000: Supported Parallel Port Size Register                        */
   __IO uint32_t  CSPSR;                        /*!< 0004: Current Parallel Port Size Register                          */
   __I  uint32_t  RESERVED0[2];                 /*!< 0008:                                                              */
   __IO uint32_t  ACPR;                         /*!< 0010: Asynchronous Clock Prescaler Register                        */
   __I  uint32_t  RESERVED1[55];                /*!< 0014:                                                              */
   __IO uint32_t  SPPR;                         /*!< 00F0: Selected Pin Protocol Register                               */
   __I  uint32_t  RESERVED2[131];               /*!< 00F4:                                                              */
   __I  uint32_t  FFSR;                         /*!< 0300: Formatter and Flush Status Register                          */
   __IO uint32_t  FFCR;                         /*!< 0304: Formatter and Flush Control Register                         */
   __IO uint32_t  FSCR;                         /*!< 0308: Formatter Synchronization Counter Register                   */
   __I  uint32_t  RESERVED3[759];               /*!< 030C:                                                              */
   __I  uint32_t  TRIGGER;                      /*!< 0EE8: Trigger Register                                             */
   __I  uint32_t  FIFODATA0;                    /*!< 0EEC: FIFODATA0 Register                                           */
   __I  uint32_t  ITATBCTR2;                    /*!< 0EF0: Integration Test ATB Control 2 Register                      */
   __I  uint32_t  RESERVED4;                    /*!< 0EF4:                                                              */
   __I  uint32_t  ITATBCTR0;                    /*!< 0EF8: Integration Test ATB Control 0 Register                      */
   __I  uint32_t  FIFODATA1;                    /*!< 0EFC: FIFODATA1 Register                                           */
   __IO uint32_t  ITCTRL;                       /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED5[39];                /*!< 0F04:                                                              */
   __IO uint32_t  CLAIMSET;                     /*!< 0FA0: Claim Tag Set Register                                       */
   __IO uint32_t  CLAIMCLR;                     /*!< 0FA4: Claim Tag Clear Register                                     */
   __I  uint32_t  RESERVED6[8];                 /*!< 0FA8:                                                              */
   __I  uint32_t  DEVID;                        /*!< 0FC8: TPIU_DEVID Register                                          */
   __I  uint32_t  RESERVED7;                    /*!< 0FCC:                                                              */
   __I  uint32_t  PID4;                         /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID0;                         /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CID1;                         /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CID2;                         /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CID3;                         /*!< 0FFC: Component Identification Register 3                          */
} TPIU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TPIU' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SSPSR Bit Fields                         ------ */
#define TPIU_SSPSR_SWIDTH_MASK                   (0xFFFFFFFFUL << TPIU_SSPSR_SWIDTH_SHIFT)           /*!< TPIU_SSPSR: SWIDTH Mask                 */
#define TPIU_SSPSR_SWIDTH_SHIFT                  0                                                   /*!< TPIU_SSPSR: SWIDTH Position             */
#define TPIU_SSPSR_SWIDTH(x)                     (((uint32_t)(((uint32_t)(x))<<TPIU_SSPSR_SWIDTH_SHIFT))&TPIU_SSPSR_SWIDTH_MASK) /*!< TPIU_SSPSR                              */
/* ------- CSPSR Bit Fields                         ------ */
#define TPIU_CSPSR_CWIDTH_MASK                   (0xFFFFFFFFUL << TPIU_CSPSR_CWIDTH_SHIFT)           /*!< TPIU_CSPSR: CWIDTH Mask                 */
#define TPIU_CSPSR_CWIDTH_SHIFT                  0                                                   /*!< TPIU_CSPSR: CWIDTH Position             */
#define TPIU_CSPSR_CWIDTH(x)                     (((uint32_t)(((uint32_t)(x))<<TPIU_CSPSR_CWIDTH_SHIFT))&TPIU_CSPSR_CWIDTH_MASK) /*!< TPIU_CSPSR                              */
/* ------- ACPR Bit Fields                          ------ */
#define TPIU_ACPR_PRESCALER_MASK                 (0x1FFFUL << TPIU_ACPR_PRESCALER_SHIFT)             /*!< TPIU_ACPR: PRESCALER Mask               */
#define TPIU_ACPR_PRESCALER_SHIFT                0                                                   /*!< TPIU_ACPR: PRESCALER Position           */
#define TPIU_ACPR_PRESCALER(x)                   (((uint32_t)(((uint32_t)(x))<<TPIU_ACPR_PRESCALER_SHIFT))&TPIU_ACPR_PRESCALER_MASK) /*!< TPIU_ACPR                               */
/* ------- SPPR Bit Fields                          ------ */
#define TPIU_SPPR_TXMODE_MASK                    (0x03UL << TPIU_SPPR_TXMODE_SHIFT)                  /*!< TPIU_SPPR: TXMODE Mask                  */
#define TPIU_SPPR_TXMODE_SHIFT                   0                                                   /*!< TPIU_SPPR: TXMODE Position              */
#define TPIU_SPPR_TXMODE(x)                      (((uint32_t)(((uint32_t)(x))<<TPIU_SPPR_TXMODE_SHIFT))&TPIU_SPPR_TXMODE_MASK) /*!< TPIU_SPPR                               */
/* ------- FFSR Bit Fields                          ------ */
#define TPIU_FFSR_F1InProg_MASK                  (0x01UL << TPIU_FFSR_F1InProg_SHIFT)                /*!< TPIU_FFSR: F1InProg Mask                */
#define TPIU_FFSR_F1InProg_SHIFT                 0                                                   /*!< TPIU_FFSR: F1InProg Position            */
#define TPIU_FFSR_FtStopped_MASK                 (0x01UL << TPIU_FFSR_FtStopped_SHIFT)               /*!< TPIU_FFSR: FtStopped Mask               */
#define TPIU_FFSR_FtStopped_SHIFT                1                                                   /*!< TPIU_FFSR: FtStopped Position           */
#define TPIU_FFSR_TCPresent_MASK                 (0x01UL << TPIU_FFSR_TCPresent_SHIFT)               /*!< TPIU_FFSR: TCPresent Mask               */
#define TPIU_FFSR_TCPresent_SHIFT                2                                                   /*!< TPIU_FFSR: TCPresent Position           */
#define TPIU_FFSR_FtNonStop_MASK                 (0x01UL << TPIU_FFSR_FtNonStop_SHIFT)               /*!< TPIU_FFSR: FtNonStop Mask               */
#define TPIU_FFSR_FtNonStop_SHIFT                3                                                   /*!< TPIU_FFSR: FtNonStop Position           */
/* ------- FFCR Bit Fields                          ------ */
#define TPIU_FFCR_EnFCont_MASK                   (0x01UL << TPIU_FFCR_EnFCont_SHIFT)                 /*!< TPIU_FFCR: EnFCont Mask                 */
#define TPIU_FFCR_EnFCont_SHIFT                  1                                                   /*!< TPIU_FFCR: EnFCont Position             */
#define TPIU_FFCR_TrigIn_MASK                    (0x01UL << TPIU_FFCR_TrigIn_SHIFT)                  /*!< TPIU_FFCR: TrigIn Mask                  */
#define TPIU_FFCR_TrigIn_SHIFT                   8                                                   /*!< TPIU_FFCR: TrigIn Position              */
/* ------- FSCR Bit Fields                          ------ */
#define TPIU_FSCR_CycCount_MASK                  (0xFFFUL << TPIU_FSCR_CycCount_SHIFT)               /*!< TPIU_FSCR: CycCount Mask                */
#define TPIU_FSCR_CycCount_SHIFT                 0                                                   /*!< TPIU_FSCR: CycCount Position            */
#define TPIU_FSCR_CycCount(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_FSCR_CycCount_SHIFT))&TPIU_FSCR_CycCount_MASK) /*!< TPIU_FSCR                               */
/* ------- TRIGGER Bit Fields                       ------ */
#define TPIU_TRIGGER_TRIGGER_MASK                (0x01UL << TPIU_TRIGGER_TRIGGER_SHIFT)              /*!< TPIU_TRIGGER: TRIGGER Mask              */
#define TPIU_TRIGGER_TRIGGER_SHIFT               0                                                   /*!< TPIU_TRIGGER: TRIGGER Position          */
/* ------- FIFODATA0 Bit Fields                     ------ */
#define TPIU_FIFODATA0_ETMdata0_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata0_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata0 Mask           */
#define TPIU_FIFODATA0_ETMdata0_SHIFT            0                                                   /*!< TPIU_FIFODATA0: ETMdata0 Position       */
#define TPIU_FIFODATA0_ETMdata0(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA0_ETMdata0_SHIFT))&TPIU_FIFODATA0_ETMdata0_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMdata1_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata1_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata1 Mask           */
#define TPIU_FIFODATA0_ETMdata1_SHIFT            8                                                   /*!< TPIU_FIFODATA0: ETMdata1 Position       */
#define TPIU_FIFODATA0_ETMdata1(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA0_ETMdata1_SHIFT))&TPIU_FIFODATA0_ETMdata1_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMdata2_MASK             (0xFFUL << TPIU_FIFODATA0_ETMdata2_SHIFT)           /*!< TPIU_FIFODATA0: ETMdata2 Mask           */
#define TPIU_FIFODATA0_ETMdata2_SHIFT            16                                                  /*!< TPIU_FIFODATA0: ETMdata2 Position       */
#define TPIU_FIFODATA0_ETMdata2(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA0_ETMdata2_SHIFT))&TPIU_FIFODATA0_ETMdata2_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMbytecount_MASK         (0x03UL << TPIU_FIFODATA0_ETMbytecount_SHIFT)       /*!< TPIU_FIFODATA0: ETMbytecount Mask       */
#define TPIU_FIFODATA0_ETMbytecount_SHIFT        24                                                  /*!< TPIU_FIFODATA0: ETMbytecount Position   */
#define TPIU_FIFODATA0_ETMbytecount(x)           (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA0_ETMbytecount_SHIFT))&TPIU_FIFODATA0_ETMbytecount_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ETMATVALID_MASK           (0x01UL << TPIU_FIFODATA0_ETMATVALID_SHIFT)         /*!< TPIU_FIFODATA0: ETMATVALID Mask         */
#define TPIU_FIFODATA0_ETMATVALID_SHIFT          26                                                  /*!< TPIU_FIFODATA0: ETMATVALID Position     */
#define TPIU_FIFODATA0_ITMbytecount_MASK         (0x03UL << TPIU_FIFODATA0_ITMbytecount_SHIFT)       /*!< TPIU_FIFODATA0: ITMbytecount Mask       */
#define TPIU_FIFODATA0_ITMbytecount_SHIFT        27                                                  /*!< TPIU_FIFODATA0: ITMbytecount Position   */
#define TPIU_FIFODATA0_ITMbytecount(x)           (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA0_ITMbytecount_SHIFT))&TPIU_FIFODATA0_ITMbytecount_MASK) /*!< TPIU_FIFODATA0                          */
#define TPIU_FIFODATA0_ITMATVALID_MASK           (0x01UL << TPIU_FIFODATA0_ITMATVALID_SHIFT)         /*!< TPIU_FIFODATA0: ITMATVALID Mask         */
#define TPIU_FIFODATA0_ITMATVALID_SHIFT          29                                                  /*!< TPIU_FIFODATA0: ITMATVALID Position     */
/* ------- ITATBCTR2 Bit Fields                     ------ */
#define TPIU_ITATBCTR2_ATREADY1_ATREADY2_MASK    (0x01UL << TPIU_ITATBCTR2_ATREADY1_ATREADY2_SHIFT)  /*!< TPIU_ITATBCTR2: ATREADY1_ATREADY2 Mask  */
#define TPIU_ITATBCTR2_ATREADY1_ATREADY2_SHIFT   0                                                   /*!< TPIU_ITATBCTR2: ATREADY1_ATREADY2 Position*/
/* ------- ITATBCTR0 Bit Fields                     ------ */
#define TPIU_ITATBCTR0_ATVALID1_ATVALID2_MASK    (0x01UL << TPIU_ITATBCTR0_ATVALID1_ATVALID2_SHIFT)  /*!< TPIU_ITATBCTR0: ATVALID1_ATVALID2 Mask  */
#define TPIU_ITATBCTR0_ATVALID1_ATVALID2_SHIFT   0                                                   /*!< TPIU_ITATBCTR0: ATVALID1_ATVALID2 Position*/
/* ------- FIFODATA1 Bit Fields                     ------ */
#define TPIU_FIFODATA1_ITMdata0_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata0_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata0 Mask           */
#define TPIU_FIFODATA1_ITMdata0_SHIFT            0                                                   /*!< TPIU_FIFODATA1: ITMdata0 Position       */
#define TPIU_FIFODATA1_ITMdata0(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA1_ITMdata0_SHIFT))&TPIU_FIFODATA1_ITMdata0_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMdata1_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata1_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata1 Mask           */
#define TPIU_FIFODATA1_ITMdata1_SHIFT            8                                                   /*!< TPIU_FIFODATA1: ITMdata1 Position       */
#define TPIU_FIFODATA1_ITMdata1(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA1_ITMdata1_SHIFT))&TPIU_FIFODATA1_ITMdata1_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMdata2_MASK             (0xFFUL << TPIU_FIFODATA1_ITMdata2_SHIFT)           /*!< TPIU_FIFODATA1: ITMdata2 Mask           */
#define TPIU_FIFODATA1_ITMdata2_SHIFT            16                                                  /*!< TPIU_FIFODATA1: ITMdata2 Position       */
#define TPIU_FIFODATA1_ITMdata2(x)               (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA1_ITMdata2_SHIFT))&TPIU_FIFODATA1_ITMdata2_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ETMbytecount_MASK         (0x03UL << TPIU_FIFODATA1_ETMbytecount_SHIFT)       /*!< TPIU_FIFODATA1: ETMbytecount Mask       */
#define TPIU_FIFODATA1_ETMbytecount_SHIFT        24                                                  /*!< TPIU_FIFODATA1: ETMbytecount Position   */
#define TPIU_FIFODATA1_ETMbytecount(x)           (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA1_ETMbytecount_SHIFT))&TPIU_FIFODATA1_ETMbytecount_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ETMATVALID_MASK           (0x01UL << TPIU_FIFODATA1_ETMATVALID_SHIFT)         /*!< TPIU_FIFODATA1: ETMATVALID Mask         */
#define TPIU_FIFODATA1_ETMATVALID_SHIFT          26                                                  /*!< TPIU_FIFODATA1: ETMATVALID Position     */
#define TPIU_FIFODATA1_ITMbytecount_MASK         (0x03UL << TPIU_FIFODATA1_ITMbytecount_SHIFT)       /*!< TPIU_FIFODATA1: ITMbytecount Mask       */
#define TPIU_FIFODATA1_ITMbytecount_SHIFT        27                                                  /*!< TPIU_FIFODATA1: ITMbytecount Position   */
#define TPIU_FIFODATA1_ITMbytecount(x)           (((uint32_t)(((uint32_t)(x))<<TPIU_FIFODATA1_ITMbytecount_SHIFT))&TPIU_FIFODATA1_ITMbytecount_MASK) /*!< TPIU_FIFODATA1                          */
#define TPIU_FIFODATA1_ITMATVALID_MASK           (0x01UL << TPIU_FIFODATA1_ITMATVALID_SHIFT)         /*!< TPIU_FIFODATA1: ITMATVALID Mask         */
#define TPIU_FIFODATA1_ITMATVALID_SHIFT          29                                                  /*!< TPIU_FIFODATA1: ITMATVALID Position     */
/* ------- ITCTRL Bit Fields                        ------ */
#define TPIU_ITCTRL_Mode_MASK                    (0x03UL << TPIU_ITCTRL_Mode_SHIFT)                  /*!< TPIU_ITCTRL: Mode Mask                  */
#define TPIU_ITCTRL_Mode_SHIFT                   0                                                   /*!< TPIU_ITCTRL: Mode Position              */
#define TPIU_ITCTRL_Mode(x)                      (((uint32_t)(((uint32_t)(x))<<TPIU_ITCTRL_Mode_SHIFT))&TPIU_ITCTRL_Mode_MASK) /*!< TPIU_ITCTRL                             */
/* ------- CLAIMSET Bit Fields                      ------ */
#define TPIU_CLAIMSET_CLAIMSET_MASK              (0x0FUL << TPIU_CLAIMSET_CLAIMSET_SHIFT)            /*!< TPIU_CLAIMSET: CLAIMSET Mask            */
#define TPIU_CLAIMSET_CLAIMSET_SHIFT             0                                                   /*!< TPIU_CLAIMSET: CLAIMSET Position        */
#define TPIU_CLAIMSET_CLAIMSET(x)                (((uint32_t)(((uint32_t)(x))<<TPIU_CLAIMSET_CLAIMSET_SHIFT))&TPIU_CLAIMSET_CLAIMSET_MASK) /*!< TPIU_CLAIMSET                           */
/* ------- CLAIMCLR Bit Fields                      ------ */
#define TPIU_CLAIMCLR_CLAIMCLR_MASK              (0x0FUL << TPIU_CLAIMCLR_CLAIMCLR_SHIFT)            /*!< TPIU_CLAIMCLR: CLAIMCLR Mask            */
#define TPIU_CLAIMCLR_CLAIMCLR_SHIFT             0                                                   /*!< TPIU_CLAIMCLR: CLAIMCLR Position        */
#define TPIU_CLAIMCLR_CLAIMCLR(x)                (((uint32_t)(((uint32_t)(x))<<TPIU_CLAIMCLR_CLAIMCLR_SHIFT))&TPIU_CLAIMCLR_CLAIMCLR_MASK) /*!< TPIU_CLAIMCLR                           */
/* ------- DEVID Bit Fields                         ------ */
#define TPIU_DEVID_NumberOfTraceInputs_MASK      (0x1FUL << TPIU_DEVID_NumberOfTraceInputs_SHIFT)    /*!< TPIU_DEVID: NumberOfTraceInputs Mask    */
#define TPIU_DEVID_NumberOfTraceInputs_SHIFT     0                                                   /*!< TPIU_DEVID: NumberOfTraceInputs Position*/
#define TPIU_DEVID_NumberOfTraceInputs(x)        (((uint32_t)(((uint32_t)(x))<<TPIU_DEVID_NumberOfTraceInputs_SHIFT))&TPIU_DEVID_NumberOfTraceInputs_MASK) /*!< TPIU_DEVID                              */
#define TPIU_DEVID_TRACECELKIN_MASK              (0x01UL << TPIU_DEVID_TRACECELKIN_SHIFT)            /*!< TPIU_DEVID: TRACECELKIN Mask            */
#define TPIU_DEVID_TRACECELKIN_SHIFT             5                                                   /*!< TPIU_DEVID: TRACECELKIN Position        */
#define TPIU_DEVID_MinimumBufferSize_MASK        (0x07UL << TPIU_DEVID_MinimumBufferSize_SHIFT)      /*!< TPIU_DEVID: MinimumBufferSize Mask      */
#define TPIU_DEVID_MinimumBufferSize_SHIFT       6                                                   /*!< TPIU_DEVID: MinimumBufferSize Position  */
#define TPIU_DEVID_MinimumBufferSize(x)          (((uint32_t)(((uint32_t)(x))<<TPIU_DEVID_MinimumBufferSize_SHIFT))&TPIU_DEVID_MinimumBufferSize_MASK) /*!< TPIU_DEVID                              */
#define TPIU_DEVID_TraceAndClockModes_MASK       (0x01UL << TPIU_DEVID_TraceAndClockModes_SHIFT)     /*!< TPIU_DEVID: TraceAndClockModes Mask     */
#define TPIU_DEVID_TraceAndClockModes_SHIFT      9                                                   /*!< TPIU_DEVID: TraceAndClockModes Position */
#define TPIU_DEVID_Manchester_MASK               (0x01UL << TPIU_DEVID_Manchester_SHIFT)             /*!< TPIU_DEVID: Manchester Mask             */
#define TPIU_DEVID_Manchester_SHIFT              10                                                  /*!< TPIU_DEVID: Manchester Position         */
#define TPIU_DEVID_NRZ_MASK                      (0x01UL << TPIU_DEVID_NRZ_SHIFT)                    /*!< TPIU_DEVID: NRZ Mask                    */
#define TPIU_DEVID_NRZ_SHIFT                     11                                                  /*!< TPIU_DEVID: NRZ Position                */
/* ------- PID4 Bit Fields                          ------ */
#define TPIU_PID4_JEP106_MASK                    (0x0FUL << TPIU_PID4_JEP106_SHIFT)                  /*!< TPIU_PID4: JEP106 Mask                  */
#define TPIU_PID4_JEP106_SHIFT                   0                                                   /*!< TPIU_PID4: JEP106 Position              */
#define TPIU_PID4_JEP106(x)                      (((uint32_t)(((uint32_t)(x))<<TPIU_PID4_JEP106_SHIFT))&TPIU_PID4_JEP106_MASK) /*!< TPIU_PID4                               */
#define TPIU_PID4_c4KB_MASK                      (0x0FUL << TPIU_PID4_c4KB_SHIFT)                    /*!< TPIU_PID4: c4KB Mask                    */
#define TPIU_PID4_c4KB_SHIFT                     4                                                   /*!< TPIU_PID4: c4KB Position                */
#define TPIU_PID4_c4KB(x)                        (((uint32_t)(((uint32_t)(x))<<TPIU_PID4_c4KB_SHIFT))&TPIU_PID4_c4KB_MASK) /*!< TPIU_PID4                               */
/* ------- PID5 Bit Fields                          ------ */
/* ------- PID6 Bit Fields                          ------ */
/* ------- PID7 Bit Fields                          ------ */
/* ------- PID0 Bit Fields                          ------ */
#define TPIU_PID0_PartNumber_MASK                (0xFFUL << TPIU_PID0_PartNumber_SHIFT)              /*!< TPIU_PID0: PartNumber Mask              */
#define TPIU_PID0_PartNumber_SHIFT               0                                                   /*!< TPIU_PID0: PartNumber Position          */
#define TPIU_PID0_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<TPIU_PID0_PartNumber_SHIFT))&TPIU_PID0_PartNumber_MASK) /*!< TPIU_PID0                               */
/* ------- PID1 Bit Fields                          ------ */
#define TPIU_PID1_PartNumber_MASK                (0x0FUL << TPIU_PID1_PartNumber_SHIFT)              /*!< TPIU_PID1: PartNumber Mask              */
#define TPIU_PID1_PartNumber_SHIFT               0                                                   /*!< TPIU_PID1: PartNumber Position          */
#define TPIU_PID1_PartNumber(x)                  (((uint32_t)(((uint32_t)(x))<<TPIU_PID1_PartNumber_SHIFT))&TPIU_PID1_PartNumber_MASK) /*!< TPIU_PID1                               */
#define TPIU_PID1_JEP106_identity_code_MASK      (0x0FUL << TPIU_PID1_JEP106_identity_code_SHIFT)    /*!< TPIU_PID1: JEP106_identity_code Mask    */
#define TPIU_PID1_JEP106_identity_code_SHIFT     4                                                   /*!< TPIU_PID1: JEP106_identity_code Position*/
#define TPIU_PID1_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<TPIU_PID1_JEP106_identity_code_SHIFT))&TPIU_PID1_JEP106_identity_code_MASK) /*!< TPIU_PID1                               */
/* ------- PID2 Bit Fields                          ------ */
#define TPIU_PID2_JEP106_identity_code_MASK      (0x07UL << TPIU_PID2_JEP106_identity_code_SHIFT)    /*!< TPIU_PID2: JEP106_identity_code Mask    */
#define TPIU_PID2_JEP106_identity_code_SHIFT     0                                                   /*!< TPIU_PID2: JEP106_identity_code Position*/
#define TPIU_PID2_JEP106_identity_code(x)        (((uint32_t)(((uint32_t)(x))<<TPIU_PID2_JEP106_identity_code_SHIFT))&TPIU_PID2_JEP106_identity_code_MASK) /*!< TPIU_PID2                               */
#define TPIU_PID2_Revision_MASK                  (0x0FUL << TPIU_PID2_Revision_SHIFT)                /*!< TPIU_PID2: Revision Mask                */
#define TPIU_PID2_Revision_SHIFT                 4                                                   /*!< TPIU_PID2: Revision Position            */
#define TPIU_PID2_Revision(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_PID2_Revision_SHIFT))&TPIU_PID2_Revision_MASK) /*!< TPIU_PID2                               */
/* ------- PID3 Bit Fields                          ------ */
#define TPIU_PID3_CustomerModified_MASK          (0x0FUL << TPIU_PID3_CustomerModified_SHIFT)        /*!< TPIU_PID3: CustomerModified Mask        */
#define TPIU_PID3_CustomerModified_SHIFT         0                                                   /*!< TPIU_PID3: CustomerModified Position    */
#define TPIU_PID3_CustomerModified(x)            (((uint32_t)(((uint32_t)(x))<<TPIU_PID3_CustomerModified_SHIFT))&TPIU_PID3_CustomerModified_MASK) /*!< TPIU_PID3                               */
#define TPIU_PID3_RevAnd_MASK                    (0x0FUL << TPIU_PID3_RevAnd_SHIFT)                  /*!< TPIU_PID3: RevAnd Mask                  */
#define TPIU_PID3_RevAnd_SHIFT                   4                                                   /*!< TPIU_PID3: RevAnd Position              */
#define TPIU_PID3_RevAnd(x)                      (((uint32_t)(((uint32_t)(x))<<TPIU_PID3_RevAnd_SHIFT))&TPIU_PID3_RevAnd_MASK) /*!< TPIU_PID3                               */
/* ------- CID0 Bit Fields                          ------ */
#define TPIU_CID0_Preamble_MASK                  (0xFFUL << TPIU_CID0_Preamble_SHIFT)                /*!< TPIU_CID0: Preamble Mask                */
#define TPIU_CID0_Preamble_SHIFT                 0                                                   /*!< TPIU_CID0: Preamble Position            */
#define TPIU_CID0_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_CID0_Preamble_SHIFT))&TPIU_CID0_Preamble_MASK) /*!< TPIU_CID0                               */
/* ------- CID1 Bit Fields                          ------ */
#define TPIU_CID1_Preamble_MASK                  (0x0FUL << TPIU_CID1_Preamble_SHIFT)                /*!< TPIU_CID1: Preamble Mask                */
#define TPIU_CID1_Preamble_SHIFT                 0                                                   /*!< TPIU_CID1: Preamble Position            */
#define TPIU_CID1_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_CID1_Preamble_SHIFT))&TPIU_CID1_Preamble_MASK) /*!< TPIU_CID1                               */
#define TPIU_CID1_ComponentClass_MASK            (0x0FUL << TPIU_CID1_ComponentClass_SHIFT)          /*!< TPIU_CID1: ComponentClass Mask          */
#define TPIU_CID1_ComponentClass_SHIFT           4                                                   /*!< TPIU_CID1: ComponentClass Position      */
#define TPIU_CID1_ComponentClass(x)              (((uint32_t)(((uint32_t)(x))<<TPIU_CID1_ComponentClass_SHIFT))&TPIU_CID1_ComponentClass_MASK) /*!< TPIU_CID1                               */
/* ------- CID2 Bit Fields                          ------ */
#define TPIU_CID2_Preamble_MASK                  (0xFFUL << TPIU_CID2_Preamble_SHIFT)                /*!< TPIU_CID2: Preamble Mask                */
#define TPIU_CID2_Preamble_SHIFT                 0                                                   /*!< TPIU_CID2: Preamble Position            */
#define TPIU_CID2_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_CID2_Preamble_SHIFT))&TPIU_CID2_Preamble_MASK) /*!< TPIU_CID2                               */
/* ------- CID3 Bit Fields                          ------ */
#define TPIU_CID3_Preamble_MASK                  (0xFFUL << TPIU_CID3_Preamble_SHIFT)                /*!< TPIU_CID3: Preamble Mask                */
#define TPIU_CID3_Preamble_SHIFT                 0                                                   /*!< TPIU_CID3: Preamble Position            */
#define TPIU_CID3_Preamble(x)                    (((uint32_t)(((uint32_t)(x))<<TPIU_CID3_Preamble_SHIFT))&TPIU_CID3_Preamble_MASK) /*!< TPIU_CID3                               */

/* TPIU - Peripheral instance base addresses */
#define TPIU_BasePtr                   0xE0040000UL
#define TPIU                           ((TPIU_Type *) TPIU_BasePtr)
#define TPIU_BASE_PTR                  (TPIU)

/* ================================================================================ */
/* ================           UART0 (file:UART0_MK_C7816)          ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef struct {                                /*!<       UART0 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: Baud Rate Register: High                                     */
   __IO uint8_t   BDL;                          /*!< 0001: Baud Rate Register: Low                                      */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0003: Control Register 2                                           */
   __I  uint8_t   S1;                           /*!< 0004: Status Register 1                                            */
   __IO uint8_t   S2;                           /*!< 0005: Status Register 2                                            */
   __IO uint8_t   C3;                           /*!< 0006: Control Register 3                                           */
   __IO uint8_t   D;                            /*!< 0007: Data Register                                                */
   __IO uint8_t   MA1;                          /*!< 0008: Match Address Registers 1                                    */
   __IO uint8_t   MA2;                          /*!< 0009: Match Address Registers 2                                    */
   __IO uint8_t   C4;                           /*!< 000A: Control Register 4                                           */
   __IO uint8_t   C5;                           /*!< 000B: Control Register 5                                           */
   __I  uint8_t   ED;                           /*!< 000C: Extended Data Register                                       */
   __IO uint8_t   MODEM;                        /*!< 000D: Modem Register                                               */
   __IO uint8_t   IR;                           /*!< 000E: Infrared Register                                            */
   __I  uint8_t   RESERVED0;                    /*!< 000F:                                                              */
   __IO uint8_t   PFIFO;                        /*!< 0010: FIFO Parameters                                              */
   __IO uint8_t   CFIFO;                        /*!< 0011: FIFO Control Register                                        */
   __IO uint8_t   SFIFO;                        /*!< 0012: FIFO Status Register                                         */
   __IO uint8_t   TWFIFO;                       /*!< 0013: FIFO Transmit Watermark                                      */
   __I  uint8_t   TCFIFO;                       /*!< 0014: FIFO Transmit Count                                          */
   __IO uint8_t   RWFIFO;                       /*!< 0015: FIFO Receive Watermark                                       */
   __I  uint8_t   RCFIFO;                       /*!< 0016: FIFO Receive Count                                           */
   __I  uint8_t   RESERVED1;                    /*!< 0017:                                                              */
   __IO uint8_t   C7816;                        /*!< 0018: 7816 Control Register                                        */
   __IO uint8_t   IE7816;                       /*!< 0019: 7816 Interrupt Enable Register                               */
   __IO uint8_t   IS7816;                       /*!< 001A: 7816 Interrupt Status Register                               */
   union {                                      /*!< 0000: (size=0001)                                                  */
      __IO uint8_t   WP7816T0;                  /*!< 001B: 7816 Wait Parameter Register                                 */
      __IO uint8_t   WP7816T1;                  /*!< 001B: 7816 Wait Parameter Register                                 */
   };
   __IO uint8_t   WN7816;                       /*!< 001C: 7816 Wait N Register                                         */
   __IO uint8_t   WF7816;                       /*!< 001D: 7816 Wait FD Register                                        */
   __IO uint8_t   ET7816;                       /*!< 001E: 7816 Error Threshold Register                                */
   __IO uint8_t   TL7816;                       /*!< 001F: 7816 Transmit Length Register                                */
} UART_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- BDH Bit Fields                           ------ */
#define UART_BDH_SBR_MASK                        (0x1FUL << UART_BDH_SBR_SHIFT)                      /*!< UART0_BDH: SBR Mask                     */
#define UART_BDH_SBR_SHIFT                       0                                                   /*!< UART0_BDH: SBR Position                 */
#define UART_BDH_SBR(x)                          (((uint8_t)(((uint8_t)(x))<<UART_BDH_SBR_SHIFT))&UART_BDH_SBR_MASK) /*!< UART0_BDH                               */
#define UART_BDH_RXEDGIE_MASK                    (0x01UL << UART_BDH_RXEDGIE_SHIFT)                  /*!< UART0_BDH: RXEDGIE Mask                 */
#define UART_BDH_RXEDGIE_SHIFT                   6                                                   /*!< UART0_BDH: RXEDGIE Position             */
#define UART_BDH_LBKDIE_MASK                     (0x01UL << UART_BDH_LBKDIE_SHIFT)                   /*!< UART0_BDH: LBKDIE Mask                  */
#define UART_BDH_LBKDIE_SHIFT                    7                                                   /*!< UART0_BDH: LBKDIE Position              */
/* ------- BDL Bit Fields                           ------ */
#define UART_BDL_SBR_MASK                        (0xFFUL << UART_BDL_SBR_SHIFT)                      /*!< UART0_BDL: SBR Mask                     */
#define UART_BDL_SBR_SHIFT                       0                                                   /*!< UART0_BDL: SBR Position                 */
#define UART_BDL_SBR(x)                          (((uint8_t)(((uint8_t)(x))<<UART_BDL_SBR_SHIFT))&UART_BDL_SBR_MASK) /*!< UART0_BDL                               */
/* ------- C1 Bit Fields                            ------ */
#define UART_C1_PT_MASK                          (0x01UL << UART_C1_PT_SHIFT)                        /*!< UART0_C1: PT Mask                       */
#define UART_C1_PT_SHIFT                         0                                                   /*!< UART0_C1: PT Position                   */
#define UART_C1_PE_MASK                          (0x01UL << UART_C1_PE_SHIFT)                        /*!< UART0_C1: PE Mask                       */
#define UART_C1_PE_SHIFT                         1                                                   /*!< UART0_C1: PE Position                   */
#define UART_C1_ILT_MASK                         (0x01UL << UART_C1_ILT_SHIFT)                       /*!< UART0_C1: ILT Mask                      */
#define UART_C1_ILT_SHIFT                        2                                                   /*!< UART0_C1: ILT Position                  */
#define UART_C1_WAKE_MASK                        (0x01UL << UART_C1_WAKE_SHIFT)                      /*!< UART0_C1: WAKE Mask                     */
#define UART_C1_WAKE_SHIFT                       3                                                   /*!< UART0_C1: WAKE Position                 */
#define UART_C1_M_MASK                           (0x01UL << UART_C1_M_SHIFT)                         /*!< UART0_C1: M Mask                        */
#define UART_C1_M_SHIFT                          4                                                   /*!< UART0_C1: M Position                    */
#define UART_C1_RSRC_MASK                        (0x01UL << UART_C1_RSRC_SHIFT)                      /*!< UART0_C1: RSRC Mask                     */
#define UART_C1_RSRC_SHIFT                       5                                                   /*!< UART0_C1: RSRC Position                 */
#define UART_C1_UARTSWAI_MASK                    (0x01UL << UART_C1_UARTSWAI_SHIFT)                  /*!< UART0_C1: UARTSWAI Mask                 */
#define UART_C1_UARTSWAI_SHIFT                   6                                                   /*!< UART0_C1: UARTSWAI Position             */
#define UART_C1_LOOPS_MASK                       (0x01UL << UART_C1_LOOPS_SHIFT)                     /*!< UART0_C1: LOOPS Mask                    */
#define UART_C1_LOOPS_SHIFT                      7                                                   /*!< UART0_C1: LOOPS Position                */
/* ------- C2 Bit Fields                            ------ */
#define UART_C2_SBK_MASK                         (0x01UL << UART_C2_SBK_SHIFT)                       /*!< UART0_C2: SBK Mask                      */
#define UART_C2_SBK_SHIFT                        0                                                   /*!< UART0_C2: SBK Position                  */
#define UART_C2_RWU_MASK                         (0x01UL << UART_C2_RWU_SHIFT)                       /*!< UART0_C2: RWU Mask                      */
#define UART_C2_RWU_SHIFT                        1                                                   /*!< UART0_C2: RWU Position                  */
#define UART_C2_RE_MASK                          (0x01UL << UART_C2_RE_SHIFT)                        /*!< UART0_C2: RE Mask                       */
#define UART_C2_RE_SHIFT                         2                                                   /*!< UART0_C2: RE Position                   */
#define UART_C2_TE_MASK                          (0x01UL << UART_C2_TE_SHIFT)                        /*!< UART0_C2: TE Mask                       */
#define UART_C2_TE_SHIFT                         3                                                   /*!< UART0_C2: TE Position                   */
#define UART_C2_ILIE_MASK                        (0x01UL << UART_C2_ILIE_SHIFT)                      /*!< UART0_C2: ILIE Mask                     */
#define UART_C2_ILIE_SHIFT                       4                                                   /*!< UART0_C2: ILIE Position                 */
#define UART_C2_RIE_MASK                         (0x01UL << UART_C2_RIE_SHIFT)                       /*!< UART0_C2: RIE Mask                      */
#define UART_C2_RIE_SHIFT                        5                                                   /*!< UART0_C2: RIE Position                  */
#define UART_C2_TCIE_MASK                        (0x01UL << UART_C2_TCIE_SHIFT)                      /*!< UART0_C2: TCIE Mask                     */
#define UART_C2_TCIE_SHIFT                       6                                                   /*!< UART0_C2: TCIE Position                 */
#define UART_C2_TIE_MASK                         (0x01UL << UART_C2_TIE_SHIFT)                       /*!< UART0_C2: TIE Mask                      */
#define UART_C2_TIE_SHIFT                        7                                                   /*!< UART0_C2: TIE Position                  */
/* ------- S1 Bit Fields                            ------ */
#define UART_S1_PF_MASK                          (0x01UL << UART_S1_PF_SHIFT)                        /*!< UART0_S1: PF Mask                       */
#define UART_S1_PF_SHIFT                         0                                                   /*!< UART0_S1: PF Position                   */
#define UART_S1_FE_MASK                          (0x01UL << UART_S1_FE_SHIFT)                        /*!< UART0_S1: FE Mask                       */
#define UART_S1_FE_SHIFT                         1                                                   /*!< UART0_S1: FE Position                   */
#define UART_S1_NF_MASK                          (0x01UL << UART_S1_NF_SHIFT)                        /*!< UART0_S1: NF Mask                       */
#define UART_S1_NF_SHIFT                         2                                                   /*!< UART0_S1: NF Position                   */
#define UART_S1_OR_MASK                          (0x01UL << UART_S1_OR_SHIFT)                        /*!< UART0_S1: OR Mask                       */
#define UART_S1_OR_SHIFT                         3                                                   /*!< UART0_S1: OR Position                   */
#define UART_S1_IDLE_MASK                        (0x01UL << UART_S1_IDLE_SHIFT)                      /*!< UART0_S1: IDLE Mask                     */
#define UART_S1_IDLE_SHIFT                       4                                                   /*!< UART0_S1: IDLE Position                 */
#define UART_S1_RDRF_MASK                        (0x01UL << UART_S1_RDRF_SHIFT)                      /*!< UART0_S1: RDRF Mask                     */
#define UART_S1_RDRF_SHIFT                       5                                                   /*!< UART0_S1: RDRF Position                 */
#define UART_S1_TC_MASK                          (0x01UL << UART_S1_TC_SHIFT)                        /*!< UART0_S1: TC Mask                       */
#define UART_S1_TC_SHIFT                         6                                                   /*!< UART0_S1: TC Position                   */
#define UART_S1_TDRE_MASK                        (0x01UL << UART_S1_TDRE_SHIFT)                      /*!< UART0_S1: TDRE Mask                     */
#define UART_S1_TDRE_SHIFT                       7                                                   /*!< UART0_S1: TDRE Position                 */
/* ------- S2 Bit Fields                            ------ */
#define UART_S2_RAF_MASK                         (0x01UL << UART_S2_RAF_SHIFT)                       /*!< UART0_S2: RAF Mask                      */
#define UART_S2_RAF_SHIFT                        0                                                   /*!< UART0_S2: RAF Position                  */
#define UART_S2_LBKDE_MASK                       (0x01UL << UART_S2_LBKDE_SHIFT)                     /*!< UART0_S2: LBKDE Mask                    */
#define UART_S2_LBKDE_SHIFT                      1                                                   /*!< UART0_S2: LBKDE Position                */
#define UART_S2_BRK13_MASK                       (0x01UL << UART_S2_BRK13_SHIFT)                     /*!< UART0_S2: BRK13 Mask                    */
#define UART_S2_BRK13_SHIFT                      2                                                   /*!< UART0_S2: BRK13 Position                */
#define UART_S2_RWUID_MASK                       (0x01UL << UART_S2_RWUID_SHIFT)                     /*!< UART0_S2: RWUID Mask                    */
#define UART_S2_RWUID_SHIFT                      3                                                   /*!< UART0_S2: RWUID Position                */
#define UART_S2_RXINV_MASK                       (0x01UL << UART_S2_RXINV_SHIFT)                     /*!< UART0_S2: RXINV Mask                    */
#define UART_S2_RXINV_SHIFT                      4                                                   /*!< UART0_S2: RXINV Position                */
#define UART_S2_MSBF_MASK                        (0x01UL << UART_S2_MSBF_SHIFT)                      /*!< UART0_S2: MSBF Mask                     */
#define UART_S2_MSBF_SHIFT                       5                                                   /*!< UART0_S2: MSBF Position                 */
#define UART_S2_RXEDGIF_MASK                     (0x01UL << UART_S2_RXEDGIF_SHIFT)                   /*!< UART0_S2: RXEDGIF Mask                  */
#define UART_S2_RXEDGIF_SHIFT                    6                                                   /*!< UART0_S2: RXEDGIF Position              */
#define UART_S2_LBKDIF_MASK                      (0x01UL << UART_S2_LBKDIF_SHIFT)                    /*!< UART0_S2: LBKDIF Mask                   */
#define UART_S2_LBKDIF_SHIFT                     7                                                   /*!< UART0_S2: LBKDIF Position               */
/* ------- C3 Bit Fields                            ------ */
#define UART_C3_PEIE_MASK                        (0x01UL << UART_C3_PEIE_SHIFT)                      /*!< UART0_C3: PEIE Mask                     */
#define UART_C3_PEIE_SHIFT                       0                                                   /*!< UART0_C3: PEIE Position                 */
#define UART_C3_FEIE_MASK                        (0x01UL << UART_C3_FEIE_SHIFT)                      /*!< UART0_C3: FEIE Mask                     */
#define UART_C3_FEIE_SHIFT                       1                                                   /*!< UART0_C3: FEIE Position                 */
#define UART_C3_NEIE_MASK                        (0x01UL << UART_C3_NEIE_SHIFT)                      /*!< UART0_C3: NEIE Mask                     */
#define UART_C3_NEIE_SHIFT                       2                                                   /*!< UART0_C3: NEIE Position                 */
#define UART_C3_ORIE_MASK                        (0x01UL << UART_C3_ORIE_SHIFT)                      /*!< UART0_C3: ORIE Mask                     */
#define UART_C3_ORIE_SHIFT                       3                                                   /*!< UART0_C3: ORIE Position                 */
#define UART_C3_TXINV_MASK                       (0x01UL << UART_C3_TXINV_SHIFT)                     /*!< UART0_C3: TXINV Mask                    */
#define UART_C3_TXINV_SHIFT                      4                                                   /*!< UART0_C3: TXINV Position                */
#define UART_C3_TXDIR_MASK                       (0x01UL << UART_C3_TXDIR_SHIFT)                     /*!< UART0_C3: TXDIR Mask                    */
#define UART_C3_TXDIR_SHIFT                      5                                                   /*!< UART0_C3: TXDIR Position                */
#define UART_C3_T8_MASK                          (0x01UL << UART_C3_T8_SHIFT)                        /*!< UART0_C3: T8 Mask                       */
#define UART_C3_T8_SHIFT                         6                                                   /*!< UART0_C3: T8 Position                   */
#define UART_C3_R8_MASK                          (0x01UL << UART_C3_R8_SHIFT)                        /*!< UART0_C3: R8 Mask                       */
#define UART_C3_R8_SHIFT                         7                                                   /*!< UART0_C3: R8 Position                   */
/* ------- D Bit Fields                             ------ */
#define UART_D_RT_MASK                           (0xFFUL << UART_D_RT_SHIFT)                         /*!< UART0_D: RT Mask                        */
#define UART_D_RT_SHIFT                          0                                                   /*!< UART0_D: RT Position                    */
#define UART_D_RT(x)                             (((uint8_t)(((uint8_t)(x))<<UART_D_RT_SHIFT))&UART_D_RT_MASK) /*!< UART0_D                                 */
/* ------- MA Bit Fields                            ------ */
#define UART_MA_MA_MASK                          (0xFFUL << UART_MA_MA_SHIFT)                        /*!< UART0_MA: MA Mask                       */
#define UART_MA_MA_SHIFT                         0                                                   /*!< UART0_MA: MA Position                   */
#define UART_MA_MA(x)                            (((uint8_t)(((uint8_t)(x))<<UART_MA_MA_SHIFT))&UART_MA_MA_MASK) /*!< UART0_MA                                */
/* ------- C4 Bit Fields                            ------ */
#define UART_C4_BRFA_MASK                        (0x1FUL << UART_C4_BRFA_SHIFT)                      /*!< UART0_C4: BRFA Mask                     */
#define UART_C4_BRFA_SHIFT                       0                                                   /*!< UART0_C4: BRFA Position                 */
#define UART_C4_BRFA(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C4_BRFA_SHIFT))&UART_C4_BRFA_MASK) /*!< UART0_C4                                */
#define UART_C4_M10_MASK                         (0x01UL << UART_C4_M10_SHIFT)                       /*!< UART0_C4: M10 Mask                      */
#define UART_C4_M10_SHIFT                        5                                                   /*!< UART0_C4: M10 Position                  */
#define UART_C4_MAEN2_MASK                       (0x01UL << UART_C4_MAEN2_SHIFT)                     /*!< UART0_C4: MAEN2 Mask                    */
#define UART_C4_MAEN2_SHIFT                      6                                                   /*!< UART0_C4: MAEN2 Position                */
#define UART_C4_MAEN1_MASK                       (0x01UL << UART_C4_MAEN1_SHIFT)                     /*!< UART0_C4: MAEN1 Mask                    */
#define UART_C4_MAEN1_SHIFT                      7                                                   /*!< UART0_C4: MAEN1 Position                */
/* ------- C5 Bit Fields                            ------ */
#define UART_C5_RDMAS_MASK                       (0x01UL << UART_C5_RDMAS_SHIFT)                     /*!< UART0_C5: RDMAS Mask                    */
#define UART_C5_RDMAS_SHIFT                      5                                                   /*!< UART0_C5: RDMAS Position                */
#define UART_C5_TDMAS_MASK                       (0x01UL << UART_C5_TDMAS_SHIFT)                     /*!< UART0_C5: TDMAS Mask                    */
#define UART_C5_TDMAS_SHIFT                      7                                                   /*!< UART0_C5: TDMAS Position                */
/* ------- ED Bit Fields                            ------ */
#define UART_ED_PARITYE_MASK                     (0x01UL << UART_ED_PARITYE_SHIFT)                   /*!< UART0_ED: PARITYE Mask                  */
#define UART_ED_PARITYE_SHIFT                    6                                                   /*!< UART0_ED: PARITYE Position              */
#define UART_ED_NOISY_MASK                       (0x01UL << UART_ED_NOISY_SHIFT)                     /*!< UART0_ED: NOISY Mask                    */
#define UART_ED_NOISY_SHIFT                      7                                                   /*!< UART0_ED: NOISY Position                */
/* ------- MODEM Bit Fields                         ------ */
#define UART_MODEM_TXCTSE_MASK                   (0x01UL << UART_MODEM_TXCTSE_SHIFT)                 /*!< UART0_MODEM: TXCTSE Mask                */
#define UART_MODEM_TXCTSE_SHIFT                  0                                                   /*!< UART0_MODEM: TXCTSE Position            */
#define UART_MODEM_TXRTSE_MASK                   (0x01UL << UART_MODEM_TXRTSE_SHIFT)                 /*!< UART0_MODEM: TXRTSE Mask                */
#define UART_MODEM_TXRTSE_SHIFT                  1                                                   /*!< UART0_MODEM: TXRTSE Position            */
#define UART_MODEM_TXRTSPOL_MASK                 (0x01UL << UART_MODEM_TXRTSPOL_SHIFT)               /*!< UART0_MODEM: TXRTSPOL Mask              */
#define UART_MODEM_TXRTSPOL_SHIFT                2                                                   /*!< UART0_MODEM: TXRTSPOL Position          */
#define UART_MODEM_RXRTSE_MASK                   (0x01UL << UART_MODEM_RXRTSE_SHIFT)                 /*!< UART0_MODEM: RXRTSE Mask                */
#define UART_MODEM_RXRTSE_SHIFT                  3                                                   /*!< UART0_MODEM: RXRTSE Position            */
/* ------- IR Bit Fields                            ------ */
#define UART_IR_TNP_MASK                         (0x03UL << UART_IR_TNP_SHIFT)                       /*!< UART0_IR: TNP Mask                      */
#define UART_IR_TNP_SHIFT                        0                                                   /*!< UART0_IR: TNP Position                  */
#define UART_IR_TNP(x)                           (((uint8_t)(((uint8_t)(x))<<UART_IR_TNP_SHIFT))&UART_IR_TNP_MASK) /*!< UART0_IR                                */
#define UART_IR_IREN_MASK                        (0x01UL << UART_IR_IREN_SHIFT)                      /*!< UART0_IR: IREN Mask                     */
#define UART_IR_IREN_SHIFT                       2                                                   /*!< UART0_IR: IREN Position                 */
/* ------- PFIFO Bit Fields                         ------ */
#define UART_PFIFO_RXFIFOSIZE_MASK               (0x07UL << UART_PFIFO_RXFIFOSIZE_SHIFT)             /*!< UART0_PFIFO: RXFIFOSIZE Mask            */
#define UART_PFIFO_RXFIFOSIZE_SHIFT              0                                                   /*!< UART0_PFIFO: RXFIFOSIZE Position        */
#define UART_PFIFO_RXFIFOSIZE(x)                 (((uint8_t)(((uint8_t)(x))<<UART_PFIFO_RXFIFOSIZE_SHIFT))&UART_PFIFO_RXFIFOSIZE_MASK) /*!< UART0_PFIFO                             */
#define UART_PFIFO_RXFE_MASK                     (0x01UL << UART_PFIFO_RXFE_SHIFT)                   /*!< UART0_PFIFO: RXFE Mask                  */
#define UART_PFIFO_RXFE_SHIFT                    3                                                   /*!< UART0_PFIFO: RXFE Position              */
#define UART_PFIFO_TXFIFOSIZE_MASK               (0x07UL << UART_PFIFO_TXFIFOSIZE_SHIFT)             /*!< UART0_PFIFO: TXFIFOSIZE Mask            */
#define UART_PFIFO_TXFIFOSIZE_SHIFT              4                                                   /*!< UART0_PFIFO: TXFIFOSIZE Position        */
#define UART_PFIFO_TXFIFOSIZE(x)                 (((uint8_t)(((uint8_t)(x))<<UART_PFIFO_TXFIFOSIZE_SHIFT))&UART_PFIFO_TXFIFOSIZE_MASK) /*!< UART0_PFIFO                             */
#define UART_PFIFO_TXFE_MASK                     (0x01UL << UART_PFIFO_TXFE_SHIFT)                   /*!< UART0_PFIFO: TXFE Mask                  */
#define UART_PFIFO_TXFE_SHIFT                    7                                                   /*!< UART0_PFIFO: TXFE Position              */
/* ------- CFIFO Bit Fields                         ------ */
#define UART_CFIFO_RXUFE_MASK                    (0x01UL << UART_CFIFO_RXUFE_SHIFT)                  /*!< UART0_CFIFO: RXUFE Mask                 */
#define UART_CFIFO_RXUFE_SHIFT                   0                                                   /*!< UART0_CFIFO: RXUFE Position             */
#define UART_CFIFO_TXOFE_MASK                    (0x01UL << UART_CFIFO_TXOFE_SHIFT)                  /*!< UART0_CFIFO: TXOFE Mask                 */
#define UART_CFIFO_TXOFE_SHIFT                   1                                                   /*!< UART0_CFIFO: TXOFE Position             */
#define UART_CFIFO_RXOFE_MASK                    (0x01UL << UART_CFIFO_RXOFE_SHIFT)                  /*!< UART0_CFIFO: RXOFE Mask                 */
#define UART_CFIFO_RXOFE_SHIFT                   2                                                   /*!< UART0_CFIFO: RXOFE Position             */
#define UART_CFIFO_RXFLUSH_MASK                  (0x01UL << UART_CFIFO_RXFLUSH_SHIFT)                /*!< UART0_CFIFO: RXFLUSH Mask               */
#define UART_CFIFO_RXFLUSH_SHIFT                 6                                                   /*!< UART0_CFIFO: RXFLUSH Position           */
#define UART_CFIFO_TXFLUSH_MASK                  (0x01UL << UART_CFIFO_TXFLUSH_SHIFT)                /*!< UART0_CFIFO: TXFLUSH Mask               */
#define UART_CFIFO_TXFLUSH_SHIFT                 7                                                   /*!< UART0_CFIFO: TXFLUSH Position           */
/* ------- SFIFO Bit Fields                         ------ */
#define UART_SFIFO_RXUF_MASK                     (0x01UL << UART_SFIFO_RXUF_SHIFT)                   /*!< UART0_SFIFO: RXUF Mask                  */
#define UART_SFIFO_RXUF_SHIFT                    0                                                   /*!< UART0_SFIFO: RXUF Position              */
#define UART_SFIFO_TXOF_MASK                     (0x01UL << UART_SFIFO_TXOF_SHIFT)                   /*!< UART0_SFIFO: TXOF Mask                  */
#define UART_SFIFO_TXOF_SHIFT                    1                                                   /*!< UART0_SFIFO: TXOF Position              */
#define UART_SFIFO_RXOF_MASK                     (0x01UL << UART_SFIFO_RXOF_SHIFT)                   /*!< UART0_SFIFO: RXOF Mask                  */
#define UART_SFIFO_RXOF_SHIFT                    2                                                   /*!< UART0_SFIFO: RXOF Position              */
#define UART_SFIFO_RXEMPT_MASK                   (0x01UL << UART_SFIFO_RXEMPT_SHIFT)                 /*!< UART0_SFIFO: RXEMPT Mask                */
#define UART_SFIFO_RXEMPT_SHIFT                  6                                                   /*!< UART0_SFIFO: RXEMPT Position            */
#define UART_SFIFO_TXEMPT_MASK                   (0x01UL << UART_SFIFO_TXEMPT_SHIFT)                 /*!< UART0_SFIFO: TXEMPT Mask                */
#define UART_SFIFO_TXEMPT_SHIFT                  7                                                   /*!< UART0_SFIFO: TXEMPT Position            */
/* ------- TWFIFO Bit Fields                        ------ */
#define UART_TWFIFO_TXWATER_MASK                 (0xFFUL << UART_TWFIFO_TXWATER_SHIFT)               /*!< UART0_TWFIFO: TXWATER Mask              */
#define UART_TWFIFO_TXWATER_SHIFT                0                                                   /*!< UART0_TWFIFO: TXWATER Position          */
#define UART_TWFIFO_TXWATER(x)                   (((uint8_t)(((uint8_t)(x))<<UART_TWFIFO_TXWATER_SHIFT))&UART_TWFIFO_TXWATER_MASK) /*!< UART0_TWFIFO                            */
/* ------- TCFIFO Bit Fields                        ------ */
#define UART_TCFIFO_TXCOUNT_MASK                 (0xFFUL << UART_TCFIFO_TXCOUNT_SHIFT)               /*!< UART0_TCFIFO: TXCOUNT Mask              */
#define UART_TCFIFO_TXCOUNT_SHIFT                0                                                   /*!< UART0_TCFIFO: TXCOUNT Position          */
#define UART_TCFIFO_TXCOUNT(x)                   (((uint8_t)(((uint8_t)(x))<<UART_TCFIFO_TXCOUNT_SHIFT))&UART_TCFIFO_TXCOUNT_MASK) /*!< UART0_TCFIFO                            */
/* ------- RWFIFO Bit Fields                        ------ */
#define UART_RWFIFO_RXWATER_MASK                 (0xFFUL << UART_RWFIFO_RXWATER_SHIFT)               /*!< UART0_RWFIFO: RXWATER Mask              */
#define UART_RWFIFO_RXWATER_SHIFT                0                                                   /*!< UART0_RWFIFO: RXWATER Position          */
#define UART_RWFIFO_RXWATER(x)                   (((uint8_t)(((uint8_t)(x))<<UART_RWFIFO_RXWATER_SHIFT))&UART_RWFIFO_RXWATER_MASK) /*!< UART0_RWFIFO                            */
/* ------- RCFIFO Bit Fields                        ------ */
#define UART_RCFIFO_RXCOUNT_MASK                 (0xFFUL << UART_RCFIFO_RXCOUNT_SHIFT)               /*!< UART0_RCFIFO: RXCOUNT Mask              */
#define UART_RCFIFO_RXCOUNT_SHIFT                0                                                   /*!< UART0_RCFIFO: RXCOUNT Position          */
#define UART_RCFIFO_RXCOUNT(x)                   (((uint8_t)(((uint8_t)(x))<<UART_RCFIFO_RXCOUNT_SHIFT))&UART_RCFIFO_RXCOUNT_MASK) /*!< UART0_RCFIFO                            */
/* ------- C7816 Bit Fields                         ------ */
#define UART_C7816_ISO_7816E_MASK                (0x01UL << UART_C7816_ISO_7816E_SHIFT)              /*!< UART0_C7816: ISO_7816E Mask             */
#define UART_C7816_ISO_7816E_SHIFT               0                                                   /*!< UART0_C7816: ISO_7816E Position         */
#define UART_C7816_TTYPE_MASK                    (0x01UL << UART_C7816_TTYPE_SHIFT)                  /*!< UART0_C7816: TTYPE Mask                 */
#define UART_C7816_TTYPE_SHIFT                   1                                                   /*!< UART0_C7816: TTYPE Position             */
#define UART_C7816_INIT_MASK                     (0x01UL << UART_C7816_INIT_SHIFT)                   /*!< UART0_C7816: INIT Mask                  */
#define UART_C7816_INIT_SHIFT                    2                                                   /*!< UART0_C7816: INIT Position              */
#define UART_C7816_ANACK_MASK                    (0x01UL << UART_C7816_ANACK_SHIFT)                  /*!< UART0_C7816: ANACK Mask                 */
#define UART_C7816_ANACK_SHIFT                   3                                                   /*!< UART0_C7816: ANACK Position             */
#define UART_C7816_ONACK_MASK                    (0x01UL << UART_C7816_ONACK_SHIFT)                  /*!< UART0_C7816: ONACK Mask                 */
#define UART_C7816_ONACK_SHIFT                   4                                                   /*!< UART0_C7816: ONACK Position             */
/* ------- IE7816 Bit Fields                        ------ */
#define UART_IE7816_RXTE_MASK                    (0x01UL << UART_IE7816_RXTE_SHIFT)                  /*!< UART0_IE7816: RXTE Mask                 */
#define UART_IE7816_RXTE_SHIFT                   0                                                   /*!< UART0_IE7816: RXTE Position             */
#define UART_IE7816_TXTE_MASK                    (0x01UL << UART_IE7816_TXTE_SHIFT)                  /*!< UART0_IE7816: TXTE Mask                 */
#define UART_IE7816_TXTE_SHIFT                   1                                                   /*!< UART0_IE7816: TXTE Position             */
#define UART_IE7816_GTVE_MASK                    (0x01UL << UART_IE7816_GTVE_SHIFT)                  /*!< UART0_IE7816: GTVE Mask                 */
#define UART_IE7816_GTVE_SHIFT                   2                                                   /*!< UART0_IE7816: GTVE Position             */
#define UART_IE7816_INITDE_MASK                  (0x01UL << UART_IE7816_INITDE_SHIFT)                /*!< UART0_IE7816: INITDE Mask               */
#define UART_IE7816_INITDE_SHIFT                 4                                                   /*!< UART0_IE7816: INITDE Position           */
#define UART_IE7816_BWTE_MASK                    (0x01UL << UART_IE7816_BWTE_SHIFT)                  /*!< UART0_IE7816: BWTE Mask                 */
#define UART_IE7816_BWTE_SHIFT                   5                                                   /*!< UART0_IE7816: BWTE Position             */
#define UART_IE7816_CWTE_MASK                    (0x01UL << UART_IE7816_CWTE_SHIFT)                  /*!< UART0_IE7816: CWTE Mask                 */
#define UART_IE7816_CWTE_SHIFT                   6                                                   /*!< UART0_IE7816: CWTE Position             */
#define UART_IE7816_WTE_MASK                     (0x01UL << UART_IE7816_WTE_SHIFT)                   /*!< UART0_IE7816: WTE Mask                  */
#define UART_IE7816_WTE_SHIFT                    7                                                   /*!< UART0_IE7816: WTE Position              */
/* ------- IS7816 Bit Fields                        ------ */
#define UART_IS7816_RXT_MASK                     (0x01UL << UART_IS7816_RXT_SHIFT)                   /*!< UART0_IS7816: RXT Mask                  */
#define UART_IS7816_RXT_SHIFT                    0                                                   /*!< UART0_IS7816: RXT Position              */
#define UART_IS7816_TXT_MASK                     (0x01UL << UART_IS7816_TXT_SHIFT)                   /*!< UART0_IS7816: TXT Mask                  */
#define UART_IS7816_TXT_SHIFT                    1                                                   /*!< UART0_IS7816: TXT Position              */
#define UART_IS7816_GTV_MASK                     (0x01UL << UART_IS7816_GTV_SHIFT)                   /*!< UART0_IS7816: GTV Mask                  */
#define UART_IS7816_GTV_SHIFT                    2                                                   /*!< UART0_IS7816: GTV Position              */
#define UART_IS7816_INITD_MASK                   (0x01UL << UART_IS7816_INITD_SHIFT)                 /*!< UART0_IS7816: INITD Mask                */
#define UART_IS7816_INITD_SHIFT                  4                                                   /*!< UART0_IS7816: INITD Position            */
#define UART_IS7816_BWT_MASK                     (0x01UL << UART_IS7816_BWT_SHIFT)                   /*!< UART0_IS7816: BWT Mask                  */
#define UART_IS7816_BWT_SHIFT                    5                                                   /*!< UART0_IS7816: BWT Position              */
#define UART_IS7816_CWT_MASK                     (0x01UL << UART_IS7816_CWT_SHIFT)                   /*!< UART0_IS7816: CWT Mask                  */
#define UART_IS7816_CWT_SHIFT                    6                                                   /*!< UART0_IS7816: CWT Position              */
#define UART_IS7816_WT_MASK                      (0x01UL << UART_IS7816_WT_SHIFT)                    /*!< UART0_IS7816: WT Mask                   */
#define UART_IS7816_WT_SHIFT                     7                                                   /*!< UART0_IS7816: WT Position               */
/* ------- WP7816T0 Bit Fields                      ------ */
#define UART_WP7816T0_WI_MASK                    (0xFFUL << UART_WP7816T0_WI_SHIFT)                  /*!< UART0_WP7816T0: WI Mask                 */
#define UART_WP7816T0_WI_SHIFT                   0                                                   /*!< UART0_WP7816T0: WI Position             */
#define UART_WP7816T0_WI(x)                      (((uint8_t)(((uint8_t)(x))<<UART_WP7816T0_WI_SHIFT))&UART_WP7816T0_WI_MASK) /*!< UART0_WP7816T0                          */
/* ------- WP7816T1 Bit Fields                      ------ */
#define UART_WP7816T1_BWI_MASK                   (0x0FUL << UART_WP7816T1_BWI_SHIFT)                 /*!< UART0_WP7816T1: BWI Mask                */
#define UART_WP7816T1_BWI_SHIFT                  0                                                   /*!< UART0_WP7816T1: BWI Position            */
#define UART_WP7816T1_BWI(x)                     (((uint8_t)(((uint8_t)(x))<<UART_WP7816T1_BWI_SHIFT))&UART_WP7816T1_BWI_MASK) /*!< UART0_WP7816T1                          */
#define UART_WP7816T1_CWI_MASK                   (0x0FUL << UART_WP7816T1_CWI_SHIFT)                 /*!< UART0_WP7816T1: CWI Mask                */
#define UART_WP7816T1_CWI_SHIFT                  4                                                   /*!< UART0_WP7816T1: CWI Position            */
#define UART_WP7816T1_CWI(x)                     (((uint8_t)(((uint8_t)(x))<<UART_WP7816T1_CWI_SHIFT))&UART_WP7816T1_CWI_MASK) /*!< UART0_WP7816T1                          */
/* ------- WN7816 Bit Fields                        ------ */
#define UART_WN7816_GTN_MASK                     (0xFFUL << UART_WN7816_GTN_SHIFT)                   /*!< UART0_WN7816: GTN Mask                  */
#define UART_WN7816_GTN_SHIFT                    0                                                   /*!< UART0_WN7816: GTN Position              */
#define UART_WN7816_GTN(x)                       (((uint8_t)(((uint8_t)(x))<<UART_WN7816_GTN_SHIFT))&UART_WN7816_GTN_MASK) /*!< UART0_WN7816                            */
/* ------- WF7816 Bit Fields                        ------ */
#define UART_WF7816_GTFD_MASK                    (0xFFUL << UART_WF7816_GTFD_SHIFT)                  /*!< UART0_WF7816: GTFD Mask                 */
#define UART_WF7816_GTFD_SHIFT                   0                                                   /*!< UART0_WF7816: GTFD Position             */
#define UART_WF7816_GTFD(x)                      (((uint8_t)(((uint8_t)(x))<<UART_WF7816_GTFD_SHIFT))&UART_WF7816_GTFD_MASK) /*!< UART0_WF7816                            */
/* ------- ET7816 Bit Fields                        ------ */
#define UART_ET7816_RXTHRESHOLD_MASK             (0x0FUL << UART_ET7816_RXTHRESHOLD_SHIFT)           /*!< UART0_ET7816: RXTHRESHOLD Mask          */
#define UART_ET7816_RXTHRESHOLD_SHIFT            0                                                   /*!< UART0_ET7816: RXTHRESHOLD Position      */
#define UART_ET7816_RXTHRESHOLD(x)               (((uint8_t)(((uint8_t)(x))<<UART_ET7816_RXTHRESHOLD_SHIFT))&UART_ET7816_RXTHRESHOLD_MASK) /*!< UART0_ET7816                            */
#define UART_ET7816_TXTHRESHOLD_MASK             (0x0FUL << UART_ET7816_TXTHRESHOLD_SHIFT)           /*!< UART0_ET7816: TXTHRESHOLD Mask          */
#define UART_ET7816_TXTHRESHOLD_SHIFT            4                                                   /*!< UART0_ET7816: TXTHRESHOLD Position      */
#define UART_ET7816_TXTHRESHOLD(x)               (((uint8_t)(((uint8_t)(x))<<UART_ET7816_TXTHRESHOLD_SHIFT))&UART_ET7816_TXTHRESHOLD_MASK) /*!< UART0_ET7816                            */
/* ------- TL7816 Bit Fields                        ------ */
#define UART_TL7816_TLEN_MASK                    (0xFFUL << UART_TL7816_TLEN_SHIFT)                  /*!< UART0_TL7816: TLEN Mask                 */
#define UART_TL7816_TLEN_SHIFT                   0                                                   /*!< UART0_TL7816: TLEN Position             */
#define UART_TL7816_TLEN(x)                      (((uint8_t)(((uint8_t)(x))<<UART_TL7816_TLEN_SHIFT))&UART_TL7816_TLEN_MASK) /*!< UART0_TL7816                            */

/* UART0 - Peripheral instance base addresses */
#define UART0_BasePtr                  0x4006A000UL
#define UART0                          ((UART_Type *) UART0_BasePtr)
#define UART0_BASE_PTR                 (UART0)

/* ================================================================================ */
/* ================           UART1 (file:UART1_0)                 ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
typedef struct {                                /*!<       UART1 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: Baud Rate Register: High                                     */
   __IO uint8_t   BDL;                          /*!< 0001: Baud Rate Register: Low                                      */
   __IO uint8_t   C1;                           /*!< 0002: Control Register 1                                           */
   __IO uint8_t   C2;                           /*!< 0003: Control Register 2                                           */
   __I  uint8_t   S1;                           /*!< 0004: Status Register 1                                            */
   __IO uint8_t   S2;                           /*!< 0005: Status Register 2                                            */
   __IO uint8_t   C3;                           /*!< 0006: Control Register 3                                           */
   __IO uint8_t   D;                            /*!< 0007: Data Register                                                */
   __IO uint8_t   MA1;                          /*!< 0008: Match Address Registers 1                                    */
   __IO uint8_t   MA2;                          /*!< 0009: Match Address Registers 2                                    */
   __IO uint8_t   C4;                           /*!< 000A: Control Register 4                                           */
   __IO uint8_t   C5;                           /*!< 000B: Control Register 5                                           */
   __I  uint8_t   ED;                           /*!< 000C: Extended Data Register                                       */
   __IO uint8_t   MODEM;                        /*!< 000D: Modem Register                                               */
   __IO uint8_t   IR;                           /*!< 000E: Infrared Register                                            */
   __I  uint8_t   RESERVED0;                    /*!< 000F:                                                              */
   __IO uint8_t   PFIFO;                        /*!< 0010: FIFO Parameters                                              */
   __IO uint8_t   CFIFO;                        /*!< 0011: FIFO Control Register                                        */
   __IO uint8_t   SFIFO;                        /*!< 0012: FIFO Status Register                                         */
   __IO uint8_t   TWFIFO;                       /*!< 0013: FIFO Transmit Watermark                                      */
   __I  uint8_t   TCFIFO;                       /*!< 0014: FIFO Transmit Count                                          */
   __IO uint8_t   RWFIFO;                       /*!< 0015: FIFO Receive Watermark                                       */
   __I  uint8_t   RCFIFO;                       /*!< 0016: FIFO Receive Count                                           */
} UART1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART1' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- BDH Bit Fields                           ------ */
/* ------- BDL Bit Fields                           ------ */
/* ------- C1 Bit Fields                            ------ */
/* ------- C2 Bit Fields                            ------ */
/* ------- S1 Bit Fields                            ------ */
/* ------- S2 Bit Fields                            ------ */
/* ------- C3 Bit Fields                            ------ */
/* ------- D Bit Fields                             ------ */
/* ------- MA Bit Fields                            ------ */
/* ------- C4 Bit Fields                            ------ */
/* ------- C5 Bit Fields                            ------ */
/* ------- ED Bit Fields                            ------ */
/* ------- MODEM Bit Fields                         ------ */
/* ------- IR Bit Fields                            ------ */
/* ------- PFIFO Bit Fields                         ------ */
/* ------- CFIFO Bit Fields                         ------ */
/* ------- SFIFO Bit Fields                         ------ */
/* ------- TWFIFO Bit Fields                        ------ */
/* ------- TCFIFO Bit Fields                        ------ */
/* ------- RWFIFO Bit Fields                        ------ */
/* ------- RCFIFO Bit Fields                        ------ */

/* UART1 - Peripheral instance base addresses */
#define UART1_BasePtr                  0x4006B000UL
#define UART1                          ((UART1_Type *) UART1_BasePtr)
#define UART1_BASE_PTR                 (UART1)

/* ================================================================================ */
/* ================           UART2 (derived from UART1)           ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */

/* UART2 - Peripheral instance base addresses */
#define UART2_BasePtr                  0x4006C000UL
#define UART2                          ((UART1_Type *) UART2_BasePtr)
#define UART2_BASE_PTR                 (UART2)

/* ================================================================================ */
/* ================           USB0 (file:USB0_CLK_RECOVER)         ================ */
/* ================================================================================ */

/**
 * @brief Universal Serial Bus, OTG Capable Controller
 */
typedef struct {                                /*!<       USB0 Structure                                               */
   __I  uint8_t   PERID;                        /*!< 0000: Peripheral ID Register                                       */
   __I  uint8_t   RESERVED0[3];                 /*!< 0001:                                                              */
   __I  uint8_t   IDCOMP;                       /*!< 0004: Peripheral ID Complement Register                            */
   __I  uint8_t   RESERVED1[3];                 /*!< 0005:                                                              */
   __I  uint8_t   REV;                          /*!< 0008: Peripheral Revision Register                                 */
   __I  uint8_t   RESERVED2[3];                 /*!< 0009:                                                              */
   __I  uint8_t   ADDINFO;                      /*!< 000C: Peripheral Additional Info Register                          */
   __I  uint8_t   RESERVED3[3];                 /*!< 000D:                                                              */
   __IO uint8_t   OTGISTAT;                     /*!< 0010: OTG Interrupt Status Register                                */
   __I  uint8_t   RESERVED4[3];                 /*!< 0011:                                                              */
   __IO uint8_t   OTGICR;                       /*!< 0014: OTG Interrupt Control Register                               */
   __I  uint8_t   RESERVED5[3];                 /*!< 0015:                                                              */
   __IO uint8_t   OTGSTAT;                      /*!< 0018: OTG Status Register                                          */
   __I  uint8_t   RESERVED6[3];                 /*!< 0019:                                                              */
   __IO uint8_t   OTGCTL;                       /*!< 001C: OTG Control Register                                         */
   __I  uint8_t   RESERVED7[99];                /*!< 001D:                                                              */
   __IO uint8_t   ISTAT;                        /*!< 0080: Interrupt Status Register                                    */
   __I  uint8_t   RESERVED8[3];                 /*!< 0081:                                                              */
   __IO uint8_t   INTEN;                        /*!< 0084: Interrupt Enable Register                                    */
   __I  uint8_t   RESERVED9[3];                 /*!< 0085:                                                              */
   __IO uint8_t   ERRSTAT;                      /*!< 0088: Error Interrupt Status Register                              */
   __I  uint8_t   RESERVED10[3];                /*!< 0089:                                                              */
   __IO uint8_t   ERREN;                        /*!< 008C: Error Interrupt Enable Register                              */
   __I  uint8_t   RESERVED11[3];                /*!< 008D:                                                              */
   __I  uint8_t   STAT;                         /*!< 0090: Status Register                                              */
   __I  uint8_t   RESERVED12[3];                /*!< 0091:                                                              */
   __IO uint8_t   CTL;                          /*!< 0094: Control Register                                             */
   __I  uint8_t   RESERVED13[3];                /*!< 0095:                                                              */
   __IO uint8_t   ADDR;                         /*!< 0098: Address Register                                             */
   __I  uint8_t   RESERVED14[3];                /*!< 0099:                                                              */
   __IO uint8_t   BDTPAGE1;                     /*!< 009C: BDT Page Register 1                                          */
   __I  uint8_t   RESERVED15[3];                /*!< 009D:                                                              */
   __IO uint8_t   FRMNUML;                      /*!< 00A0: Frame Number Register Low                                    */
   __I  uint8_t   RESERVED16[3];                /*!< 00A1:                                                              */
   __IO uint8_t   FRMNUMH;                      /*!< 00A4: Frame Number Register High                                   */
   __I  uint8_t   RESERVED17[3];                /*!< 00A5:                                                              */
   __IO uint8_t   TOKEN;                        /*!< 00A8: Token Register                                               */
   __I  uint8_t   RESERVED18[3];                /*!< 00A9:                                                              */
   __IO uint8_t   SOFTHLD;                      /*!< 00AC: SOF Threshold Register                                       */
   __I  uint8_t   RESERVED19[3];                /*!< 00AD:                                                              */
   __IO uint8_t   BDTPAGE2;                     /*!< 00B0: BDT Page Register 2                                          */
   __I  uint8_t   RESERVED20[3];                /*!< 00B1:                                                              */
   __IO uint8_t   BDTPAGE3;                     /*!< 00B4: BDT Page Register 3                                          */
   __I  uint8_t   RESERVED21[11];               /*!< 00B5:                                                              */
   struct { /* (cluster) */                     /*!< 00C0: (size=0x0040, 64)                                            */
      __IO uint8_t   ENDPT;                     /*!< 00C0: Endpoint Control Register                                    */
      __I  uint8_t   RESERVED0[3];              /*!< 00C1:                                                              */
   } ENDPOINT[16];
   __IO uint8_t   USBCTRL;                      /*!< 0100: USB Control Register                                         */
   __I  uint8_t   RESERVED22[3];                /*!< 0101:                                                              */
   __I  uint8_t   OBSERVE;                      /*!< 0104: USB OTG Observe Register                                     */
   __I  uint8_t   RESERVED23[3];                /*!< 0105:                                                              */
   __IO uint8_t   CONTROL;                      /*!< 0108: USB OTG Control Register                                     */
   __I  uint8_t   RESERVED24[3];                /*!< 0109:                                                              */
   __IO uint8_t   USBTRC0;                      /*!< 010C: USB Transceiver Control Register 0                           */
   __I  uint8_t   RESERVED25[7];                /*!< 010D:                                                              */
   __IO uint8_t   USBFRMADJUST;                 /*!< 0114: Frame Adjust Register                                        */
   __I  uint8_t   RESERVED26[43];               /*!< 0115:                                                              */
   __IO uint8_t   CLK_RECOVER_CTRL;             /*!< 0140: USB Clock recovery control                                   */
   __I  uint8_t   RESERVED27[3];                /*!< 0141:                                                              */
   __IO uint8_t   CLK_RECOVER_IRC_EN;           /*!< 0144: IRC48M oscillator enable register                            */
   __I  uint8_t   RESERVED28[23];               /*!< 0145:                                                              */
   __IO uint8_t   CLK_RECOVER_INT_STATUS;       /*!< 015C: Clock recovery separated interrupt status                    */
} USB0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'USB0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PERID Bit Fields                         ------ */
#define USB_PERID_ID_MASK                        (0x3FUL << USB_PERID_ID_SHIFT)                      /*!< USB0_PERID: ID Mask                     */
#define USB_PERID_ID_SHIFT                       0                                                   /*!< USB0_PERID: ID Position                 */
#define USB_PERID_ID(x)                          (((uint8_t)(((uint8_t)(x))<<USB_PERID_ID_SHIFT))&USB_PERID_ID_MASK) /*!< USB0_PERID                              */
/* ------- IDCOMP Bit Fields                        ------ */
#define USB_IDCOMP_NID_MASK                      (0x3FUL << USB_IDCOMP_NID_SHIFT)                    /*!< USB0_IDCOMP: NID Mask                   */
#define USB_IDCOMP_NID_SHIFT                     0                                                   /*!< USB0_IDCOMP: NID Position               */
#define USB_IDCOMP_NID(x)                        (((uint8_t)(((uint8_t)(x))<<USB_IDCOMP_NID_SHIFT))&USB_IDCOMP_NID_MASK) /*!< USB0_IDCOMP                             */
/* ------- REV Bit Fields                           ------ */
#define USB_REV_REV_MASK                         (0xFFUL << USB_REV_REV_SHIFT)                       /*!< USB0_REV: REV Mask                      */
#define USB_REV_REV_SHIFT                        0                                                   /*!< USB0_REV: REV Position                  */
#define USB_REV_REV(x)                           (((uint8_t)(((uint8_t)(x))<<USB_REV_REV_SHIFT))&USB_REV_REV_MASK) /*!< USB0_REV                                */
/* ------- ADDINFO Bit Fields                       ------ */
#define USB_ADDINFO_IEHOST_MASK                  (0x01UL << USB_ADDINFO_IEHOST_SHIFT)                /*!< USB0_ADDINFO: IEHOST Mask               */
#define USB_ADDINFO_IEHOST_SHIFT                 0                                                   /*!< USB0_ADDINFO: IEHOST Position           */
#define USB_ADDINFO_IRQNUM_MASK                  (0x1FUL << USB_ADDINFO_IRQNUM_SHIFT)                /*!< USB0_ADDINFO: IRQNUM Mask               */
#define USB_ADDINFO_IRQNUM_SHIFT                 3                                                   /*!< USB0_ADDINFO: IRQNUM Position           */
#define USB_ADDINFO_IRQNUM(x)                    (((uint8_t)(((uint8_t)(x))<<USB_ADDINFO_IRQNUM_SHIFT))&USB_ADDINFO_IRQNUM_MASK) /*!< USB0_ADDINFO                            */
/* ------- OTGISTAT Bit Fields                      ------ */
#define USB_OTGISTAT_AVBUSCHG_MASK               (0x01UL << USB_OTGISTAT_AVBUSCHG_SHIFT)             /*!< USB0_OTGISTAT: AVBUSCHG Mask            */
#define USB_OTGISTAT_AVBUSCHG_SHIFT              0                                                   /*!< USB0_OTGISTAT: AVBUSCHG Position        */
#define USB_OTGISTAT_B_SESS_CHG_MASK             (0x01UL << USB_OTGISTAT_B_SESS_CHG_SHIFT)           /*!< USB0_OTGISTAT: B_SESS_CHG Mask          */
#define USB_OTGISTAT_B_SESS_CHG_SHIFT            2                                                   /*!< USB0_OTGISTAT: B_SESS_CHG Position      */
#define USB_OTGISTAT_SESSVLDCHG_MASK             (0x01UL << USB_OTGISTAT_SESSVLDCHG_SHIFT)           /*!< USB0_OTGISTAT: SESSVLDCHG Mask          */
#define USB_OTGISTAT_SESSVLDCHG_SHIFT            3                                                   /*!< USB0_OTGISTAT: SESSVLDCHG Position      */
#define USB_OTGISTAT_LINE_STATE_CHG_MASK         (0x01UL << USB_OTGISTAT_LINE_STATE_CHG_SHIFT)       /*!< USB0_OTGISTAT: LINE_STATE_CHG Mask      */
#define USB_OTGISTAT_LINE_STATE_CHG_SHIFT        5                                                   /*!< USB0_OTGISTAT: LINE_STATE_CHG Position  */
#define USB_OTGISTAT_ONEMSEC_MASK                (0x01UL << USB_OTGISTAT_ONEMSEC_SHIFT)              /*!< USB0_OTGISTAT: ONEMSEC Mask             */
#define USB_OTGISTAT_ONEMSEC_SHIFT               6                                                   /*!< USB0_OTGISTAT: ONEMSEC Position         */
#define USB_OTGISTAT_IDCHG_MASK                  (0x01UL << USB_OTGISTAT_IDCHG_SHIFT)                /*!< USB0_OTGISTAT: IDCHG Mask               */
#define USB_OTGISTAT_IDCHG_SHIFT                 7                                                   /*!< USB0_OTGISTAT: IDCHG Position           */
/* ------- OTGICR Bit Fields                        ------ */
#define USB_OTGICR_AVBUSEN_MASK                  (0x01UL << USB_OTGICR_AVBUSEN_SHIFT)                /*!< USB0_OTGICR: AVBUSEN Mask               */
#define USB_OTGICR_AVBUSEN_SHIFT                 0                                                   /*!< USB0_OTGICR: AVBUSEN Position           */
#define USB_OTGICR_BSESSEN_MASK                  (0x01UL << USB_OTGICR_BSESSEN_SHIFT)                /*!< USB0_OTGICR: BSESSEN Mask               */
#define USB_OTGICR_BSESSEN_SHIFT                 2                                                   /*!< USB0_OTGICR: BSESSEN Position           */
#define USB_OTGICR_SESSVLDEN_MASK                (0x01UL << USB_OTGICR_SESSVLDEN_SHIFT)              /*!< USB0_OTGICR: SESSVLDEN Mask             */
#define USB_OTGICR_SESSVLDEN_SHIFT               3                                                   /*!< USB0_OTGICR: SESSVLDEN Position         */
#define USB_OTGICR_LINESTATEEN_MASK              (0x01UL << USB_OTGICR_LINESTATEEN_SHIFT)            /*!< USB0_OTGICR: LINESTATEEN Mask           */
#define USB_OTGICR_LINESTATEEN_SHIFT             5                                                   /*!< USB0_OTGICR: LINESTATEEN Position       */
#define USB_OTGICR_ONEMSECEN_MASK                (0x01UL << USB_OTGICR_ONEMSECEN_SHIFT)              /*!< USB0_OTGICR: ONEMSECEN Mask             */
#define USB_OTGICR_ONEMSECEN_SHIFT               6                                                   /*!< USB0_OTGICR: ONEMSECEN Position         */
#define USB_OTGICR_IDEN_MASK                     (0x01UL << USB_OTGICR_IDEN_SHIFT)                   /*!< USB0_OTGICR: IDEN Mask                  */
#define USB_OTGICR_IDEN_SHIFT                    7                                                   /*!< USB0_OTGICR: IDEN Position              */
/* ------- OTGSTAT Bit Fields                       ------ */
#define USB_OTGSTAT_AVBUSVLD_MASK                (0x01UL << USB_OTGSTAT_AVBUSVLD_SHIFT)              /*!< USB0_OTGSTAT: AVBUSVLD Mask             */
#define USB_OTGSTAT_AVBUSVLD_SHIFT               0                                                   /*!< USB0_OTGSTAT: AVBUSVLD Position         */
#define USB_OTGSTAT_BSESSEND_MASK                (0x01UL << USB_OTGSTAT_BSESSEND_SHIFT)              /*!< USB0_OTGSTAT: BSESSEND Mask             */
#define USB_OTGSTAT_BSESSEND_SHIFT               2                                                   /*!< USB0_OTGSTAT: BSESSEND Position         */
#define USB_OTGSTAT_SESS_VLD_MASK                (0x01UL << USB_OTGSTAT_SESS_VLD_SHIFT)              /*!< USB0_OTGSTAT: SESS_VLD Mask             */
#define USB_OTGSTAT_SESS_VLD_SHIFT               3                                                   /*!< USB0_OTGSTAT: SESS_VLD Position         */
#define USB_OTGSTAT_LINESTATESTABLE_MASK         (0x01UL << USB_OTGSTAT_LINESTATESTABLE_SHIFT)       /*!< USB0_OTGSTAT: LINESTATESTABLE Mask      */
#define USB_OTGSTAT_LINESTATESTABLE_SHIFT        5                                                   /*!< USB0_OTGSTAT: LINESTATESTABLE Position  */
#define USB_OTGSTAT_ONEMSECEN_MASK               (0x01UL << USB_OTGSTAT_ONEMSECEN_SHIFT)             /*!< USB0_OTGSTAT: ONEMSECEN Mask            */
#define USB_OTGSTAT_ONEMSECEN_SHIFT              6                                                   /*!< USB0_OTGSTAT: ONEMSECEN Position        */
#define USB_OTGSTAT_ID_MASK                      (0x01UL << USB_OTGSTAT_ID_SHIFT)                    /*!< USB0_OTGSTAT: ID Mask                   */
#define USB_OTGSTAT_ID_SHIFT                     7                                                   /*!< USB0_OTGSTAT: ID Position               */
/* ------- OTGCTL Bit Fields                        ------ */
#define USB_OTGCTL_OTGEN_MASK                    (0x01UL << USB_OTGCTL_OTGEN_SHIFT)                  /*!< USB0_OTGCTL: OTGEN Mask                 */
#define USB_OTGCTL_OTGEN_SHIFT                   2                                                   /*!< USB0_OTGCTL: OTGEN Position             */
#define USB_OTGCTL_DMLOW_MASK                    (0x01UL << USB_OTGCTL_DMLOW_SHIFT)                  /*!< USB0_OTGCTL: DMLOW Mask                 */
#define USB_OTGCTL_DMLOW_SHIFT                   4                                                   /*!< USB0_OTGCTL: DMLOW Position             */
#define USB_OTGCTL_DPLOW_MASK                    (0x01UL << USB_OTGCTL_DPLOW_SHIFT)                  /*!< USB0_OTGCTL: DPLOW Mask                 */
#define USB_OTGCTL_DPLOW_SHIFT                   5                                                   /*!< USB0_OTGCTL: DPLOW Position             */
#define USB_OTGCTL_DPHIGH_MASK                   (0x01UL << USB_OTGCTL_DPHIGH_SHIFT)                 /*!< USB0_OTGCTL: DPHIGH Mask                */
#define USB_OTGCTL_DPHIGH_SHIFT                  7                                                   /*!< USB0_OTGCTL: DPHIGH Position            */
/* ------- ISTAT Bit Fields                         ------ */
#define USB_ISTAT_USBRST_MASK                    (0x01UL << USB_ISTAT_USBRST_SHIFT)                  /*!< USB0_ISTAT: USBRST Mask                 */
#define USB_ISTAT_USBRST_SHIFT                   0                                                   /*!< USB0_ISTAT: USBRST Position             */
#define USB_ISTAT_ERROR_MASK                     (0x01UL << USB_ISTAT_ERROR_SHIFT)                   /*!< USB0_ISTAT: ERROR Mask                  */
#define USB_ISTAT_ERROR_SHIFT                    1                                                   /*!< USB0_ISTAT: ERROR Position              */
#define USB_ISTAT_SOFTOK_MASK                    (0x01UL << USB_ISTAT_SOFTOK_SHIFT)                  /*!< USB0_ISTAT: SOFTOK Mask                 */
#define USB_ISTAT_SOFTOK_SHIFT                   2                                                   /*!< USB0_ISTAT: SOFTOK Position             */
#define USB_ISTAT_TOKDNE_MASK                    (0x01UL << USB_ISTAT_TOKDNE_SHIFT)                  /*!< USB0_ISTAT: TOKDNE Mask                 */
#define USB_ISTAT_TOKDNE_SHIFT                   3                                                   /*!< USB0_ISTAT: TOKDNE Position             */
#define USB_ISTAT_SLEEP_MASK                     (0x01UL << USB_ISTAT_SLEEP_SHIFT)                   /*!< USB0_ISTAT: SLEEP Mask                  */
#define USB_ISTAT_SLEEP_SHIFT                    4                                                   /*!< USB0_ISTAT: SLEEP Position              */
#define USB_ISTAT_RESUME_MASK                    (0x01UL << USB_ISTAT_RESUME_SHIFT)                  /*!< USB0_ISTAT: RESUME Mask                 */
#define USB_ISTAT_RESUME_SHIFT                   5                                                   /*!< USB0_ISTAT: RESUME Position             */
#define USB_ISTAT_ATTACH_MASK                    (0x01UL << USB_ISTAT_ATTACH_SHIFT)                  /*!< USB0_ISTAT: ATTACH Mask                 */
#define USB_ISTAT_ATTACH_SHIFT                   6                                                   /*!< USB0_ISTAT: ATTACH Position             */
#define USB_ISTAT_STALL_MASK                     (0x01UL << USB_ISTAT_STALL_SHIFT)                   /*!< USB0_ISTAT: STALL Mask                  */
#define USB_ISTAT_STALL_SHIFT                    7                                                   /*!< USB0_ISTAT: STALL Position              */
/* ------- INTEN Bit Fields                         ------ */
#define USB_INTEN_USBRSTEN_MASK                  (0x01UL << USB_INTEN_USBRSTEN_SHIFT)                /*!< USB0_INTEN: USBRSTEN Mask               */
#define USB_INTEN_USBRSTEN_SHIFT                 0                                                   /*!< USB0_INTEN: USBRSTEN Position           */
#define USB_INTEN_ERROREN_MASK                   (0x01UL << USB_INTEN_ERROREN_SHIFT)                 /*!< USB0_INTEN: ERROREN Mask                */
#define USB_INTEN_ERROREN_SHIFT                  1                                                   /*!< USB0_INTEN: ERROREN Position            */
#define USB_INTEN_SOFTOKEN_MASK                  (0x01UL << USB_INTEN_SOFTOKEN_SHIFT)                /*!< USB0_INTEN: SOFTOKEN Mask               */
#define USB_INTEN_SOFTOKEN_SHIFT                 2                                                   /*!< USB0_INTEN: SOFTOKEN Position           */
#define USB_INTEN_TOKDNEEN_MASK                  (0x01UL << USB_INTEN_TOKDNEEN_SHIFT)                /*!< USB0_INTEN: TOKDNEEN Mask               */
#define USB_INTEN_TOKDNEEN_SHIFT                 3                                                   /*!< USB0_INTEN: TOKDNEEN Position           */
#define USB_INTEN_SLEEPEN_MASK                   (0x01UL << USB_INTEN_SLEEPEN_SHIFT)                 /*!< USB0_INTEN: SLEEPEN Mask                */
#define USB_INTEN_SLEEPEN_SHIFT                  4                                                   /*!< USB0_INTEN: SLEEPEN Position            */
#define USB_INTEN_RESUMEEN_MASK                  (0x01UL << USB_INTEN_RESUMEEN_SHIFT)                /*!< USB0_INTEN: RESUMEEN Mask               */
#define USB_INTEN_RESUMEEN_SHIFT                 5                                                   /*!< USB0_INTEN: RESUMEEN Position           */
#define USB_INTEN_ATTACHEN_MASK                  (0x01UL << USB_INTEN_ATTACHEN_SHIFT)                /*!< USB0_INTEN: ATTACHEN Mask               */
#define USB_INTEN_ATTACHEN_SHIFT                 6                                                   /*!< USB0_INTEN: ATTACHEN Position           */
#define USB_INTEN_STALLEN_MASK                   (0x01UL << USB_INTEN_STALLEN_SHIFT)                 /*!< USB0_INTEN: STALLEN Mask                */
#define USB_INTEN_STALLEN_SHIFT                  7                                                   /*!< USB0_INTEN: STALLEN Position            */
/* ------- ERRSTAT Bit Fields                       ------ */
#define USB_ERRSTAT_PIDERR_MASK                  (0x01UL << USB_ERRSTAT_PIDERR_SHIFT)                /*!< USB0_ERRSTAT: PIDERR Mask               */
#define USB_ERRSTAT_PIDERR_SHIFT                 0                                                   /*!< USB0_ERRSTAT: PIDERR Position           */
#define USB_ERRSTAT_CRC5EOF_MASK                 (0x01UL << USB_ERRSTAT_CRC5EOF_SHIFT)               /*!< USB0_ERRSTAT: CRC5EOF Mask              */
#define USB_ERRSTAT_CRC5EOF_SHIFT                1                                                   /*!< USB0_ERRSTAT: CRC5EOF Position          */
#define USB_ERRSTAT_CRC16_MASK                   (0x01UL << USB_ERRSTAT_CRC16_SHIFT)                 /*!< USB0_ERRSTAT: CRC16 Mask                */
#define USB_ERRSTAT_CRC16_SHIFT                  2                                                   /*!< USB0_ERRSTAT: CRC16 Position            */
#define USB_ERRSTAT_DFN8_MASK                    (0x01UL << USB_ERRSTAT_DFN8_SHIFT)                  /*!< USB0_ERRSTAT: DFN8 Mask                 */
#define USB_ERRSTAT_DFN8_SHIFT                   3                                                   /*!< USB0_ERRSTAT: DFN8 Position             */
#define USB_ERRSTAT_BTOERR_MASK                  (0x01UL << USB_ERRSTAT_BTOERR_SHIFT)                /*!< USB0_ERRSTAT: BTOERR Mask               */
#define USB_ERRSTAT_BTOERR_SHIFT                 4                                                   /*!< USB0_ERRSTAT: BTOERR Position           */
#define USB_ERRSTAT_DMAERR_MASK                  (0x01UL << USB_ERRSTAT_DMAERR_SHIFT)                /*!< USB0_ERRSTAT: DMAERR Mask               */
#define USB_ERRSTAT_DMAERR_SHIFT                 5                                                   /*!< USB0_ERRSTAT: DMAERR Position           */
#define USB_ERRSTAT_BTSERR_MASK                  (0x01UL << USB_ERRSTAT_BTSERR_SHIFT)                /*!< USB0_ERRSTAT: BTSERR Mask               */
#define USB_ERRSTAT_BTSERR_SHIFT                 7                                                   /*!< USB0_ERRSTAT: BTSERR Position           */
/* ------- ERREN Bit Fields                         ------ */
#define USB_ERREN_PIDERREN_MASK                  (0x01UL << USB_ERREN_PIDERREN_SHIFT)                /*!< USB0_ERREN: PIDERREN Mask               */
#define USB_ERREN_PIDERREN_SHIFT                 0                                                   /*!< USB0_ERREN: PIDERREN Position           */
#define USB_ERREN_CRC5EOFEN_MASK                 (0x01UL << USB_ERREN_CRC5EOFEN_SHIFT)               /*!< USB0_ERREN: CRC5EOFEN Mask              */
#define USB_ERREN_CRC5EOFEN_SHIFT                1                                                   /*!< USB0_ERREN: CRC5EOFEN Position          */
#define USB_ERREN_CRC16EN_MASK                   (0x01UL << USB_ERREN_CRC16EN_SHIFT)                 /*!< USB0_ERREN: CRC16EN Mask                */
#define USB_ERREN_CRC16EN_SHIFT                  2                                                   /*!< USB0_ERREN: CRC16EN Position            */
#define USB_ERREN_DFN8EN_MASK                    (0x01UL << USB_ERREN_DFN8EN_SHIFT)                  /*!< USB0_ERREN: DFN8EN Mask                 */
#define USB_ERREN_DFN8EN_SHIFT                   3                                                   /*!< USB0_ERREN: DFN8EN Position             */
#define USB_ERREN_BTOERREN_MASK                  (0x01UL << USB_ERREN_BTOERREN_SHIFT)                /*!< USB0_ERREN: BTOERREN Mask               */
#define USB_ERREN_BTOERREN_SHIFT                 4                                                   /*!< USB0_ERREN: BTOERREN Position           */
#define USB_ERREN_DMAERREN_MASK                  (0x01UL << USB_ERREN_DMAERREN_SHIFT)                /*!< USB0_ERREN: DMAERREN Mask               */
#define USB_ERREN_DMAERREN_SHIFT                 5                                                   /*!< USB0_ERREN: DMAERREN Position           */
#define USB_ERREN_BTSERREN_MASK                  (0x01UL << USB_ERREN_BTSERREN_SHIFT)                /*!< USB0_ERREN: BTSERREN Mask               */
#define USB_ERREN_BTSERREN_SHIFT                 7                                                   /*!< USB0_ERREN: BTSERREN Position           */
/* ------- STAT Bit Fields                          ------ */
#define USB_STAT_ODD_MASK                        (0x01UL << USB_STAT_ODD_SHIFT)                      /*!< USB0_STAT: ODD Mask                     */
#define USB_STAT_ODD_SHIFT                       2                                                   /*!< USB0_STAT: ODD Position                 */
#define USB_STAT_TX_MASK                         (0x01UL << USB_STAT_TX_SHIFT)                       /*!< USB0_STAT: TX Mask                      */
#define USB_STAT_TX_SHIFT                        3                                                   /*!< USB0_STAT: TX Position                  */
#define USB_STAT_ENDP_MASK                       (0x0FUL << USB_STAT_ENDP_SHIFT)                     /*!< USB0_STAT: ENDP Mask                    */
#define USB_STAT_ENDP_SHIFT                      4                                                   /*!< USB0_STAT: ENDP Position                */
#define USB_STAT_ENDP(x)                         (((uint8_t)(((uint8_t)(x))<<USB_STAT_ENDP_SHIFT))&USB_STAT_ENDP_MASK) /*!< USB0_STAT                               */
/* ------- CTL Bit Fields                           ------ */
#define USB_CTL_USBENSOFEN_MASK                  (0x01UL << USB_CTL_USBENSOFEN_SHIFT)                /*!< USB0_CTL: USBENSOFEN Mask               */
#define USB_CTL_USBENSOFEN_SHIFT                 0                                                   /*!< USB0_CTL: USBENSOFEN Position           */
#define USB_CTL_ODDRST_MASK                      (0x01UL << USB_CTL_ODDRST_SHIFT)                    /*!< USB0_CTL: ODDRST Mask                   */
#define USB_CTL_ODDRST_SHIFT                     1                                                   /*!< USB0_CTL: ODDRST Position               */
#define USB_CTL_RESUME_MASK                      (0x01UL << USB_CTL_RESUME_SHIFT)                    /*!< USB0_CTL: RESUME Mask                   */
#define USB_CTL_RESUME_SHIFT                     2                                                   /*!< USB0_CTL: RESUME Position               */
#define USB_CTL_HOSTMODEEN_MASK                  (0x01UL << USB_CTL_HOSTMODEEN_SHIFT)                /*!< USB0_CTL: HOSTMODEEN Mask               */
#define USB_CTL_HOSTMODEEN_SHIFT                 3                                                   /*!< USB0_CTL: HOSTMODEEN Position           */
#define USB_CTL_RESET_MASK                       (0x01UL << USB_CTL_RESET_SHIFT)                     /*!< USB0_CTL: RESET Mask                    */
#define USB_CTL_RESET_SHIFT                      4                                                   /*!< USB0_CTL: RESET Position                */
#define USB_CTL_TXSUSPENDTOKENBUSY_MASK          (0x01UL << USB_CTL_TXSUSPENDTOKENBUSY_SHIFT)        /*!< USB0_CTL: TXSUSPENDTOKENBUSY Mask       */
#define USB_CTL_TXSUSPENDTOKENBUSY_SHIFT         5                                                   /*!< USB0_CTL: TXSUSPENDTOKENBUSY Position   */
#define USB_CTL_SE0_MASK                         (0x01UL << USB_CTL_SE0_SHIFT)                       /*!< USB0_CTL: SE0 Mask                      */
#define USB_CTL_SE0_SHIFT                        6                                                   /*!< USB0_CTL: SE0 Position                  */
#define USB_CTL_JSTATE_MASK                      (0x01UL << USB_CTL_JSTATE_SHIFT)                    /*!< USB0_CTL: JSTATE Mask                   */
#define USB_CTL_JSTATE_SHIFT                     7                                                   /*!< USB0_CTL: JSTATE Position               */
/* ------- ADDR Bit Fields                          ------ */
#define USB_ADDR_ADDR_MASK                       (0x7FUL << USB_ADDR_ADDR_SHIFT)                     /*!< USB0_ADDR: ADDR Mask                    */
#define USB_ADDR_ADDR_SHIFT                      0                                                   /*!< USB0_ADDR: ADDR Position                */
#define USB_ADDR_ADDR(x)                         (((uint8_t)(((uint8_t)(x))<<USB_ADDR_ADDR_SHIFT))&USB_ADDR_ADDR_MASK) /*!< USB0_ADDR                               */
#define USB_ADDR_LSEN_MASK                       (0x01UL << USB_ADDR_LSEN_SHIFT)                     /*!< USB0_ADDR: LSEN Mask                    */
#define USB_ADDR_LSEN_SHIFT                      7                                                   /*!< USB0_ADDR: LSEN Position                */
/* ------- BDTPAGE1 Bit Fields                      ------ */
#define USB_BDTPAGE1_BDTBA_MASK                  (0x7FUL << USB_BDTPAGE1_BDTBA_SHIFT)                /*!< USB0_BDTPAGE1: BDTBA Mask               */
#define USB_BDTPAGE1_BDTBA_SHIFT                 1                                                   /*!< USB0_BDTPAGE1: BDTBA Position           */
#define USB_BDTPAGE1_BDTBA(x)                    (((uint8_t)(((uint8_t)(x))<<USB_BDTPAGE1_BDTBA_SHIFT))&USB_BDTPAGE1_BDTBA_MASK) /*!< USB0_BDTPAGE1                           */
/* ------- FRMNUML Bit Fields                       ------ */
#define USB_FRMNUML_FRM_MASK                     (0xFFUL << USB_FRMNUML_FRM_SHIFT)                   /*!< USB0_FRMNUML: FRM Mask                  */
#define USB_FRMNUML_FRM_SHIFT                    0                                                   /*!< USB0_FRMNUML: FRM Position              */
#define USB_FRMNUML_FRM(x)                       (((uint8_t)(((uint8_t)(x))<<USB_FRMNUML_FRM_SHIFT))&USB_FRMNUML_FRM_MASK) /*!< USB0_FRMNUML                            */
/* ------- FRMNUMH Bit Fields                       ------ */
#define USB_FRMNUMH_FRM_MASK                     (0x07UL << USB_FRMNUMH_FRM_SHIFT)                   /*!< USB0_FRMNUMH: FRM Mask                  */
#define USB_FRMNUMH_FRM_SHIFT                    0                                                   /*!< USB0_FRMNUMH: FRM Position              */
#define USB_FRMNUMH_FRM(x)                       (((uint8_t)(((uint8_t)(x))<<USB_FRMNUMH_FRM_SHIFT))&USB_FRMNUMH_FRM_MASK) /*!< USB0_FRMNUMH                            */
/* ------- TOKEN Bit Fields                         ------ */
#define USB_TOKEN_TOKENENDPT_MASK                (0x0FUL << USB_TOKEN_TOKENENDPT_SHIFT)              /*!< USB0_TOKEN: TOKENENDPT Mask             */
#define USB_TOKEN_TOKENENDPT_SHIFT               0                                                   /*!< USB0_TOKEN: TOKENENDPT Position         */
#define USB_TOKEN_TOKENENDPT(x)                  (((uint8_t)(((uint8_t)(x))<<USB_TOKEN_TOKENENDPT_SHIFT))&USB_TOKEN_TOKENENDPT_MASK) /*!< USB0_TOKEN                              */
#define USB_TOKEN_TOKENPID_MASK                  (0x0FUL << USB_TOKEN_TOKENPID_SHIFT)                /*!< USB0_TOKEN: TOKENPID Mask               */
#define USB_TOKEN_TOKENPID_SHIFT                 4                                                   /*!< USB0_TOKEN: TOKENPID Position           */
#define USB_TOKEN_TOKENPID(x)                    (((uint8_t)(((uint8_t)(x))<<USB_TOKEN_TOKENPID_SHIFT))&USB_TOKEN_TOKENPID_MASK) /*!< USB0_TOKEN                              */
/* ------- SOFTHLD Bit Fields                       ------ */
#define USB_SOFTHLD_CNT_MASK                     (0xFFUL << USB_SOFTHLD_CNT_SHIFT)                   /*!< USB0_SOFTHLD: CNT Mask                  */
#define USB_SOFTHLD_CNT_SHIFT                    0                                                   /*!< USB0_SOFTHLD: CNT Position              */
#define USB_SOFTHLD_CNT(x)                       (((uint8_t)(((uint8_t)(x))<<USB_SOFTHLD_CNT_SHIFT))&USB_SOFTHLD_CNT_MASK) /*!< USB0_SOFTHLD                            */
/* ------- BDTPAGE2 Bit Fields                      ------ */
#define USB_BDTPAGE2_BDTBA_MASK                  (0xFFUL << USB_BDTPAGE2_BDTBA_SHIFT)                /*!< USB0_BDTPAGE2: BDTBA Mask               */
#define USB_BDTPAGE2_BDTBA_SHIFT                 0                                                   /*!< USB0_BDTPAGE2: BDTBA Position           */
#define USB_BDTPAGE2_BDTBA(x)                    (((uint8_t)(((uint8_t)(x))<<USB_BDTPAGE2_BDTBA_SHIFT))&USB_BDTPAGE2_BDTBA_MASK) /*!< USB0_BDTPAGE2                           */
/* ------- BDTPAGE3 Bit Fields                      ------ */
#define USB_BDTPAGE3_BDTBA_MASK                  (0xFFUL << USB_BDTPAGE3_BDTBA_SHIFT)                /*!< USB0_BDTPAGE3: BDTBA Mask               */
#define USB_BDTPAGE3_BDTBA_SHIFT                 0                                                   /*!< USB0_BDTPAGE3: BDTBA Position           */
#define USB_BDTPAGE3_BDTBA(x)                    (((uint8_t)(((uint8_t)(x))<<USB_BDTPAGE3_BDTBA_SHIFT))&USB_BDTPAGE3_BDTBA_MASK) /*!< USB0_BDTPAGE3                           */
/* ------- ENDPT Bit Fields                         ------ */
#define USB_ENDPT_EPHSHK_MASK                    (0x01UL << USB_ENDPT_EPHSHK_SHIFT)                  /*!< USB0_ENDPT: EPHSHK Mask                 */
#define USB_ENDPT_EPHSHK_SHIFT                   0                                                   /*!< USB0_ENDPT: EPHSHK Position             */
#define USB_ENDPT_EPSTALL_MASK                   (0x01UL << USB_ENDPT_EPSTALL_SHIFT)                 /*!< USB0_ENDPT: EPSTALL Mask                */
#define USB_ENDPT_EPSTALL_SHIFT                  1                                                   /*!< USB0_ENDPT: EPSTALL Position            */
#define USB_ENDPT_EPTXEN_MASK                    (0x01UL << USB_ENDPT_EPTXEN_SHIFT)                  /*!< USB0_ENDPT: EPTXEN Mask                 */
#define USB_ENDPT_EPTXEN_SHIFT                   2                                                   /*!< USB0_ENDPT: EPTXEN Position             */
#define USB_ENDPT_EPRXEN_MASK                    (0x01UL << USB_ENDPT_EPRXEN_SHIFT)                  /*!< USB0_ENDPT: EPRXEN Mask                 */
#define USB_ENDPT_EPRXEN_SHIFT                   3                                                   /*!< USB0_ENDPT: EPRXEN Position             */
#define USB_ENDPT_EPCTLDIS_MASK                  (0x01UL << USB_ENDPT_EPCTLDIS_SHIFT)                /*!< USB0_ENDPT: EPCTLDIS Mask               */
#define USB_ENDPT_EPCTLDIS_SHIFT                 4                                                   /*!< USB0_ENDPT: EPCTLDIS Position           */
#define USB_ENDPT_RETRYDIS_MASK                  (0x01UL << USB_ENDPT_RETRYDIS_SHIFT)                /*!< USB0_ENDPT: RETRYDIS Mask               */
#define USB_ENDPT_RETRYDIS_SHIFT                 6                                                   /*!< USB0_ENDPT: RETRYDIS Position           */
#define USB_ENDPT_HOSTWOHUB_MASK                 (0x01UL << USB_ENDPT_HOSTWOHUB_SHIFT)               /*!< USB0_ENDPT: HOSTWOHUB Mask              */
#define USB_ENDPT_HOSTWOHUB_SHIFT                7                                                   /*!< USB0_ENDPT: HOSTWOHUB Position          */
/* ------- USBCTRL Bit Fields                       ------ */
#define USB_USBCTRL_PDE_MASK                     (0x01UL << USB_USBCTRL_PDE_SHIFT)                   /*!< USB0_USBCTRL: PDE Mask                  */
#define USB_USBCTRL_PDE_SHIFT                    6                                                   /*!< USB0_USBCTRL: PDE Position              */
#define USB_USBCTRL_SUSP_MASK                    (0x01UL << USB_USBCTRL_SUSP_SHIFT)                  /*!< USB0_USBCTRL: SUSP Mask                 */
#define USB_USBCTRL_SUSP_SHIFT                   7                                                   /*!< USB0_USBCTRL: SUSP Position             */
/* ------- OBSERVE Bit Fields                       ------ */
#define USB_OBSERVE_DMPD_MASK                    (0x01UL << USB_OBSERVE_DMPD_SHIFT)                  /*!< USB0_OBSERVE: DMPD Mask                 */
#define USB_OBSERVE_DMPD_SHIFT                   4                                                   /*!< USB0_OBSERVE: DMPD Position             */
#define USB_OBSERVE_DPPD_MASK                    (0x01UL << USB_OBSERVE_DPPD_SHIFT)                  /*!< USB0_OBSERVE: DPPD Mask                 */
#define USB_OBSERVE_DPPD_SHIFT                   6                                                   /*!< USB0_OBSERVE: DPPD Position             */
#define USB_OBSERVE_DPPU_MASK                    (0x01UL << USB_OBSERVE_DPPU_SHIFT)                  /*!< USB0_OBSERVE: DPPU Mask                 */
#define USB_OBSERVE_DPPU_SHIFT                   7                                                   /*!< USB0_OBSERVE: DPPU Position             */
/* ------- CONTROL Bit Fields                       ------ */
#define USB_CONTROL_DPPULLUPNONOTG_MASK          (0x01UL << USB_CONTROL_DPPULLUPNONOTG_SHIFT)        /*!< USB0_CONTROL: DPPULLUPNONOTG Mask       */
#define USB_CONTROL_DPPULLUPNONOTG_SHIFT         4                                                   /*!< USB0_CONTROL: DPPULLUPNONOTG Position   */
/* ------- USBTRC0 Bit Fields                       ------ */
#define USB_USBTRC0_USB_RESUME_INT_MASK          (0x01UL << USB_USBTRC0_USB_RESUME_INT_SHIFT)        /*!< USB0_USBTRC0: USB_RESUME_INT Mask       */
#define USB_USBTRC0_USB_RESUME_INT_SHIFT         0                                                   /*!< USB0_USBTRC0: USB_RESUME_INT Position   */
#define USB_USBTRC0_SYNC_DET_MASK                (0x01UL << USB_USBTRC0_SYNC_DET_SHIFT)              /*!< USB0_USBTRC0: SYNC_DET Mask             */
#define USB_USBTRC0_SYNC_DET_SHIFT               1                                                   /*!< USB0_USBTRC0: SYNC_DET Position         */
#define USB_USBTRC0_USB_CLK_RECOVERY_INT_MASK    (0x01UL << USB_USBTRC0_USB_CLK_RECOVERY_INT_SHIFT)  /*!< USB0_USBTRC0: USB_CLK_RECOVERY_INT Mask */
#define USB_USBTRC0_USB_CLK_RECOVERY_INT_SHIFT   2                                                   /*!< USB0_USBTRC0: USB_CLK_RECOVERY_INT Position*/
#define USB_USBTRC0_USBRESMEN_MASK               (0x01UL << USB_USBTRC0_USBRESMEN_SHIFT)             /*!< USB0_USBTRC0: USBRESMEN Mask            */
#define USB_USBTRC0_USBRESMEN_SHIFT              5                                                   /*!< USB0_USBTRC0: USBRESMEN Position        */
#define USB_USBTRC0_USBRESET_MASK                (0x01UL << USB_USBTRC0_USBRESET_SHIFT)              /*!< USB0_USBTRC0: USBRESET Mask             */
#define USB_USBTRC0_USBRESET_SHIFT               7                                                   /*!< USB0_USBTRC0: USBRESET Position         */
/* ------- USBFRMADJUST Bit Fields                  ------ */
#define USB_USBFRMADJUST_ADJ_MASK                (0xFFUL << USB_USBFRMADJUST_ADJ_SHIFT)              /*!< USB0_USBFRMADJUST: ADJ Mask             */
#define USB_USBFRMADJUST_ADJ_SHIFT               0                                                   /*!< USB0_USBFRMADJUST: ADJ Position         */
#define USB_USBFRMADJUST_ADJ(x)                  (((uint8_t)(((uint8_t)(x))<<USB_USBFRMADJUST_ADJ_SHIFT))&USB_USBFRMADJUST_ADJ_MASK) /*!< USB0_USBFRMADJUST                       */
/* ------- CLK_RECOVER_CTRL Bit Fields              ------ */
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_MASK (0x01UL << USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_SHIFT) /*!< USB0_CLK_RECOVER_CTRL: RESTART_IFRTRIM_EN Mask*/
#define USB_CLK_RECOVER_CTRL_RESTART_IFRTRIM_EN_SHIFT 5                                              /*!< USB0_CLK_RECOVER_CTRL: RESTART_IFRTRIM_EN Position*/
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_MASK (0x01UL << USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_SHIFT) /*!< USB0_CLK_RECOVER_CTRL: RESET_RESUME_ROUGH_EN Mask*/
#define USB_CLK_RECOVER_CTRL_RESET_RESUME_ROUGH_EN_SHIFT 6                                           /*!< USB0_CLK_RECOVER_CTRL: RESET_RESUME_ROUGH_EN Position*/
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_MASK (0x01UL << USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_SHIFT) /*!< USB0_CLK_RECOVER_CTRL: CLOCK_RECOVER_EN Mask*/
#define USB_CLK_RECOVER_CTRL_CLOCK_RECOVER_EN_SHIFT 7                                                /*!< USB0_CLK_RECOVER_CTRL: CLOCK_RECOVER_EN Position*/
/* ------- CLK_RECOVER_IRC_EN Bit Fields            ------ */
#define USB_CLK_RECOVER_IRC_EN_REG_EN_MASK       (0x01UL << USB_CLK_RECOVER_IRC_EN_REG_EN_SHIFT)     /*!< USB0_CLK_RECOVER_IRC_EN: REG_EN Mask    */
#define USB_CLK_RECOVER_IRC_EN_REG_EN_SHIFT      0                                                   /*!< USB0_CLK_RECOVER_IRC_EN: REG_EN Position*/
#define USB_CLK_RECOVER_IRC_EN_IRC_EN_MASK       (0x01UL << USB_CLK_RECOVER_IRC_EN_IRC_EN_SHIFT)     /*!< USB0_CLK_RECOVER_IRC_EN: IRC_EN Mask    */
#define USB_CLK_RECOVER_IRC_EN_IRC_EN_SHIFT      1                                                   /*!< USB0_CLK_RECOVER_IRC_EN: IRC_EN Position*/
/* ------- CLK_RECOVER_INT_STATUS Bit Fields        ------ */
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_MASK (0x01UL << USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_SHIFT) /*!< USB0_CLK_RECOVER_INT_STATUS: OVF_ERROR Mask*/
#define USB_CLK_RECOVER_INT_STATUS_OVF_ERROR_SHIFT 4                                                 /*!< USB0_CLK_RECOVER_INT_STATUS: OVF_ERROR Position*/

/* USB0 - Peripheral instance base addresses */
#define USB0_BasePtr                   0x40072000UL
#define USB0                           ((USB0_Type *) USB0_BasePtr)
#define USB0_BASE_PTR                  (USB0)

/* ================================================================================ */
/* ================           VREF (file:VREF_MK_2)                ================ */
/* ================================================================================ */

/**
 * @brief Voltage Reference
 */
typedef struct {                                /*!<       VREF Structure                                               */
   __IO uint8_t   TRM;                          /*!< 0000: Trim Register                                                */
   __IO uint8_t   SC;                           /*!< 0001: Status and Control Register                                  */
} VREF_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'VREF' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- TRM Bit Fields                           ------ */
#define VREF_TRM_TRIM_MASK                       (0x3FUL << VREF_TRM_TRIM_SHIFT)                     /*!< VREF_TRM: TRIM Mask                     */
#define VREF_TRM_TRIM_SHIFT                      0                                                   /*!< VREF_TRM: TRIM Position                 */
#define VREF_TRM_TRIM(x)                         (((uint8_t)(((uint8_t)(x))<<VREF_TRM_TRIM_SHIFT))&VREF_TRM_TRIM_MASK) /*!< VREF_TRM                                */
/* ------- SC Bit Fields                            ------ */
#define VREF_SC_MODE_LV_MASK                     (0x03UL << VREF_SC_MODE_LV_SHIFT)                   /*!< VREF_SC: MODE_LV Mask                   */
#define VREF_SC_MODE_LV_SHIFT                    0                                                   /*!< VREF_SC: MODE_LV Position               */
#define VREF_SC_MODE_LV(x)                       (((uint8_t)(((uint8_t)(x))<<VREF_SC_MODE_LV_SHIFT))&VREF_SC_MODE_LV_MASK) /*!< VREF_SC                                 */
#define VREF_SC_VREFST_MASK                      (0x01UL << VREF_SC_VREFST_SHIFT)                    /*!< VREF_SC: VREFST Mask                    */
#define VREF_SC_VREFST_SHIFT                     2                                                   /*!< VREF_SC: VREFST Position                */
#define VREF_SC_REGEN_MASK                       (0x01UL << VREF_SC_REGEN_SHIFT)                     /*!< VREF_SC: REGEN Mask                     */
#define VREF_SC_REGEN_SHIFT                      6                                                   /*!< VREF_SC: REGEN Position                 */
#define VREF_SC_VREFEN_MASK                      (0x01UL << VREF_SC_VREFEN_SHIFT)                    /*!< VREF_SC: VREFEN Mask                    */
#define VREF_SC_VREFEN_SHIFT                     7                                                   /*!< VREF_SC: VREFEN Position                */

/* VREF - Peripheral instance base addresses */
#define VREF_BasePtr                   0x40074000UL
#define VREF                           ((VREF_Type *) VREF_BasePtr)
#define VREF_BASE_PTR                  (VREF)

/* ================================================================================ */
/* ================           WDOG (file:WDOG_MK)                  ================ */
/* ================================================================================ */

/**
 * @brief Watchdog Timer
 */
typedef struct {                                /*!<       WDOG Structure                                               */
   __IO uint16_t  STCTRLH;                      /*!< 0000: Status and Control Register High                             */
   __IO uint16_t  STCTRLL;                      /*!< 0002: Status and Control Register Low                              */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  TOVAL;                     /*!< 0004: Time-out Value Register High TOVALL:TOVALH                   */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  TOVALH;                 /*!< 0004: Time-out Value Register High                                 */
         __IO uint16_t  TOVALL;                 /*!< 0006: Time-out Value Register Low                                  */
      };
   };
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  WIN;                       /*!< 0008: Window Register (WINL:WINH)                                  */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  WINH;                   /*!< 0008: Window Register High                                         */
         __IO uint16_t  WINL;                   /*!< 000A: Window Register Low                                          */
      };
   };
   __IO uint16_t  REFRESH;                      /*!< 000C: Refresh Register                                             */
   __IO uint16_t  UNLOCK;                       /*!< 000E: Unlock Register                                              */
   union {                                      /*!< 0000: (size=0004)                                                  */
      __IO uint32_t  TMROUT;                    /*!< 0010: Timer Output Register (TMROUTL:TMROUTH)                      */
      struct {                                  /*!< 0000: (size=0004)                                                  */
         __IO uint16_t  TMROUTH;                /*!< 0010: Timer Output Register High                                   */
         __IO uint16_t  TMROUTL;                /*!< 0012: Timer Output Register Low                                    */
      };
   };
   __IO uint16_t  RSTCNT;                       /*!< 0014: Reset Count Register                                         */
   __IO uint16_t  PRESC;                        /*!< 0016: Prescaler Register                                           */
} WDOG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'WDOG' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- STCTRLH Bit Fields                       ------ */
#define WDOG_STCTRLH_WDOGEN_MASK                 (0x01UL << WDOG_STCTRLH_WDOGEN_SHIFT)               /*!< WDOG_STCTRLH: WDOGEN Mask               */
#define WDOG_STCTRLH_WDOGEN_SHIFT                0                                                   /*!< WDOG_STCTRLH: WDOGEN Position           */
#define WDOG_STCTRLH_CLKSRC_MASK                 (0x01UL << WDOG_STCTRLH_CLKSRC_SHIFT)               /*!< WDOG_STCTRLH: CLKSRC Mask               */
#define WDOG_STCTRLH_CLKSRC_SHIFT                1                                                   /*!< WDOG_STCTRLH: CLKSRC Position           */
#define WDOG_STCTRLH_IRQRSTEN_MASK               (0x01UL << WDOG_STCTRLH_IRQRSTEN_SHIFT)             /*!< WDOG_STCTRLH: IRQRSTEN Mask             */
#define WDOG_STCTRLH_IRQRSTEN_SHIFT              2                                                   /*!< WDOG_STCTRLH: IRQRSTEN Position         */
#define WDOG_STCTRLH_WINEN_MASK                  (0x01UL << WDOG_STCTRLH_WINEN_SHIFT)                /*!< WDOG_STCTRLH: WINEN Mask                */
#define WDOG_STCTRLH_WINEN_SHIFT                 3                                                   /*!< WDOG_STCTRLH: WINEN Position            */
#define WDOG_STCTRLH_ALLOWUPDATE_MASK            (0x01UL << WDOG_STCTRLH_ALLOWUPDATE_SHIFT)          /*!< WDOG_STCTRLH: ALLOWUPDATE Mask          */
#define WDOG_STCTRLH_ALLOWUPDATE_SHIFT           4                                                   /*!< WDOG_STCTRLH: ALLOWUPDATE Position      */
#define WDOG_STCTRLH_DBGEN_MASK                  (0x01UL << WDOG_STCTRLH_DBGEN_SHIFT)                /*!< WDOG_STCTRLH: DBGEN Mask                */
#define WDOG_STCTRLH_DBGEN_SHIFT                 5                                                   /*!< WDOG_STCTRLH: DBGEN Position            */
#define WDOG_STCTRLH_STOPEN_MASK                 (0x01UL << WDOG_STCTRLH_STOPEN_SHIFT)               /*!< WDOG_STCTRLH: STOPEN Mask               */
#define WDOG_STCTRLH_STOPEN_SHIFT                6                                                   /*!< WDOG_STCTRLH: STOPEN Position           */
#define WDOG_STCTRLH_WAITEN_MASK                 (0x01UL << WDOG_STCTRLH_WAITEN_SHIFT)               /*!< WDOG_STCTRLH: WAITEN Mask               */
#define WDOG_STCTRLH_WAITEN_SHIFT                7                                                   /*!< WDOG_STCTRLH: WAITEN Position           */
#define WDOG_STCTRLH_TESTWDOG_MASK               (0x01UL << WDOG_STCTRLH_TESTWDOG_SHIFT)             /*!< WDOG_STCTRLH: TESTWDOG Mask             */
#define WDOG_STCTRLH_TESTWDOG_SHIFT              10                                                  /*!< WDOG_STCTRLH: TESTWDOG Position         */
#define WDOG_STCTRLH_TESTSEL_MASK                (0x01UL << WDOG_STCTRLH_TESTSEL_SHIFT)              /*!< WDOG_STCTRLH: TESTSEL Mask              */
#define WDOG_STCTRLH_TESTSEL_SHIFT               11                                                  /*!< WDOG_STCTRLH: TESTSEL Position          */
#define WDOG_STCTRLH_BYTESEL_MASK                (0x03UL << WDOG_STCTRLH_BYTESEL_SHIFT)              /*!< WDOG_STCTRLH: BYTESEL Mask              */
#define WDOG_STCTRLH_BYTESEL_SHIFT               12                                                  /*!< WDOG_STCTRLH: BYTESEL Position          */
#define WDOG_STCTRLH_BYTESEL(x)                  (((uint16_t)(((uint16_t)(x))<<WDOG_STCTRLH_BYTESEL_SHIFT))&WDOG_STCTRLH_BYTESEL_MASK) /*!< WDOG_STCTRLH                            */
#define WDOG_STCTRLH_DISTESTWDOG_MASK            (0x01UL << WDOG_STCTRLH_DISTESTWDOG_SHIFT)          /*!< WDOG_STCTRLH: DISTESTWDOG Mask          */
#define WDOG_STCTRLH_DISTESTWDOG_SHIFT           14                                                  /*!< WDOG_STCTRLH: DISTESTWDOG Position      */
/* ------- STCTRLL Bit Fields                       ------ */
#define WDOG_STCTRLL_INTFLG_MASK                 (0x01UL << WDOG_STCTRLL_INTFLG_SHIFT)               /*!< WDOG_STCTRLL: INTFLG Mask               */
#define WDOG_STCTRLL_INTFLG_SHIFT                15                                                  /*!< WDOG_STCTRLL: INTFLG Position           */
/* ------- TOVAL Bit Fields                         ------ */
#define WDOG_TOVAL_TOVAL_MASK                    (0xFFFFFFFFUL << WDOG_TOVAL_TOVAL_SHIFT)            /*!< WDOG_TOVAL: TOVAL Mask                  */
#define WDOG_TOVAL_TOVAL_SHIFT                   0                                                   /*!< WDOG_TOVAL: TOVAL Position              */
#define WDOG_TOVAL_TOVAL(x)                      (((uint32_t)(((uint32_t)(x))<<WDOG_TOVAL_TOVAL_SHIFT))&WDOG_TOVAL_TOVAL_MASK) /*!< WDOG_TOVAL                              */
/* ------- TOVALH Bit Fields                        ------ */
#define WDOG_TOVALH_TOVALHIGH_MASK               (0xFFFFUL << WDOG_TOVALH_TOVALHIGH_SHIFT)           /*!< WDOG_TOVALH: TOVALHIGH Mask             */
#define WDOG_TOVALH_TOVALHIGH_SHIFT              0                                                   /*!< WDOG_TOVALH: TOVALHIGH Position         */
#define WDOG_TOVALH_TOVALHIGH(x)                 (((uint16_t)(((uint16_t)(x))<<WDOG_TOVALH_TOVALHIGH_SHIFT))&WDOG_TOVALH_TOVALHIGH_MASK) /*!< WDOG_TOVALH                             */
/* ------- TOVALL Bit Fields                        ------ */
#define WDOG_TOVALL_TOVALLOW_MASK                (0xFFFFUL << WDOG_TOVALL_TOVALLOW_SHIFT)            /*!< WDOG_TOVALL: TOVALLOW Mask              */
#define WDOG_TOVALL_TOVALLOW_SHIFT               0                                                   /*!< WDOG_TOVALL: TOVALLOW Position          */
#define WDOG_TOVALL_TOVALLOW(x)                  (((uint16_t)(((uint16_t)(x))<<WDOG_TOVALL_TOVALLOW_SHIFT))&WDOG_TOVALL_TOVALLOW_MASK) /*!< WDOG_TOVALL                             */
/* ------- WIN Bit Fields                           ------ */
#define WDOG_WIN_WIN_MASK                        (0xFFFFFFFFUL << WDOG_WIN_WIN_SHIFT)                /*!< WDOG_WIN: WIN Mask                      */
#define WDOG_WIN_WIN_SHIFT                       0                                                   /*!< WDOG_WIN: WIN Position                  */
#define WDOG_WIN_WIN(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_WIN_WIN_SHIFT))&WDOG_WIN_WIN_MASK) /*!< WDOG_WIN                                */
/* ------- WINH Bit Fields                          ------ */
#define WDOG_WINH_WINHIGH_MASK                   (0xFFFFUL << WDOG_WINH_WINHIGH_SHIFT)               /*!< WDOG_WINH: WINHIGH Mask                 */
#define WDOG_WINH_WINHIGH_SHIFT                  0                                                   /*!< WDOG_WINH: WINHIGH Position             */
#define WDOG_WINH_WINHIGH(x)                     (((uint16_t)(((uint16_t)(x))<<WDOG_WINH_WINHIGH_SHIFT))&WDOG_WINH_WINHIGH_MASK) /*!< WDOG_WINH                               */
/* ------- WINL Bit Fields                          ------ */
#define WDOG_WINL_WINLOW_MASK                    (0xFFFFUL << WDOG_WINL_WINLOW_SHIFT)                /*!< WDOG_WINL: WINLOW Mask                  */
#define WDOG_WINL_WINLOW_SHIFT                   0                                                   /*!< WDOG_WINL: WINLOW Position              */
#define WDOG_WINL_WINLOW(x)                      (((uint16_t)(((uint16_t)(x))<<WDOG_WINL_WINLOW_SHIFT))&WDOG_WINL_WINLOW_MASK) /*!< WDOG_WINL                               */
/* ------- REFRESH Bit Fields                       ------ */
#define WDOG_REFRESH_WDOGREFRESH_MASK            (0xFFFFUL << WDOG_REFRESH_WDOGREFRESH_SHIFT)        /*!< WDOG_REFRESH: WDOGREFRESH Mask          */
#define WDOG_REFRESH_WDOGREFRESH_SHIFT           0                                                   /*!< WDOG_REFRESH: WDOGREFRESH Position      */
#define WDOG_REFRESH_WDOGREFRESH(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_REFRESH_WDOGREFRESH_SHIFT))&WDOG_REFRESH_WDOGREFRESH_MASK) /*!< WDOG_REFRESH                            */
/* ------- UNLOCK Bit Fields                        ------ */
#define WDOG_UNLOCK_WDOGUNLOCK_MASK              (0xFFFFUL << WDOG_UNLOCK_WDOGUNLOCK_SHIFT)          /*!< WDOG_UNLOCK: WDOGUNLOCK Mask            */
#define WDOG_UNLOCK_WDOGUNLOCK_SHIFT             0                                                   /*!< WDOG_UNLOCK: WDOGUNLOCK Position        */
#define WDOG_UNLOCK_WDOGUNLOCK(x)                (((uint16_t)(((uint16_t)(x))<<WDOG_UNLOCK_WDOGUNLOCK_SHIFT))&WDOG_UNLOCK_WDOGUNLOCK_MASK) /*!< WDOG_UNLOCK                             */
/* ------- TMROUT Bit Fields                        ------ */
#define WDOG_TMROUT_TIMEROUTHIGH_MASK            (0xFFFFFFFFUL << WDOG_TMROUT_TIMEROUTHIGH_SHIFT)    /*!< WDOG_TMROUT: TIMEROUTHIGH Mask          */
#define WDOG_TMROUT_TIMEROUTHIGH_SHIFT           0                                                   /*!< WDOG_TMROUT: TIMEROUTHIGH Position      */
#define WDOG_TMROUT_TIMEROUTHIGH(x)              (((uint32_t)(((uint32_t)(x))<<WDOG_TMROUT_TIMEROUTHIGH_SHIFT))&WDOG_TMROUT_TIMEROUTHIGH_MASK) /*!< WDOG_TMROUT                             */
/* ------- TMROUTH Bit Fields                       ------ */
#define WDOG_TMROUTH_TIMEROUTHIGH_MASK           (0xFFFFUL << WDOG_TMROUTH_TIMEROUTHIGH_SHIFT)       /*!< WDOG_TMROUTH: TIMEROUTHIGH Mask         */
#define WDOG_TMROUTH_TIMEROUTHIGH_SHIFT          0                                                   /*!< WDOG_TMROUTH: TIMEROUTHIGH Position     */
#define WDOG_TMROUTH_TIMEROUTHIGH(x)             (((uint16_t)(((uint16_t)(x))<<WDOG_TMROUTH_TIMEROUTHIGH_SHIFT))&WDOG_TMROUTH_TIMEROUTHIGH_MASK) /*!< WDOG_TMROUTH                            */
/* ------- TMROUTL Bit Fields                       ------ */
#define WDOG_TMROUTL_TIMEROUTLOW_MASK            (0xFFFFUL << WDOG_TMROUTL_TIMEROUTLOW_SHIFT)        /*!< WDOG_TMROUTL: TIMEROUTLOW Mask          */
#define WDOG_TMROUTL_TIMEROUTLOW_SHIFT           0                                                   /*!< WDOG_TMROUTL: TIMEROUTLOW Position      */
#define WDOG_TMROUTL_TIMEROUTLOW(x)              (((uint16_t)(((uint16_t)(x))<<WDOG_TMROUTL_TIMEROUTLOW_SHIFT))&WDOG_TMROUTL_TIMEROUTLOW_MASK) /*!< WDOG_TMROUTL                            */
/* ------- RSTCNT Bit Fields                        ------ */
#define WDOG_RSTCNT_RSTCNT_MASK                  (0xFFFFUL << WDOG_RSTCNT_RSTCNT_SHIFT)              /*!< WDOG_RSTCNT: RSTCNT Mask                */
#define WDOG_RSTCNT_RSTCNT_SHIFT                 0                                                   /*!< WDOG_RSTCNT: RSTCNT Position            */
#define WDOG_RSTCNT_RSTCNT(x)                    (((uint16_t)(((uint16_t)(x))<<WDOG_RSTCNT_RSTCNT_SHIFT))&WDOG_RSTCNT_RSTCNT_MASK) /*!< WDOG_RSTCNT                             */
/* ------- PRESC Bit Fields                         ------ */
#define WDOG_PRESC_PRESCVAL_MASK                 (0x07UL << WDOG_PRESC_PRESCVAL_SHIFT)               /*!< WDOG_PRESC: PRESCVAL Mask               */
#define WDOG_PRESC_PRESCVAL_SHIFT                8                                                   /*!< WDOG_PRESC: PRESCVAL Position           */
#define WDOG_PRESC_PRESCVAL(x)                   (((uint16_t)(((uint16_t)(x))<<WDOG_PRESC_PRESCVAL_SHIFT))&WDOG_PRESC_PRESCVAL_MASK) /*!< WDOG_PRESC                              */

/* WDOG - Peripheral instance base addresses */
#define WDOG_BasePtr                   0x40052000UL
#define WDOG                           ((WDOG_Type *) WDOG_BasePtr)
#define WDOG_BASE_PTR                  (WDOG)
/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif

#ifdef __cplusplus
}
#endif


#endif  /* MCU_MK22F51212 */

