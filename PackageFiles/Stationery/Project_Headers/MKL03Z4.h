/****************************************************************************************************//**
 * @file     MKL03Z4.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for MKL03Z4.
 *           Equivalent: MKL03Z32M4, MKL03Z16M4, FRDM-KL03Z, MKL03Z8M4
 *
 * @version  V0.0
 * @date     2015/01
 *
 *******************************************************************************************************/

#ifndef MCU_MKL03Z4
#define MCU_MKL03Z4

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
  SVCall_IRQn                   =  -5,   /*!<  11 System Service Call via SVC instruction                                          */
  PendSV_IRQn                   =  -2,   /*!<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /*!<  15 System Tick Timer                                                                */
/* ----------------------   MKL03Z4 VectorTable                      ---------------------- */
  FTFA_IRQn                     =   5,   /*!<  21 FTFA Command complete or error                                                   */
  PMC_IRQn                      =   6,   /*!<  22 PMC Low-voltage detect, low-voltage warning                                      */
  LLWU_IRQn                     =   7,   /*!<  23 Low Leakage Wakeup                                                               */
  I2C0_IRQn                     =   8,   /*!<  24 I2C Interface 0                                                                  */
  SPI0_IRQn                     =  10,   /*!<  26 Serial Peripheral Interface 0                                                    */
  LPUART0_IRQn                  =  12,   /*!<  28 Low power UART0 Status and error                                                 */
  ADC0_IRQn                     =  15,   /*!<  31 Analogue to Digital Converter 0                                                  */
  ACMP0_IRQn                    =  16,   /*!<  32 Analogue comparator 0                                                            */
  TPM0_IRQn                     =  17,   /*!<  33 Timer/PWM Module 0                                                               */
  TPM1_IRQn                     =  18,   /*!<  34 Timer/PWM Module 1                                                               */
  RTC_Alarm_IRQn                =  20,   /*!<  36 Real Time Clock Alarm                                                            */
  RTC_Seconds_IRQn              =  21,   /*!<  37 Real Time Clock Seconds                                                          */
  LPTMR0_IRQn                   =  28,   /*!<  44 Low Power Timer                                                                  */
  PORTA_IRQn                    =  30,   /*!<  46 Port A                                                                           */
  PORTB_IRQn                    =  31,   /*!<  47 Port B                                                                           */
} IRQn_Type;

/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);
extern void HardFault_Handler(void);
extern void SVC_Handler(void);
extern void PendSV_Handler(void);
extern void SysTick_Handler(void);
extern void FTFA_IRQHandler(void);
extern void PMC_IRQHandler(void);
extern void LLWU_IRQHandler(void);
extern void I2C0_IRQHandler(void);
extern void SPI0_IRQHandler(void);
extern void LPUART0_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void ACMP0_IRQHandler(void);
extern void TPM0_IRQHandler(void);
extern void TPM1_IRQHandler(void);
extern void RTC_Alarm_IRQHandler(void);
extern void RTC_Seconds_IRQHandler(void);
extern void LPTMR0_IRQHandler(void);
extern void PORTA_IRQHandler(void);
extern void PORTB_IRQHandler(void);

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the cm4 Processor and Core Peripherals---------------- */
#define __CM0PLUS_REV                0x0100
#define __MPU_PRESENT            0
#define __NVIC_PRIO_BITS         2
#define __Vendor_SysTickConfig   0
#define __FPU_PRESENT            0

#include "core_cm0plus.h"       /*!< Processor and core peripherals */
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
/* ================           ADC0 (file:ADC0_MKLZ4)               ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */
typedef struct {                                /*!<       ADC0 Structure                                               */
   __IO uint32_t  SC1A;                         /*!< 0000: Status and Control Registers 1                               */
   __IO uint32_t  SC1B;                         /*!< 0004: Status and Control Registers 1                               */
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
   __I  uint32_t  RESERVED0;                    /*!< 0030:                                                              */
   __IO uint32_t  CLPD;                         /*!< 0034: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLPS;                         /*!< 0038: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP4;                         /*!< 003C: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP3;                         /*!< 0040: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP2;                         /*!< 0044: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP1;                         /*!< 0048: Plus-Side General Calibration Value                          */
   __IO uint32_t  CLP0;                         /*!< 004C: Plus-Side General Calibration Value                          */
} ADC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC1 Bit Fields                           ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FUL << ADC_SC1_ADCH_SHIFT)                      /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       0                                                   /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_ADCH_SHIFT))&ADC_SC1_ADCH_MASK) /*!< ADC0_SC1                                */
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

/* ADC0 - Peripheral instance base addresses */
#define ADC0_BasePtr                   0x4003B000UL
#define ADC0                           ((ADC_Type *) ADC0_BasePtr)
#define ADC0_BASE_PTR                  (ADC0)

/* ================================================================================ */
/* ================           BP (file:BP_0)                       ================ */
/* ================================================================================ */

/**
 * @brief Breakpoint Unit
 */
typedef struct {                                /*!<       BP Structure                                                 */
   __IO uint32_t  CTRL;                         /*!< 0000: FlashPatch Control Register                                  */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  COMP0;                        /*!< 0008: FlashPatch Comparator Register 0                             */
   __IO uint32_t  COMP1;                        /*!< 000C: FlashPatch Comparator Register 1                             */
   __I  uint32_t  RESERVED1[1008];              /*!< 0010:                                                              */
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
} BP_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'BP' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CTRL Bit Fields                          ------ */
#define BP_CTRL_ENABLE_MASK                      (0x01UL << BP_CTRL_ENABLE_SHIFT)                    /*!< BP_CTRL: ENABLE Mask                    */
#define BP_CTRL_ENABLE_SHIFT                     0                                                   /*!< BP_CTRL: ENABLE Position                */
#define BP_CTRL_KEY_MASK                         (0x01UL << BP_CTRL_KEY_SHIFT)                       /*!< BP_CTRL: KEY Mask                       */
#define BP_CTRL_KEY_SHIFT                        1                                                   /*!< BP_CTRL: KEY Position                   */
#define BP_CTRL_NUM_CODE_MASK                    (0x0FUL << BP_CTRL_NUM_CODE_SHIFT)                  /*!< BP_CTRL: NUM_CODE Mask                  */
#define BP_CTRL_NUM_CODE_SHIFT                   4                                                   /*!< BP_CTRL: NUM_CODE Position              */
#define BP_CTRL_NUM_CODE(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CTRL_NUM_CODE_SHIFT))&BP_CTRL_NUM_CODE_MASK) /*!< BP_CTRL                                 */
/* ------- COMP0 Bit Fields                         ------ */
#define BP_COMP0_ENABLE_MASK                     (0x01UL << BP_COMP0_ENABLE_SHIFT)                   /*!< BP_COMP0: ENABLE Mask                   */
#define BP_COMP0_ENABLE_SHIFT                    0                                                   /*!< BP_COMP0: ENABLE Position               */
#define BP_COMP0_COMP_MASK                       (0x7FFFFFFUL << BP_COMP0_COMP_SHIFT)                /*!< BP_COMP0: COMP Mask                     */
#define BP_COMP0_COMP_SHIFT                      2                                                   /*!< BP_COMP0: COMP Position                 */
#define BP_COMP0_COMP(x)                         (((uint32_t)(((uint32_t)(x))<<BP_COMP0_COMP_SHIFT))&BP_COMP0_COMP_MASK) /*!< BP_COMP0                                */
#define BP_COMP0_BP_MATCH_MASK                   (0x03UL << BP_COMP0_BP_MATCH_SHIFT)                 /*!< BP_COMP0: BP_MATCH Mask                 */
#define BP_COMP0_BP_MATCH_SHIFT                  30                                                  /*!< BP_COMP0: BP_MATCH Position             */
#define BP_COMP0_BP_MATCH(x)                     (((uint32_t)(((uint32_t)(x))<<BP_COMP0_BP_MATCH_SHIFT))&BP_COMP0_BP_MATCH_MASK) /*!< BP_COMP0                                */
/* ------- COMP1 Bit Fields                         ------ */
#define BP_COMP1_ENABLE_MASK                     (0x01UL << BP_COMP1_ENABLE_SHIFT)                   /*!< BP_COMP1: ENABLE Mask                   */
#define BP_COMP1_ENABLE_SHIFT                    0                                                   /*!< BP_COMP1: ENABLE Position               */
#define BP_COMP1_COMP_MASK                       (0x7FFFFFFUL << BP_COMP1_COMP_SHIFT)                /*!< BP_COMP1: COMP Mask                     */
#define BP_COMP1_COMP_SHIFT                      2                                                   /*!< BP_COMP1: COMP Position                 */
#define BP_COMP1_COMP(x)                         (((uint32_t)(((uint32_t)(x))<<BP_COMP1_COMP_SHIFT))&BP_COMP1_COMP_MASK) /*!< BP_COMP1                                */
#define BP_COMP1_REPLACE_MASK                    (0x03UL << BP_COMP1_REPLACE_SHIFT)                  /*!< BP_COMP1: REPLACE Mask                  */
#define BP_COMP1_REPLACE_SHIFT                   30                                                  /*!< BP_COMP1: REPLACE Position              */
#define BP_COMP1_REPLACE(x)                      (((uint32_t)(((uint32_t)(x))<<BP_COMP1_REPLACE_SHIFT))&BP_COMP1_REPLACE_MASK) /*!< BP_COMP1                                */
/* ------- PID4 Bit Fields                          ------ */
#define BP_PID4_JEP106_MASK                      (0x0FUL << BP_PID4_JEP106_SHIFT)                    /*!< BP_PID4: JEP106 Mask                    */
#define BP_PID4_JEP106_SHIFT                     0                                                   /*!< BP_PID4: JEP106 Position                */
#define BP_PID4_JEP106(x)                        (((uint32_t)(((uint32_t)(x))<<BP_PID4_JEP106_SHIFT))&BP_PID4_JEP106_MASK) /*!< BP_PID4                                 */
#define BP_PID4_c4KB_MASK                        (0x0FUL << BP_PID4_c4KB_SHIFT)                      /*!< BP_PID4: c4KB Mask                      */
#define BP_PID4_c4KB_SHIFT                       4                                                   /*!< BP_PID4: c4KB Position                  */
#define BP_PID4_c4KB(x)                          (((uint32_t)(((uint32_t)(x))<<BP_PID4_c4KB_SHIFT))&BP_PID4_c4KB_MASK) /*!< BP_PID4                                 */
/* ------- PID Bit Fields                           ------ */
/* ------- PID0 Bit Fields                          ------ */
#define BP_PID0_PartNumber_MASK                  (0xFFUL << BP_PID0_PartNumber_SHIFT)                /*!< BP_PID0: PartNumber Mask                */
#define BP_PID0_PartNumber_SHIFT                 0                                                   /*!< BP_PID0: PartNumber Position            */
#define BP_PID0_PartNumber(x)                    (((uint32_t)(((uint32_t)(x))<<BP_PID0_PartNumber_SHIFT))&BP_PID0_PartNumber_MASK) /*!< BP_PID0                                 */
/* ------- PID1 Bit Fields                          ------ */
#define BP_PID1_PartNumber_MASK                  (0x0FUL << BP_PID1_PartNumber_SHIFT)                /*!< BP_PID1: PartNumber Mask                */
#define BP_PID1_PartNumber_SHIFT                 0                                                   /*!< BP_PID1: PartNumber Position            */
#define BP_PID1_PartNumber(x)                    (((uint32_t)(((uint32_t)(x))<<BP_PID1_PartNumber_SHIFT))&BP_PID1_PartNumber_MASK) /*!< BP_PID1                                 */
#define BP_PID1_JEP106_identity_code_MASK        (0x0FUL << BP_PID1_JEP106_identity_code_SHIFT)      /*!< BP_PID1: JEP106_identity_code Mask      */
#define BP_PID1_JEP106_identity_code_SHIFT       4                                                   /*!< BP_PID1: JEP106_identity_code Position  */
#define BP_PID1_JEP106_identity_code(x)          (((uint32_t)(((uint32_t)(x))<<BP_PID1_JEP106_identity_code_SHIFT))&BP_PID1_JEP106_identity_code_MASK) /*!< BP_PID1                                 */
/* ------- PID2 Bit Fields                          ------ */
#define BP_PID2_JEP106_identity_code_MASK        (0x07UL << BP_PID2_JEP106_identity_code_SHIFT)      /*!< BP_PID2: JEP106_identity_code Mask      */
#define BP_PID2_JEP106_identity_code_SHIFT       0                                                   /*!< BP_PID2: JEP106_identity_code Position  */
#define BP_PID2_JEP106_identity_code(x)          (((uint32_t)(((uint32_t)(x))<<BP_PID2_JEP106_identity_code_SHIFT))&BP_PID2_JEP106_identity_code_MASK) /*!< BP_PID2                                 */
#define BP_PID2_JEP106_identity_code_used_MASK   (0x01UL << BP_PID2_JEP106_identity_code_used_SHIFT) /*!< BP_PID2: JEP106_identity_code_used Mask */
#define BP_PID2_JEP106_identity_code_used_SHIFT  3                                                   /*!< BP_PID2: JEP106_identity_code_used Position*/
#define BP_PID2_Revision_MASK                    (0x0FUL << BP_PID2_Revision_SHIFT)                  /*!< BP_PID2: Revision Mask                  */
#define BP_PID2_Revision_SHIFT                   4                                                   /*!< BP_PID2: Revision Position              */
#define BP_PID2_Revision(x)                      (((uint32_t)(((uint32_t)(x))<<BP_PID2_Revision_SHIFT))&BP_PID2_Revision_MASK) /*!< BP_PID2                                 */
/* ------- PID3 Bit Fields                          ------ */
#define BP_PID3_CustomerModified_MASK            (0x0FUL << BP_PID3_CustomerModified_SHIFT)          /*!< BP_PID3: CustomerModified Mask          */
#define BP_PID3_CustomerModified_SHIFT           0                                                   /*!< BP_PID3: CustomerModified Position      */
#define BP_PID3_CustomerModified(x)              (((uint32_t)(((uint32_t)(x))<<BP_PID3_CustomerModified_SHIFT))&BP_PID3_CustomerModified_MASK) /*!< BP_PID3                                 */
#define BP_PID3_RevAnd_MASK                      (0x0FUL << BP_PID3_RevAnd_SHIFT)                    /*!< BP_PID3: RevAnd Mask                    */
#define BP_PID3_RevAnd_SHIFT                     4                                                   /*!< BP_PID3: RevAnd Position                */
#define BP_PID3_RevAnd(x)                        (((uint32_t)(((uint32_t)(x))<<BP_PID3_RevAnd_SHIFT))&BP_PID3_RevAnd_MASK) /*!< BP_PID3                                 */
/* ------- CID0 Bit Fields                          ------ */
#define BP_CID0_Preamble_MASK                    (0xFFUL << BP_CID0_Preamble_SHIFT)                  /*!< BP_CID0: Preamble Mask                  */
#define BP_CID0_Preamble_SHIFT                   0                                                   /*!< BP_CID0: Preamble Position              */
#define BP_CID0_Preamble(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CID0_Preamble_SHIFT))&BP_CID0_Preamble_MASK) /*!< BP_CID0                                 */
/* ------- CID1 Bit Fields                          ------ */
#define BP_CID1_Preamble_MASK                    (0x0FUL << BP_CID1_Preamble_SHIFT)                  /*!< BP_CID1: Preamble Mask                  */
#define BP_CID1_Preamble_SHIFT                   0                                                   /*!< BP_CID1: Preamble Position              */
#define BP_CID1_Preamble(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CID1_Preamble_SHIFT))&BP_CID1_Preamble_MASK) /*!< BP_CID1                                 */
#define BP_CID1_ComponentClass_MASK              (0x0FUL << BP_CID1_ComponentClass_SHIFT)            /*!< BP_CID1: ComponentClass Mask            */
#define BP_CID1_ComponentClass_SHIFT             4                                                   /*!< BP_CID1: ComponentClass Position        */
#define BP_CID1_ComponentClass(x)                (((uint32_t)(((uint32_t)(x))<<BP_CID1_ComponentClass_SHIFT))&BP_CID1_ComponentClass_MASK) /*!< BP_CID1                                 */
/* ------- CID2 Bit Fields                          ------ */
#define BP_CID2_Preamble_MASK                    (0xFFUL << BP_CID2_Preamble_SHIFT)                  /*!< BP_CID2: Preamble Mask                  */
#define BP_CID2_Preamble_SHIFT                   0                                                   /*!< BP_CID2: Preamble Position              */
#define BP_CID2_Preamble(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CID2_Preamble_SHIFT))&BP_CID2_Preamble_MASK) /*!< BP_CID2                                 */
/* ------- CID3 Bit Fields                          ------ */
#define BP_CID3_Preamble_MASK                    (0xFFUL << BP_CID3_Preamble_SHIFT)                  /*!< BP_CID3: Preamble Mask                  */
#define BP_CID3_Preamble_SHIFT                   0                                                   /*!< BP_CID3: Preamble Position              */
#define BP_CID3_Preamble(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CID3_Preamble_SHIFT))&BP_CID3_Preamble_MASK) /*!< BP_CID3                                 */

/* BP - Peripheral instance base addresses */
#define BP_BasePtr                     0xE0002000UL
#define BP                             ((BP_Type *) BP_BasePtr)
#define BP_BASE_PTR                    (BP)

/* ================================================================================ */
/* ================           CMP0 (file:CMP0_MKL_NODMA)           ================ */
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
#define CMP_CR1_TRIGM_MASK                       (0x01UL << CMP_CR1_TRIGM_SHIFT)                     /*!< CMP0_CR1: TRIGM Mask                    */
#define CMP_CR1_TRIGM_SHIFT                      5                                                   /*!< CMP0_CR1: TRIGM Position                */
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
/* ================           FGPIOA (file:FGPIOA_0)               ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
typedef struct {                                /*!<       FGPIOA Structure                                             */
   __IO uint32_t  PDOR;                         /*!< 0000: Port Data Output Register                                    */
   __O  uint32_t  PSOR;                         /*!< 0004: Port Set Output Register                                     */
   __O  uint32_t  PCOR;                         /*!< 0008: Port Clear Output Register                                   */
   __O  uint32_t  PTOR;                         /*!< 000C: Port Toggle Output Register                                  */
   __I  uint32_t  PDIR;                         /*!< 0010: Port Data Input Register                                     */
   __IO uint32_t  PDDR;                         /*!< 0014: Port Data Direction Register                                 */
} GPIO_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOA' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- PDOR Bit Fields                          ------ */
/* ------- PSOR Bit Fields                          ------ */
/* ------- PCOR Bit Fields                          ------ */
/* ------- PTOR Bit Fields                          ------ */
/* ------- PDIR Bit Fields                          ------ */
/* ------- PDDR Bit Fields                          ------ */

/* FGPIOA - Peripheral instance base addresses */
#define FGPIOA_BasePtr                 0xF80FF000UL
#define FGPIOA                         ((GPIO_Type *) FGPIOA_BasePtr)
#define FGPIOA_BASE_PTR                (FGPIOA)

/* ================================================================================ */
/* ================           FGPIOB (derived from FGPIOA)         ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* FGPIOB - Peripheral instance base addresses */
#define FGPIOB_BasePtr                 0xF80FF040UL
#define FGPIOB                         ((GPIO_Type *) FGPIOB_BasePtr)
#define FGPIOB_BASE_PTR                (FGPIOB)

/* ================================================================================ */
/* ================           FTFA (file:FTFA)                     ================ */
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

/* FTFA - Peripheral instance base addresses */
#define FTFA_BasePtr                   0x40020000UL
#define FTFA                           ((FTFA_Type *) FTFA_BasePtr)
#define FTFA_BASE_PTR                  (FTFA)

/* ================================================================================ */
/* ================           GPIOA (derived from FGPIOA)          ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

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
/* ================           I2C0 (file:I2C0_MKL_SMB)             ================ */
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
#define I2C_FLT_FLT_MASK                         (0x1FUL << I2C_FLT_FLT_SHIFT)                       /*!< I2C0_FLT: FLT Mask                      */
#define I2C_FLT_FLT_SHIFT                        0                                                   /*!< I2C0_FLT: FLT Position                  */
#define I2C_FLT_FLT(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_FLT_FLT_SHIFT))&I2C_FLT_FLT_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_STOPIE_MASK                      (0x01UL << I2C_FLT_STOPIE_SHIFT)                    /*!< I2C0_FLT: STOPIE Mask                   */
#define I2C_FLT_STOPIE_SHIFT                     5                                                   /*!< I2C0_FLT: STOPIE Position               */
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
/* ================           LLWU (file:LLWU_PE2_FILT1)           ================ */
/* ================================================================================ */

/**
 * @brief Low leakage wakeup unit
 */
typedef struct {                                /*!<       LLWU Structure                                               */
   __IO uint8_t   PE1;                          /*!< 0000: Pin Enable 1 Register                                        */
   __IO uint8_t   PE2;                          /*!< 0001: Pin Enable 2 Register                                        */
   __IO uint8_t   ME;                           /*!< 0002: Module Enable Register                                       */
   __IO uint8_t   F1;                           /*!< 0003: Flag 1 Register                                              */
   __I  uint8_t   F3;                           /*!< 0004: Flag 3 Register                                              */
   __IO uint8_t   FILT1;                        /*!< 0005: Pin Filter 1 register                                        */
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
/* ================           LPUART0 (file:LPUART0_MKLx3)         ================ */
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

/* LPUART0 - Peripheral instance base addresses */
#define LPUART0_BasePtr                0x40054000UL
#define LPUART0                        ((LPUART0_Type *) LPUART0_BasePtr)
#define LPUART0_BASE_PTR               (LPUART0)

/* ================================================================================ */
/* ================           MCG (file:MCG_LITE_32kHz)            ================ */
/* ================================================================================ */

/**
 * @brief Multipurpose Clock Generator Light module
 */
typedef struct {                                /*!<       MCG Structure                                                */
   __IO uint8_t   C1;                           /*!< 0000: Control 1 Register                                           */
   __IO uint8_t   C2;                           /*!< 0001: Control 2 Register                                           */
   __I  uint16_t  RESERVED0[2];                 /*!< 0002:                                                              */
   __I  uint8_t   S;                            /*!< 0006: Status Register                                              */
   __I  uint8_t   RESERVED1;                    /*!< 0007:                                                              */
   __IO uint8_t   SC;                           /*!< 0008: Status and Control Register                                  */
   __I  uint8_t   RESERVED2[15];                /*!< 0009:                                                              */
   __IO uint8_t   MC;                           /*!< 0018: MCG Miscellaneous Control Register                           */
} MCG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- C1 Bit Fields                            ------ */
#define MCG_C1_IREFSTEN_MASK                     (0x01UL << MCG_C1_IREFSTEN_SHIFT)                   /*!< MCG_C1: IREFSTEN Mask                   */
#define MCG_C1_IREFSTEN_SHIFT                    0                                                   /*!< MCG_C1: IREFSTEN Position               */
#define MCG_C1_IRCLKEN_MASK                      (0x01UL << MCG_C1_IRCLKEN_SHIFT)                    /*!< MCG_C1: IRCLKEN Mask                    */
#define MCG_C1_IRCLKEN_SHIFT                     1                                                   /*!< MCG_C1: IRCLKEN Position                */
#define MCG_C1_CLKS_MASK                         (0x03UL << MCG_C1_CLKS_SHIFT)                       /*!< MCG_C1: CLKS Mask                       */
#define MCG_C1_CLKS_SHIFT                        6                                                   /*!< MCG_C1: CLKS Position                   */
#define MCG_C1_CLKS(x)                           (((uint8_t)(((uint8_t)(x))<<MCG_C1_CLKS_SHIFT))&MCG_C1_CLKS_MASK) /*!< MCG_C1                                  */
/* ------- C2 Bit Fields                            ------ */
#define MCG_C2_IRCS_MASK                         (0x01UL << MCG_C2_IRCS_SHIFT)                       /*!< MCG_C2: IRCS Mask                       */
#define MCG_C2_IRCS_SHIFT                        0                                                   /*!< MCG_C2: IRCS Position                   */
#define MCG_C2_EREFS0_MASK                       (0x01UL << MCG_C2_EREFS0_SHIFT)                     /*!< MCG_C2: EREFS0 Mask                     */
#define MCG_C2_EREFS0_SHIFT                      2                                                   /*!< MCG_C2: EREFS0 Position                 */
/* ------- S Bit Fields                             ------ */
#define MCG_S_OSCINIT0_MASK                      (0x01UL << MCG_S_OSCINIT0_SHIFT)                    /*!< MCG_S: OSCINIT0 Mask                    */
#define MCG_S_OSCINIT0_SHIFT                     1                                                   /*!< MCG_S: OSCINIT0 Position                */
#define MCG_S_CLKST_MASK                         (0x03UL << MCG_S_CLKST_SHIFT)                       /*!< MCG_S: CLKST Mask                       */
#define MCG_S_CLKST_SHIFT                        2                                                   /*!< MCG_S: CLKST Position                   */
#define MCG_S_CLKST(x)                           (((uint8_t)(((uint8_t)(x))<<MCG_S_CLKST_SHIFT))&MCG_S_CLKST_MASK) /*!< MCG_S                                   */
/* ------- SC Bit Fields                            ------ */
#define MCG_SC_FCRDIV_MASK                       (0x07UL << MCG_SC_FCRDIV_SHIFT)                     /*!< MCG_SC: FCRDIV Mask                     */
#define MCG_SC_FCRDIV_SHIFT                      1                                                   /*!< MCG_SC: FCRDIV Position                 */
#define MCG_SC_FCRDIV(x)                         (((uint8_t)(((uint8_t)(x))<<MCG_SC_FCRDIV_SHIFT))&MCG_SC_FCRDIV_MASK) /*!< MCG_SC                                  */
/* ------- MC Bit Fields                            ------ */
#define MCG_MC_LIRC_DIV2_MASK                    (0x07UL << MCG_MC_LIRC_DIV2_SHIFT)                  /*!< MCG_MC: LIRC_DIV2 Mask                  */
#define MCG_MC_LIRC_DIV2_SHIFT                   0                                                   /*!< MCG_MC: LIRC_DIV2 Position              */
#define MCG_MC_LIRC_DIV2(x)                      (((uint8_t)(((uint8_t)(x))<<MCG_MC_LIRC_DIV2_SHIFT))&MCG_MC_LIRC_DIV2_MASK) /*!< MCG_MC                                  */
#define MCG_MC_HIRCEN_MASK                       (0x01UL << MCG_MC_HIRCEN_SHIFT)                     /*!< MCG_MC: HIRCEN Mask                     */
#define MCG_MC_HIRCEN_SHIFT                      7                                                   /*!< MCG_MC: HIRCEN Position                 */

/* MCG - Peripheral instance base addresses */
#define MCG_BasePtr                    0x40064000UL
#define MCG                            ((MCG_Type *) MCG_BasePtr)
#define MCG_BASE_PTR                   (MCG)

/* ================================================================================ */
/* ================           MCM (file:MCM_MKL_03)                ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module
 */
typedef struct {                                /*!<       MCM Structure                                                */
   __I  uint32_t  RESERVED0[2];                 /*!< 0000:                                                              */
   __I  uint16_t  PLASC;                        /*!< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /*!< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /*!< 000C: Platform Control Register                                    */
   __I  uint32_t  RESERVED1[12];                /*!< 0010:                                                              */
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
#define MCM_PLACR_EFDS_MASK                      (0x01UL << MCM_PLACR_EFDS_SHIFT)                    /*!< MCM_PLACR: EFDS Mask                    */
#define MCM_PLACR_EFDS_SHIFT                     14                                                  /*!< MCM_PLACR: EFDS Position                */
#define MCM_PLACR_DFCS_MASK                      (0x01UL << MCM_PLACR_DFCS_SHIFT)                    /*!< MCM_PLACR: DFCS Mask                    */
#define MCM_PLACR_DFCS_SHIFT                     15                                                  /*!< MCM_PLACR: DFCS Position                */
#define MCM_PLACR_ESFC_MASK                      (0x01UL << MCM_PLACR_ESFC_SHIFT)                    /*!< MCM_PLACR: ESFC Mask                    */
#define MCM_PLACR_ESFC_SHIFT                     16                                                  /*!< MCM_PLACR: ESFC Position                */
/* ------- CPO Bit Fields                           ------ */
#define MCM_CPO_CPOREQ_MASK                      (0x01UL << MCM_CPO_CPOREQ_SHIFT)                    /*!< MCM_CPO: CPOREQ Mask                    */
#define MCM_CPO_CPOREQ_SHIFT                     0                                                   /*!< MCM_CPO: CPOREQ Position                */
#define MCM_CPO_CPOACK_MASK                      (0x01UL << MCM_CPO_CPOACK_SHIFT)                    /*!< MCM_CPO: CPOACK Mask                    */
#define MCM_CPO_CPOACK_SHIFT                     1                                                   /*!< MCM_CPO: CPOACK Position                */
#define MCM_CPO_CPOWOI_MASK                      (0x01UL << MCM_CPO_CPOWOI_SHIFT)                    /*!< MCM_CPO: CPOWOI Mask                    */
#define MCM_CPO_CPOWOI_SHIFT                     2                                                   /*!< MCM_CPO: CPOWOI Position                */

/* MCM - Peripheral instance base addresses */
#define MCM_BasePtr                    0xF0003000UL
#define MCM                            ((MCM_Type *) MCM_BasePtr)
#define MCM_BASE_PTR                   (MCM)

/* ================================================================================ */
/* ================           MTB (file:MTB_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Micro Trace Buffer
 */
typedef struct {                                /*!<       MTB Structure                                                */
   __IO uint32_t  POSITION;                     /*!< 0000: MTB Position Register                                        */
   __IO uint32_t  MASTER;                       /*!< 0004: MTB Master Register                                          */
   __IO uint32_t  FLOW;                         /*!< 0008: MTB Flow Register                                            */
   __I  uint32_t  BASE;                         /*!< 000C: MTB Base Register                                            */
   __I  uint32_t  RESERVED0[956];               /*!< 0010:                                                              */
   __I  uint32_t  MODECTRL;                     /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED1[39];                /*!< 0F04:                                                              */
   __I  uint32_t  TAGSET;                       /*!< 0FA0: Claim TAG Set Register                                       */
   __I  uint32_t  TAGCLEAR;                     /*!< 0FA4: Claim TAG Clear Register                                     */
   __I  uint32_t  RESERVED2[2];                 /*!< 0FA8:                                                              */
   __I  uint32_t  LOCKACCESS;                   /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LOCKSTAT;                     /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTAT;                     /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  DEVICEARCH;                   /*!< 0FBC: Device Architecture Register                                 */
   __I  uint32_t  RESERVED3[2];                 /*!< 0FC0:                                                              */
   __I  uint32_t  DEVICECFG;                    /*!< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} MTB_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MTB' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- POSITION Bit Fields                      ------ */
#define MTB_POSITION_WRAP_MASK                   (0x01UL << MTB_POSITION_WRAP_SHIFT)                 /*!< MTB_POSITION: WRAP Mask                 */
#define MTB_POSITION_WRAP_SHIFT                  2                                                   /*!< MTB_POSITION: WRAP Position             */
#define MTB_POSITION_POINTER_MASK                (0x1FFFFFFFUL << MTB_POSITION_POINTER_SHIFT)        /*!< MTB_POSITION: POINTER Mask              */
#define MTB_POSITION_POINTER_SHIFT               3                                                   /*!< MTB_POSITION: POINTER Position          */
#define MTB_POSITION_POINTER(x)                  (((uint32_t)(((uint32_t)(x))<<MTB_POSITION_POINTER_SHIFT))&MTB_POSITION_POINTER_MASK) /*!< MTB_POSITION                            */
/* ------- MASTER Bit Fields                        ------ */
#define MTB_MASTER_MASK_MASK                     (0x1FUL << MTB_MASTER_MASK_SHIFT)                   /*!< MTB_MASTER: MASK Mask                   */
#define MTB_MASTER_MASK_SHIFT                    0                                                   /*!< MTB_MASTER: MASK Position               */
#define MTB_MASTER_MASK(x)                       (((uint32_t)(((uint32_t)(x))<<MTB_MASTER_MASK_SHIFT))&MTB_MASTER_MASK_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_TSTARTEN_MASK                 (0x01UL << MTB_MASTER_TSTARTEN_SHIFT)               /*!< MTB_MASTER: TSTARTEN Mask               */
#define MTB_MASTER_TSTARTEN_SHIFT                5                                                   /*!< MTB_MASTER: TSTARTEN Position           */
#define MTB_MASTER_TSTOPEN_MASK                  (0x01UL << MTB_MASTER_TSTOPEN_SHIFT)                /*!< MTB_MASTER: TSTOPEN Mask                */
#define MTB_MASTER_TSTOPEN_SHIFT                 6                                                   /*!< MTB_MASTER: TSTOPEN Position            */
#define MTB_MASTER_SFRWPRIV_MASK                 (0x01UL << MTB_MASTER_SFRWPRIV_SHIFT)               /*!< MTB_MASTER: SFRWPRIV Mask               */
#define MTB_MASTER_SFRWPRIV_SHIFT                7                                                   /*!< MTB_MASTER: SFRWPRIV Position           */
#define MTB_MASTER_RAMPRIV_MASK                  (0x01UL << MTB_MASTER_RAMPRIV_SHIFT)                /*!< MTB_MASTER: RAMPRIV Mask                */
#define MTB_MASTER_RAMPRIV_SHIFT                 8                                                   /*!< MTB_MASTER: RAMPRIV Position            */
#define MTB_MASTER_HALTREQ_MASK                  (0x01UL << MTB_MASTER_HALTREQ_SHIFT)                /*!< MTB_MASTER: HALTREQ Mask                */
#define MTB_MASTER_HALTREQ_SHIFT                 9                                                   /*!< MTB_MASTER: HALTREQ Position            */
#define MTB_MASTER_EN_MASK                       (0x01UL << MTB_MASTER_EN_SHIFT)                     /*!< MTB_MASTER: EN Mask                     */
#define MTB_MASTER_EN_SHIFT                      31                                                  /*!< MTB_MASTER: EN Position                 */
/* ------- FLOW Bit Fields                          ------ */
#define MTB_FLOW_AUTOSTOP_MASK                   (0x01UL << MTB_FLOW_AUTOSTOP_SHIFT)                 /*!< MTB_FLOW: AUTOSTOP Mask                 */
#define MTB_FLOW_AUTOSTOP_SHIFT                  0                                                   /*!< MTB_FLOW: AUTOSTOP Position             */
#define MTB_FLOW_AUTOHALT_MASK                   (0x01UL << MTB_FLOW_AUTOHALT_SHIFT)                 /*!< MTB_FLOW: AUTOHALT Mask                 */
#define MTB_FLOW_AUTOHALT_SHIFT                  1                                                   /*!< MTB_FLOW: AUTOHALT Position             */
#define MTB_FLOW_WATERMARK_MASK                  (0x1FFFFFFFUL << MTB_FLOW_WATERMARK_SHIFT)          /*!< MTB_FLOW: WATERMARK Mask                */
#define MTB_FLOW_WATERMARK_SHIFT                 3                                                   /*!< MTB_FLOW: WATERMARK Position            */
#define MTB_FLOW_WATERMARK(x)                    (((uint32_t)(((uint32_t)(x))<<MTB_FLOW_WATERMARK_SHIFT))&MTB_FLOW_WATERMARK_MASK) /*!< MTB_FLOW                                */
/* ------- BASE Bit Fields                          ------ */
#define MTB_BASE_BASEADDR_MASK                   (0xFFFFFFFFUL << MTB_BASE_BASEADDR_SHIFT)           /*!< MTB_BASE: BASEADDR Mask                 */
#define MTB_BASE_BASEADDR_SHIFT                  0                                                   /*!< MTB_BASE: BASEADDR Position             */
#define MTB_BASE_BASEADDR(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_BASE_BASEADDR_SHIFT))&MTB_BASE_BASEADDR_MASK) /*!< MTB_BASE                                */
/* ------- MODECTRL Bit Fields                      ------ */
#define MTB_MODECTRL_MODECTRL_MASK               (0xFFFFFFFFUL << MTB_MODECTRL_MODECTRL_SHIFT)       /*!< MTB_MODECTRL: MODECTRL Mask             */
#define MTB_MODECTRL_MODECTRL_SHIFT              0                                                   /*!< MTB_MODECTRL: MODECTRL Position         */
#define MTB_MODECTRL_MODECTRL(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_MODECTRL_MODECTRL_SHIFT))&MTB_MODECTRL_MODECTRL_MASK) /*!< MTB_MODECTRL                            */
/* ------- TAGSET Bit Fields                        ------ */
#define MTB_TAGSET_TAGSET_MASK                   (0xFFFFFFFFUL << MTB_TAGSET_TAGSET_SHIFT)           /*!< MTB_TAGSET: TAGSET Mask                 */
#define MTB_TAGSET_TAGSET_SHIFT                  0                                                   /*!< MTB_TAGSET: TAGSET Position             */
#define MTB_TAGSET_TAGSET(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_TAGSET_TAGSET_SHIFT))&MTB_TAGSET_TAGSET_MASK) /*!< MTB_TAGSET                              */
/* ------- TAGCLEAR Bit Fields                      ------ */
#define MTB_TAGCLEAR_TAGCLEAR_MASK               (0xFFFFFFFFUL << MTB_TAGCLEAR_TAGCLEAR_SHIFT)       /*!< MTB_TAGCLEAR: TAGCLEAR Mask             */
#define MTB_TAGCLEAR_TAGCLEAR_SHIFT              0                                                   /*!< MTB_TAGCLEAR: TAGCLEAR Position         */
#define MTB_TAGCLEAR_TAGCLEAR(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_TAGCLEAR_TAGCLEAR_SHIFT))&MTB_TAGCLEAR_TAGCLEAR_MASK) /*!< MTB_TAGCLEAR                            */
/* ------- LOCKACCESS Bit Fields                    ------ */
#define MTB_LOCKACCESS_LOCKACCESS_MASK           (0xFFFFFFFFUL << MTB_LOCKACCESS_LOCKACCESS_SHIFT)   /*!< MTB_LOCKACCESS: LOCKACCESS Mask         */
#define MTB_LOCKACCESS_LOCKACCESS_SHIFT          0                                                   /*!< MTB_LOCKACCESS: LOCKACCESS Position     */
#define MTB_LOCKACCESS_LOCKACCESS(x)             (((uint32_t)(((uint32_t)(x))<<MTB_LOCKACCESS_LOCKACCESS_SHIFT))&MTB_LOCKACCESS_LOCKACCESS_MASK) /*!< MTB_LOCKACCESS                          */
/* ------- LOCKSTAT Bit Fields                      ------ */
#define MTB_LOCKSTAT_LOCKSTAT_MASK               (0xFFFFFFFFUL << MTB_LOCKSTAT_LOCKSTAT_SHIFT)       /*!< MTB_LOCKSTAT: LOCKSTAT Mask             */
#define MTB_LOCKSTAT_LOCKSTAT_SHIFT              0                                                   /*!< MTB_LOCKSTAT: LOCKSTAT Position         */
#define MTB_LOCKSTAT_LOCKSTAT(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_LOCKSTAT_LOCKSTAT_SHIFT))&MTB_LOCKSTAT_LOCKSTAT_MASK) /*!< MTB_LOCKSTAT                            */
/* ------- AUTHSTAT Bit Fields                      ------ */
#define MTB_AUTHSTAT_BIT0_MASK                   (0x01UL << MTB_AUTHSTAT_BIT0_SHIFT)                 /*!< MTB_AUTHSTAT: BIT0 Mask                 */
#define MTB_AUTHSTAT_BIT0_SHIFT                  0                                                   /*!< MTB_AUTHSTAT: BIT0 Position             */
#define MTB_AUTHSTAT_BIT1_MASK                   (0x01UL << MTB_AUTHSTAT_BIT1_SHIFT)                 /*!< MTB_AUTHSTAT: BIT1 Mask                 */
#define MTB_AUTHSTAT_BIT1_SHIFT                  1                                                   /*!< MTB_AUTHSTAT: BIT1 Position             */
#define MTB_AUTHSTAT_BIT2_MASK                   (0x01UL << MTB_AUTHSTAT_BIT2_SHIFT)                 /*!< MTB_AUTHSTAT: BIT2 Mask                 */
#define MTB_AUTHSTAT_BIT2_SHIFT                  2                                                   /*!< MTB_AUTHSTAT: BIT2 Position             */
#define MTB_AUTHSTAT_BIT3_MASK                   (0x01UL << MTB_AUTHSTAT_BIT3_SHIFT)                 /*!< MTB_AUTHSTAT: BIT3 Mask                 */
#define MTB_AUTHSTAT_BIT3_SHIFT                  3                                                   /*!< MTB_AUTHSTAT: BIT3 Position             */
/* ------- DEVICEARCH Bit Fields                    ------ */
#define MTB_DEVICEARCH_DEVICEARCH_MASK           (0xFFFFFFFFUL << MTB_DEVICEARCH_DEVICEARCH_SHIFT)   /*!< MTB_DEVICEARCH: DEVICEARCH Mask         */
#define MTB_DEVICEARCH_DEVICEARCH_SHIFT          0                                                   /*!< MTB_DEVICEARCH: DEVICEARCH Position     */
#define MTB_DEVICEARCH_DEVICEARCH(x)             (((uint32_t)(((uint32_t)(x))<<MTB_DEVICEARCH_DEVICEARCH_SHIFT))&MTB_DEVICEARCH_DEVICEARCH_MASK) /*!< MTB_DEVICEARCH                          */
/* ------- DEVICECFG Bit Fields                     ------ */
#define MTB_DEVICECFG_DEVICECFG_MASK             (0xFFFFFFFFUL << MTB_DEVICECFG_DEVICECFG_SHIFT)     /*!< MTB_DEVICECFG: DEVICECFG Mask           */
#define MTB_DEVICECFG_DEVICECFG_SHIFT            0                                                   /*!< MTB_DEVICECFG: DEVICECFG Position       */
#define MTB_DEVICECFG_DEVICECFG(x)               (((uint32_t)(((uint32_t)(x))<<MTB_DEVICECFG_DEVICECFG_SHIFT))&MTB_DEVICECFG_DEVICECFG_MASK) /*!< MTB_DEVICECFG                           */
/* ------- DEVICETYPID Bit Fields                   ------ */
#define MTB_DEVICETYPID_DEVICETYPID_MASK         (0xFFFFFFFFUL << MTB_DEVICETYPID_DEVICETYPID_SHIFT) /*!< MTB_DEVICETYPID: DEVICETYPID Mask       */
#define MTB_DEVICETYPID_DEVICETYPID_SHIFT        0                                                   /*!< MTB_DEVICETYPID: DEVICETYPID Position   */
#define MTB_DEVICETYPID_DEVICETYPID(x)           (((uint32_t)(((uint32_t)(x))<<MTB_DEVICETYPID_DEVICETYPID_SHIFT))&MTB_DEVICETYPID_DEVICETYPID_MASK) /*!< MTB_DEVICETYPID                         */
/* ------- PERIPHID Bit Fields                      ------ */
#define MTB_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFUL << MTB_PERIPHID_PERIPHID_SHIFT)       /*!< MTB_PERIPHID: PERIPHID Mask             */
#define MTB_PERIPHID_PERIPHID_SHIFT              0                                                   /*!< MTB_PERIPHID: PERIPHID Position         */
#define MTB_PERIPHID_PERIPHID(x)                 (((uint32_t)(((uint32_t)(x))<<MTB_PERIPHID_PERIPHID_SHIFT))&MTB_PERIPHID_PERIPHID_MASK) /*!< MTB_PERIPHID                            */
/* ------- COMPID Bit Fields                        ------ */
#define MTB_COMPID_COMPID_MASK                   (0xFFFFFFFFUL << MTB_COMPID_COMPID_SHIFT)           /*!< MTB_COMPID: COMPID Mask                 */
#define MTB_COMPID_COMPID_SHIFT                  0                                                   /*!< MTB_COMPID: COMPID Position             */
#define MTB_COMPID_COMPID(x)                     (((uint32_t)(((uint32_t)(x))<<MTB_COMPID_COMPID_SHIFT))&MTB_COMPID_COMPID_MASK) /*!< MTB_COMPID                              */

/* MTB - Peripheral instance base addresses */
#define MTB_BasePtr                    0xF0000000UL
#define MTB                            ((MTB_Type *) MTB_BasePtr)
#define MTB_BASE_PTR                   (MTB)

/* ================================================================================ */
/* ================           MTBDWT (file:MTBDWT_MKL)             ================ */
/* ================================================================================ */

/**
 * @brief MTB data watchpoint and trace
 */
typedef struct {                                /*!<       MTBDWT Structure                                             */
   __I  uint32_t  CTRL;                         /*!< 0000: MTB DWT Control Register                                     */
   __I  uint32_t  RESERVED0[7];                 /*!< 0004:                                                              */
   struct { /* (cluster) */                     /*!< 0020: (size=0x0020, 32)                                            */
      __IO uint32_t  COMP;                      /*!< 0020: MTB_DWT Comparator Register                                  */
      __IO uint32_t  MASK;                      /*!< 0024: MTB_DWT Comparator Mask Register                             */
      __IO uint32_t  FCT;                       /*!< 0028: MTB_DWT Comparator Function Register 0                       */
      __I  uint32_t  RESERVED0;                 /*!< 002C:                                                              */
   } COMPARATOR[2];
   __I  uint32_t  RESERVED1[112];               /*!< 0040:                                                              */
   __IO uint32_t  TBCTRL;                       /*!< 0200: MTB_DWT Trace Buffer Control Register                        */
   __I  uint32_t  RESERVED2[881];               /*!< 0204:                                                              */
   __I  uint32_t  DEVICECFG;                    /*!< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} MTBDWT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MTBDWT' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- CTRL Bit Fields                          ------ */
#define MTBDWT_CTRL_DWTCFGCTRL_MASK              (0xFFFFFFFUL << MTBDWT_CTRL_DWTCFGCTRL_SHIFT)       /*!< MTBDWT_CTRL: DWTCFGCTRL Mask            */
#define MTBDWT_CTRL_DWTCFGCTRL_SHIFT             0                                                   /*!< MTBDWT_CTRL: DWTCFGCTRL Position        */
#define MTBDWT_CTRL_DWTCFGCTRL(x)                (((uint32_t)(((uint32_t)(x))<<MTBDWT_CTRL_DWTCFGCTRL_SHIFT))&MTBDWT_CTRL_DWTCFGCTRL_MASK) /*!< MTBDWT_CTRL                             */
#define MTBDWT_CTRL_NUMCMP_MASK                  (0x0FUL << MTBDWT_CTRL_NUMCMP_SHIFT)                /*!< MTBDWT_CTRL: NUMCMP Mask                */
#define MTBDWT_CTRL_NUMCMP_SHIFT                 28                                                  /*!< MTBDWT_CTRL: NUMCMP Position            */
#define MTBDWT_CTRL_NUMCMP(x)                    (((uint32_t)(((uint32_t)(x))<<MTBDWT_CTRL_NUMCMP_SHIFT))&MTBDWT_CTRL_NUMCMP_MASK) /*!< MTBDWT_CTRL                             */
/* ------- COMP Bit Fields                          ------ */
#define MTBDWT_COMP_COMP_MASK                    (0xFFFFFFFFUL << MTBDWT_COMP_COMP_SHIFT)            /*!< MTBDWT_COMP: COMP Mask                  */
#define MTBDWT_COMP_COMP_SHIFT                   0                                                   /*!< MTBDWT_COMP: COMP Position              */
#define MTBDWT_COMP_COMP(x)                      (((uint32_t)(((uint32_t)(x))<<MTBDWT_COMP_COMP_SHIFT))&MTBDWT_COMP_COMP_MASK) /*!< MTBDWT_COMP                             */
/* ------- MASK Bit Fields                          ------ */
#define MTBDWT_MASK_MASK_MASK                    (0x1FUL << MTBDWT_MASK_MASK_SHIFT)                  /*!< MTBDWT_MASK: MASK Mask                  */
#define MTBDWT_MASK_MASK_SHIFT                   0                                                   /*!< MTBDWT_MASK: MASK Position              */
#define MTBDWT_MASK_MASK(x)                      (((uint32_t)(((uint32_t)(x))<<MTBDWT_MASK_MASK_SHIFT))&MTBDWT_MASK_MASK_MASK) /*!< MTBDWT_MASK                             */
/* ------- FCT Bit Fields                           ------ */
#define MTBDWT_FCT_FUNCTION_MASK                 (0x0FUL << MTBDWT_FCT_FUNCTION_SHIFT)               /*!< MTBDWT_FCT: FUNCTION Mask               */
#define MTBDWT_FCT_FUNCTION_SHIFT                0                                                   /*!< MTBDWT_FCT: FUNCTION Position           */
#define MTBDWT_FCT_FUNCTION(x)                   (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_FUNCTION_SHIFT))&MTBDWT_FCT_FUNCTION_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVMATCH_MASK               (0x01UL << MTBDWT_FCT_DATAVMATCH_SHIFT)             /*!< MTBDWT_FCT: DATAVMATCH Mask             */
#define MTBDWT_FCT_DATAVMATCH_SHIFT              8                                                   /*!< MTBDWT_FCT: DATAVMATCH Position         */
#define MTBDWT_FCT_DATAVSIZE_MASK                (0x03UL << MTBDWT_FCT_DATAVSIZE_SHIFT)              /*!< MTBDWT_FCT: DATAVSIZE Mask              */
#define MTBDWT_FCT_DATAVSIZE_SHIFT               10                                                  /*!< MTBDWT_FCT: DATAVSIZE Position          */
#define MTBDWT_FCT_DATAVSIZE(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_DATAVSIZE_SHIFT))&MTBDWT_FCT_DATAVSIZE_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVADDR0_MASK               (0x0FUL << MTBDWT_FCT_DATAVADDR0_SHIFT)             /*!< MTBDWT_FCT: DATAVADDR0 Mask             */
#define MTBDWT_FCT_DATAVADDR0_SHIFT              12                                                  /*!< MTBDWT_FCT: DATAVADDR0 Position         */
#define MTBDWT_FCT_DATAVADDR0(x)                 (((uint32_t)(((uint32_t)(x))<<MTBDWT_FCT_DATAVADDR0_SHIFT))&MTBDWT_FCT_DATAVADDR0_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_MATCHED_MASK                  (0x01UL << MTBDWT_FCT_MATCHED_SHIFT)                /*!< MTBDWT_FCT: MATCHED Mask                */
#define MTBDWT_FCT_MATCHED_SHIFT                 24                                                  /*!< MTBDWT_FCT: MATCHED Position            */
/* ------- TBCTRL Bit Fields                        ------ */
#define MTBDWT_TBCTRL_ACOMP0_MASK                (0x01UL << MTBDWT_TBCTRL_ACOMP0_SHIFT)              /*!< MTBDWT_TBCTRL: ACOMP0 Mask              */
#define MTBDWT_TBCTRL_ACOMP0_SHIFT               0                                                   /*!< MTBDWT_TBCTRL: ACOMP0 Position          */
#define MTBDWT_TBCTRL_ACOMP1_MASK                (0x01UL << MTBDWT_TBCTRL_ACOMP1_SHIFT)              /*!< MTBDWT_TBCTRL: ACOMP1 Mask              */
#define MTBDWT_TBCTRL_ACOMP1_SHIFT               1                                                   /*!< MTBDWT_TBCTRL: ACOMP1 Position          */
#define MTBDWT_TBCTRL_NUMCOMP_MASK               (0x0FUL << MTBDWT_TBCTRL_NUMCOMP_SHIFT)             /*!< MTBDWT_TBCTRL: NUMCOMP Mask             */
#define MTBDWT_TBCTRL_NUMCOMP_SHIFT              28                                                  /*!< MTBDWT_TBCTRL: NUMCOMP Position         */
#define MTBDWT_TBCTRL_NUMCOMP(x)                 (((uint32_t)(((uint32_t)(x))<<MTBDWT_TBCTRL_NUMCOMP_SHIFT))&MTBDWT_TBCTRL_NUMCOMP_MASK) /*!< MTBDWT_TBCTRL                           */
/* ------- DEVICECFG Bit Fields                     ------ */
#define MTBDWT_DEVICECFG_DEVICECFG_MASK          (0xFFFFFFFFUL << MTBDWT_DEVICECFG_DEVICECFG_SHIFT)  /*!< MTBDWT_DEVICECFG: DEVICECFG Mask        */
#define MTBDWT_DEVICECFG_DEVICECFG_SHIFT         0                                                   /*!< MTBDWT_DEVICECFG: DEVICECFG Position    */
#define MTBDWT_DEVICECFG_DEVICECFG(x)            (((uint32_t)(((uint32_t)(x))<<MTBDWT_DEVICECFG_DEVICECFG_SHIFT))&MTBDWT_DEVICECFG_DEVICECFG_MASK) /*!< MTBDWT_DEVICECFG                        */
/* ------- DEVICETYPID Bit Fields                   ------ */
#define MTBDWT_DEVICETYPID_DEVICETYPID_MASK      (0xFFFFFFFFUL << MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT) /*!< MTBDWT_DEVICETYPID: DEVICETYPID Mask    */
#define MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT     0                                                   /*!< MTBDWT_DEVICETYPID: DEVICETYPID Position*/
#define MTBDWT_DEVICETYPID_DEVICETYPID(x)        (((uint32_t)(((uint32_t)(x))<<MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT))&MTBDWT_DEVICETYPID_DEVICETYPID_MASK) /*!< MTBDWT_DEVICETYPID                      */
/* ------- PERIPHID Bit Fields                      ------ */
#define MTBDWT_PERIPHID_PERIPHID_MASK            (0xFFFFFFFFUL << MTBDWT_PERIPHID_PERIPHID_SHIFT)    /*!< MTBDWT_PERIPHID: PERIPHID Mask          */
#define MTBDWT_PERIPHID_PERIPHID_SHIFT           0                                                   /*!< MTBDWT_PERIPHID: PERIPHID Position      */
#define MTBDWT_PERIPHID_PERIPHID(x)              (((uint32_t)(((uint32_t)(x))<<MTBDWT_PERIPHID_PERIPHID_SHIFT))&MTBDWT_PERIPHID_PERIPHID_MASK) /*!< MTBDWT_PERIPHID                         */
/* ------- COMPID Bit Fields                        ------ */
#define MTBDWT_COMPID_COMPID_MASK                (0xFFFFFFFFUL << MTBDWT_COMPID_COMPID_SHIFT)        /*!< MTBDWT_COMPID: COMPID Mask              */
#define MTBDWT_COMPID_COMPID_SHIFT               0                                                   /*!< MTBDWT_COMPID: COMPID Position          */
#define MTBDWT_COMPID_COMPID(x)                  (((uint32_t)(((uint32_t)(x))<<MTBDWT_COMPID_COMPID_SHIFT))&MTBDWT_COMPID_COMPID_MASK) /*!< MTBDWT_COMPID                           */

/* MTBDWT - Peripheral instance base addresses */
#define MTBDWT_BasePtr                 0xF0001000UL
#define MTBDWT                         ((MTBDWT_Type *) MTBDWT_BasePtr)
#define MTBDWT_BASE_PTR                (MTBDWT)

/* ================================================================================ */
/* ================           NV (file:NV_FTFA_boot)               ================ */
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
#define NV_FOPT_BOOTPIN_OPT_MASK                 (0x01UL << NV_FOPT_BOOTPIN_OPT_SHIFT)               /*!< NV_FOPT: BOOTPIN_OPT Mask               */
#define NV_FOPT_BOOTPIN_OPT_SHIFT                1                                                   /*!< NV_FOPT: BOOTPIN_OPT Position           */
#define NV_FOPT_NMI_DIS_MASK                     (0x01UL << NV_FOPT_NMI_DIS_SHIFT)                   /*!< NV_FOPT: NMI_DIS Mask                   */
#define NV_FOPT_NMI_DIS_SHIFT                    2                                                   /*!< NV_FOPT: NMI_DIS Position               */
#define NV_FOPT_RESET_PIN_CFG_MASK               (0x01UL << NV_FOPT_RESET_PIN_CFG_SHIFT)             /*!< NV_FOPT: RESET_PIN_CFG Mask             */
#define NV_FOPT_RESET_PIN_CFG_SHIFT              3                                                   /*!< NV_FOPT: RESET_PIN_CFG Position         */
#define NV_FOPT_LPBOOT1_MASK                     (0x01UL << NV_FOPT_LPBOOT1_SHIFT)                   /*!< NV_FOPT: LPBOOT1 Mask                   */
#define NV_FOPT_LPBOOT1_SHIFT                    4                                                   /*!< NV_FOPT: LPBOOT1 Position               */
#define NV_FOPT_FAST_INIT_MASK                   (0x01UL << NV_FOPT_FAST_INIT_SHIFT)                 /*!< NV_FOPT: FAST_INIT Mask                 */
#define NV_FOPT_FAST_INIT_SHIFT                  5                                                   /*!< NV_FOPT: FAST_INIT Position             */
#define NV_FOPT_BOOTSRC_SEL_MASK                 (0x03UL << NV_FOPT_BOOTSRC_SEL_SHIFT)               /*!< NV_FOPT: BOOTSRC_SEL Mask               */
#define NV_FOPT_BOOTSRC_SEL_SHIFT                6                                                   /*!< NV_FOPT: BOOTSRC_SEL Position           */
#define NV_FOPT_BOOTSRC_SEL(x)                   (((uint8_t)(((uint8_t)(x))<<NV_FOPT_BOOTSRC_SEL_SHIFT))&NV_FOPT_BOOTSRC_SEL_MASK) /*!< NV_FOPT                                 */

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
/* ================           PMC (file:PMC_0)                     ================ */
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
/* ================           PORTA (file:PORTA_MKL)               ================ */
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
/* ================           RCM (file:RCM_MKL_BOOT)              ================ */
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
   __IO uint8_t   FM;                           /*!< 0006: Force Mode Register                                          */
   __IO uint8_t   MR;                           /*!< 0007: Mode Register                                                */
   __IO uint8_t   SSRS0;                        /*!< 0008: Sticky System Reset Status Register 0                        */
   __IO uint8_t   SSRS1;                        /*!< 0009: Sticky System Reset Status Register 1                        */
} RCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SRS0 Bit Fields                          ------ */
#define RCM_SRS0_WAKEUP_MASK                     (0x01UL << RCM_SRS0_WAKEUP_SHIFT)                   /*!< RCM_SRS0: WAKEUP Mask                   */
#define RCM_SRS0_WAKEUP_SHIFT                    0                                                   /*!< RCM_SRS0: WAKEUP Position               */
#define RCM_SRS0_LVD_MASK                        (0x01UL << RCM_SRS0_LVD_SHIFT)                      /*!< RCM_SRS0: LVD Mask                      */
#define RCM_SRS0_LVD_SHIFT                       1                                                   /*!< RCM_SRS0: LVD Position                  */
#define RCM_SRS0_WDOG_MASK                       (0x01UL << RCM_SRS0_WDOG_SHIFT)                     /*!< RCM_SRS0: WDOG Mask                     */
#define RCM_SRS0_WDOG_SHIFT                      5                                                   /*!< RCM_SRS0: WDOG Position                 */
#define RCM_SRS0_PIN_MASK                        (0x01UL << RCM_SRS0_PIN_SHIFT)                      /*!< RCM_SRS0: PIN Mask                      */
#define RCM_SRS0_PIN_SHIFT                       6                                                   /*!< RCM_SRS0: PIN Position                  */
#define RCM_SRS0_POR_MASK                        (0x01UL << RCM_SRS0_POR_SHIFT)                      /*!< RCM_SRS0: POR Mask                      */
#define RCM_SRS0_POR_SHIFT                       7                                                   /*!< RCM_SRS0: POR Position                  */
/* ------- SRS1 Bit Fields                          ------ */
#define RCM_SRS1_LOCKUP_MASK                     (0x01UL << RCM_SRS1_LOCKUP_SHIFT)                   /*!< RCM_SRS1: LOCKUP Mask                   */
#define RCM_SRS1_LOCKUP_SHIFT                    1                                                   /*!< RCM_SRS1: LOCKUP Position               */
#define RCM_SRS1_SW_MASK                         (0x01UL << RCM_SRS1_SW_SHIFT)                       /*!< RCM_SRS1: SW Mask                       */
#define RCM_SRS1_SW_SHIFT                        2                                                   /*!< RCM_SRS1: SW Position                   */
#define RCM_SRS1_MDM_AP_MASK                     (0x01UL << RCM_SRS1_MDM_AP_SHIFT)                   /*!< RCM_SRS1: MDM_AP Mask                   */
#define RCM_SRS1_MDM_AP_SHIFT                    3                                                   /*!< RCM_SRS1: MDM_AP Position               */
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
/* ------- FM Bit Fields                            ------ */
#define RCM_FM_FORCEROM_MASK                     (0x03UL << RCM_FM_FORCEROM_SHIFT)                   /*!< RCM_FM: FORCEROM Mask                   */
#define RCM_FM_FORCEROM_SHIFT                    1                                                   /*!< RCM_FM: FORCEROM Position               */
#define RCM_FM_FORCEROM(x)                       (((uint8_t)(((uint8_t)(x))<<RCM_FM_FORCEROM_SHIFT))&RCM_FM_FORCEROM_MASK) /*!< RCM_FM                                  */
/* ------- MR Bit Fields                            ------ */
#define RCM_MR_BOOTROM_MASK                      (0x03UL << RCM_MR_BOOTROM_SHIFT)                    /*!< RCM_MR: BOOTROM Mask                    */
#define RCM_MR_BOOTROM_SHIFT                     1                                                   /*!< RCM_MR: BOOTROM Position                */
#define RCM_MR_BOOTROM(x)                        (((uint8_t)(((uint8_t)(x))<<RCM_MR_BOOTROM_SHIFT))&RCM_MR_BOOTROM_MASK) /*!< RCM_MR                                  */
/* ------- SSRS0 Bit Fields                         ------ */
#define RCM_SSRS0_SWAKEUP_MASK                   (0x01UL << RCM_SSRS0_SWAKEUP_SHIFT)                 /*!< RCM_SSRS0: SWAKEUP Mask                 */
#define RCM_SSRS0_SWAKEUP_SHIFT                  0                                                   /*!< RCM_SSRS0: SWAKEUP Position             */
#define RCM_SSRS0_SLVD_MASK                      (0x01UL << RCM_SSRS0_SLVD_SHIFT)                    /*!< RCM_SSRS0: SLVD Mask                    */
#define RCM_SSRS0_SLVD_SHIFT                     1                                                   /*!< RCM_SSRS0: SLVD Position                */
#define RCM_SSRS0_SWDOG_MASK                     (0x01UL << RCM_SSRS0_SWDOG_SHIFT)                   /*!< RCM_SSRS0: SWDOG Mask                   */
#define RCM_SSRS0_SWDOG_SHIFT                    5                                                   /*!< RCM_SSRS0: SWDOG Position               */
#define RCM_SSRS0_SPIN_MASK                      (0x01UL << RCM_SSRS0_SPIN_SHIFT)                    /*!< RCM_SSRS0: SPIN Mask                    */
#define RCM_SSRS0_SPIN_SHIFT                     6                                                   /*!< RCM_SSRS0: SPIN Position                */
#define RCM_SSRS0_SPOR_MASK                      (0x01UL << RCM_SSRS0_SPOR_SHIFT)                    /*!< RCM_SSRS0: SPOR Mask                    */
#define RCM_SSRS0_SPOR_SHIFT                     7                                                   /*!< RCM_SSRS0: SPOR Position                */
/* ------- SSRS1 Bit Fields                         ------ */
#define RCM_SSRS1_SLOCKUP_MASK                   (0x01UL << RCM_SSRS1_SLOCKUP_SHIFT)                 /*!< RCM_SSRS1: SLOCKUP Mask                 */
#define RCM_SSRS1_SLOCKUP_SHIFT                  1                                                   /*!< RCM_SSRS1: SLOCKUP Position             */
#define RCM_SSRS1_SSW_MASK                       (0x01UL << RCM_SSRS1_SSW_SHIFT)                     /*!< RCM_SSRS1: SSW Mask                     */
#define RCM_SSRS1_SSW_SHIFT                      2                                                   /*!< RCM_SSRS1: SSW Position                 */
#define RCM_SSRS1_SMDM_AP_MASK                   (0x01UL << RCM_SSRS1_SMDM_AP_SHIFT)                 /*!< RCM_SSRS1: SMDM_AP Mask                 */
#define RCM_SSRS1_SMDM_AP_SHIFT                  3                                                   /*!< RCM_SSRS1: SMDM_AP Position             */
#define RCM_SSRS1_SSACKERR_MASK                  (0x01UL << RCM_SSRS1_SSACKERR_SHIFT)                /*!< RCM_SSRS1: SSACKERR Mask                */
#define RCM_SSRS1_SSACKERR_SHIFT                 5                                                   /*!< RCM_SSRS1: SSACKERR Position            */

/* RCM - Peripheral instance base addresses */
#define RCM_BasePtr                    0x4007F000UL
#define RCM                            ((RCM_Type *) RCM_BasePtr)
#define RCM_BASE_PTR                   (RCM)

/* ================================================================================ */
/* ================           ROM (file:ROM_MKL)                   ================ */
/* ================================================================================ */

/**
 * @brief System ROM
 */
typedef struct {                                /*!<       ROM Structure                                                */
   __I  uint32_t  ENTRY[3];                     /*!< 0000: Entry                                                        */
   __I  uint32_t  TABLEMARK;                    /*!< 000C: End of Table Marker Register                                 */
   __I  uint32_t  RESERVED0[1007];              /*!< 0010:                                                              */
   __I  uint32_t  SYSACCESS;                    /*!< 0FCC: System Access Register                                       */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} ROM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ROM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- ENTRY Bit Fields                         ------ */
#define ROM_ENTRY_ENTRY_MASK                     (0xFFFFFFFFUL << ROM_ENTRY_ENTRY_SHIFT)             /*!< ROM_ENTRY: ENTRY Mask                   */
#define ROM_ENTRY_ENTRY_SHIFT                    0                                                   /*!< ROM_ENTRY: ENTRY Position               */
#define ROM_ENTRY_ENTRY(x)                       (((uint32_t)(((uint32_t)(x))<<ROM_ENTRY_ENTRY_SHIFT))&ROM_ENTRY_ENTRY_MASK) /*!< ROM_ENTRY                               */
/* ------- TABLEMARK Bit Fields                     ------ */
#define ROM_TABLEMARK_MARK_MASK                  (0xFFFFFFFFUL << ROM_TABLEMARK_MARK_SHIFT)          /*!< ROM_TABLEMARK: MARK Mask                */
#define ROM_TABLEMARK_MARK_SHIFT                 0                                                   /*!< ROM_TABLEMARK: MARK Position            */
#define ROM_TABLEMARK_MARK(x)                    (((uint32_t)(((uint32_t)(x))<<ROM_TABLEMARK_MARK_SHIFT))&ROM_TABLEMARK_MARK_MASK) /*!< ROM_TABLEMARK                           */
/* ------- SYSACCESS Bit Fields                     ------ */
#define ROM_SYSACCESS_SYSACCESS_MASK             (0xFFFFFFFFUL << ROM_SYSACCESS_SYSACCESS_SHIFT)     /*!< ROM_SYSACCESS: SYSACCESS Mask           */
#define ROM_SYSACCESS_SYSACCESS_SHIFT            0                                                   /*!< ROM_SYSACCESS: SYSACCESS Position       */
#define ROM_SYSACCESS_SYSACCESS(x)               (((uint32_t)(((uint32_t)(x))<<ROM_SYSACCESS_SYSACCESS_SHIFT))&ROM_SYSACCESS_SYSACCESS_MASK) /*!< ROM_SYSACCESS                           */
/* ------- PERIPHID Bit Fields                      ------ */
#define ROM_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFUL << ROM_PERIPHID_PERIPHID_SHIFT)       /*!< ROM_PERIPHID: PERIPHID Mask             */
#define ROM_PERIPHID_PERIPHID_SHIFT              0                                                   /*!< ROM_PERIPHID: PERIPHID Position         */
#define ROM_PERIPHID_PERIPHID(x)                 (((uint32_t)(((uint32_t)(x))<<ROM_PERIPHID_PERIPHID_SHIFT))&ROM_PERIPHID_PERIPHID_MASK) /*!< ROM_PERIPHID                            */
/* ------- COMPID Bit Fields                        ------ */
#define ROM_COMPID_COMPID_MASK                   (0xFFFFFFFFUL << ROM_COMPID_COMPID_SHIFT)           /*!< ROM_COMPID: COMPID Mask                 */
#define ROM_COMPID_COMPID_SHIFT                  0                                                   /*!< ROM_COMPID: COMPID Position             */
#define ROM_COMPID_COMPID(x)                     (((uint32_t)(((uint32_t)(x))<<ROM_COMPID_COMPID_SHIFT))&ROM_COMPID_COMPID_MASK) /*!< ROM_COMPID                              */

/* ROM - Peripheral instance base addresses */
#define ROM_BasePtr                    0xF0002000UL
#define ROM                            ((ROM_Type *) ROM_BasePtr)
#define ROM_BASE_PTR                   (ROM)

/* ================================================================================ */
/* ================           RTC (file:RTC)                       ================ */
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
#define RTC_CR_WPS_MASK                          (0x01UL << RTC_CR_WPS_SHIFT)                        /*!< RTC_CR: WPS Mask                        */
#define RTC_CR_WPS_SHIFT                         4                                                   /*!< RTC_CR: WPS Position                    */
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
#define RTC_IER_TSIE_MASK                        (0x01UL << RTC_IER_TSIE_SHIFT)                      /*!< RTC_IER: TSIE Mask                      */
#define RTC_IER_TSIE_SHIFT                       4                                                   /*!< RTC_IER: TSIE Position                  */
#define RTC_IER_WPON_MASK                        (0x01UL << RTC_IER_WPON_SHIFT)                      /*!< RTC_IER: WPON Mask                      */
#define RTC_IER_WPON_SHIFT                       7                                                   /*!< RTC_IER: WPON Position                  */

/* RTC - Peripheral instance base addresses */
#define RTC_BasePtr                    0x4003D000UL
#define RTC                            ((RTC_Type *) RTC_BasePtr)
#define RTC_BASE_PTR                   (RTC)

/* ================================================================================ */
/* ================           SIM (file:SIM_MKL03Z4)               ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module
 */
typedef struct {                                /*!<       SIM Structure                                                */
   __IO uint32_t  SOPT1;                        /*!< 0000: System Options Register 1                                    */
   __I  uint32_t  RESERVED0[1024];              /*!< 0004:                                                              */
   __IO uint32_t  SOPT2;                        /*!< 1004: System Options Register 2                                    */
   __I  uint32_t  RESERVED1;                    /*!< 1008:                                                              */
   __IO uint32_t  SOPT4;                        /*!< 100C: System Options Register 4                                    */
   __IO uint32_t  SOPT5;                        /*!< 1010: System Options Register 5                                    */
   __I  uint32_t  RESERVED2;                    /*!< 1014:                                                              */
   __IO uint32_t  SOPT7;                        /*!< 1018: System Options Register 7                                    */
   __I  uint32_t  RESERVED3[2];                 /*!< 101C:                                                              */
   __I  uint32_t  SDID;                         /*!< 1024: System Device Identification Register                        */
   __I  uint32_t  RESERVED4[3];                 /*!< 1028:                                                              */
   __IO uint32_t  SCGC4;                        /*!< 1034: System Clock Gating Control Register 4                       */
   __IO uint32_t  SCGC5;                        /*!< 1038: System Clock Gating Control Register 5                       */
   __IO uint32_t  SCGC6;                        /*!< 103C: System Clock Gating Control Register 6                       */
   __I  uint32_t  RESERVED5;                    /*!< 1040:                                                              */
   __IO uint32_t  CLKDIV1;                      /*!< 1044: System Clock Divider Register 1                              */
   __I  uint32_t  RESERVED6;                    /*!< 1048:                                                              */
   __IO uint32_t  FCFG1;                        /*!< 104C: Flash Configuration Register 1                               */
   __I  uint32_t  FCFG2;                        /*!< 1050: Flash Configuration Register 2                               */
   __I  uint32_t  RESERVED7;                    /*!< 1054:                                                              */
   __I  uint32_t  UIDMH;                        /*!< 1058: Unique Identification Register Mid-High                      */
   __I  uint32_t  UIDML;                        /*!< 105C: Unique Identification Register Mid Low                       */
   __I  uint32_t  UIDL;                         /*!< 1060: Unique Identification Register Low                           */
   __I  uint32_t  RESERVED8[39];                /*!< 1064:                                                              */
   __IO uint32_t  COPC;                         /*!< 1100: COP Control Register                                         */
   __O  uint32_t  SRVCOP;                       /*!< 1104: Service COP Register                                         */
} SIM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SOPT1 Bit Fields                         ------ */
#define SIM_SOPT1_OSC32KOUT_MASK                 (0x03UL << SIM_SOPT1_OSC32KOUT_SHIFT)               /*!< SIM_SOPT1: OSC32KOUT Mask               */
#define SIM_SOPT1_OSC32KOUT_SHIFT                16                                                  /*!< SIM_SOPT1: OSC32KOUT Position           */
#define SIM_SOPT1_OSC32KOUT(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_OSC32KOUT_SHIFT))&SIM_SOPT1_OSC32KOUT_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_OSC32KSEL_MASK                 (0x03UL << SIM_SOPT1_OSC32KSEL_SHIFT)               /*!< SIM_SOPT1: OSC32KSEL Mask               */
#define SIM_SOPT1_OSC32KSEL_SHIFT                18                                                  /*!< SIM_SOPT1: OSC32KSEL Position           */
#define SIM_SOPT1_OSC32KSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT1_OSC32KSEL_SHIFT))&SIM_SOPT1_OSC32KSEL_MASK) /*!< SIM_SOPT1                               */
/* ------- SOPT2 Bit Fields                         ------ */
#define SIM_SOPT2_RTCCLKOUTSEL_MASK              (0x01UL << SIM_SOPT2_RTCCLKOUTSEL_SHIFT)            /*!< SIM_SOPT2: RTCCLKOUTSEL Mask            */
#define SIM_SOPT2_RTCCLKOUTSEL_SHIFT             4                                                   /*!< SIM_SOPT2: RTCCLKOUTSEL Position        */
#define SIM_SOPT2_CLKOUTSEL_MASK                 (0x07UL << SIM_SOPT2_CLKOUTSEL_SHIFT)               /*!< SIM_SOPT2: CLKOUTSEL Mask               */
#define SIM_SOPT2_CLKOUTSEL_SHIFT                5                                                   /*!< SIM_SOPT2: CLKOUTSEL Position           */
#define SIM_SOPT2_CLKOUTSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_CLKOUTSEL_SHIFT))&SIM_SOPT2_CLKOUTSEL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_TPMSRC_MASK                    (0x03UL << SIM_SOPT2_TPMSRC_SHIFT)                  /*!< SIM_SOPT2: TPMSRC Mask                  */
#define SIM_SOPT2_TPMSRC_SHIFT                   24                                                  /*!< SIM_SOPT2: TPMSRC Position              */
#define SIM_SOPT2_TPMSRC(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_TPMSRC_SHIFT))&SIM_SOPT2_TPMSRC_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_LPUART0SRC_MASK                (0x03UL << SIM_SOPT2_LPUART0SRC_SHIFT)              /*!< SIM_SOPT2: LPUART0SRC Mask              */
#define SIM_SOPT2_LPUART0SRC_SHIFT               26                                                  /*!< SIM_SOPT2: LPUART0SRC Position          */
#define SIM_SOPT2_LPUART0SRC(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT2_LPUART0SRC_SHIFT))&SIM_SOPT2_LPUART0SRC_MASK) /*!< SIM_SOPT2                               */
/* ------- SOPT4 Bit Fields                         ------ */
#define SIM_SOPT4_TPM1CH0SRC_MASK                (0x01UL << SIM_SOPT4_TPM1CH0SRC_SHIFT)              /*!< SIM_SOPT4: TPM1CH0SRC Mask              */
#define SIM_SOPT4_TPM1CH0SRC_SHIFT               18                                                  /*!< SIM_SOPT4: TPM1CH0SRC Position          */
#define SIM_SOPT4_TPM0CLKSEL_MASK                (0x01UL << SIM_SOPT4_TPM0CLKSEL_SHIFT)              /*!< SIM_SOPT4: TPM0CLKSEL Mask              */
#define SIM_SOPT4_TPM0CLKSEL_SHIFT               24                                                  /*!< SIM_SOPT4: TPM0CLKSEL Position          */
#define SIM_SOPT4_TPM1CLKSEL_MASK                (0x01UL << SIM_SOPT4_TPM1CLKSEL_SHIFT)              /*!< SIM_SOPT4: TPM1CLKSEL Mask              */
#define SIM_SOPT4_TPM1CLKSEL_SHIFT               25                                                  /*!< SIM_SOPT4: TPM1CLKSEL Position          */
/* ------- SOPT5 Bit Fields                         ------ */
#define SIM_SOPT5_LPUART0TXSRC_MASK              (0x01UL << SIM_SOPT5_LPUART0TXSRC_SHIFT)            /*!< SIM_SOPT5: LPUART0TXSRC Mask            */
#define SIM_SOPT5_LPUART0TXSRC_SHIFT             0                                                   /*!< SIM_SOPT5: LPUART0TXSRC Position        */
#define SIM_SOPT5_LPUART0RXSRC_MASK              (0x01UL << SIM_SOPT5_LPUART0RXSRC_SHIFT)            /*!< SIM_SOPT5: LPUART0RXSRC Mask            */
#define SIM_SOPT5_LPUART0RXSRC_SHIFT             2                                                   /*!< SIM_SOPT5: LPUART0RXSRC Position        */
#define SIM_SOPT5_LPUART0ODE_MASK                (0x01UL << SIM_SOPT5_LPUART0ODE_SHIFT)              /*!< SIM_SOPT5: LPUART0ODE Mask              */
#define SIM_SOPT5_LPUART0ODE_SHIFT               16                                                  /*!< SIM_SOPT5: LPUART0ODE Position          */
/* ------- SOPT7 Bit Fields                         ------ */
#define SIM_SOPT7_ADC0TRGSEL_MASK                (0x0FUL << SIM_SOPT7_ADC0TRGSEL_SHIFT)              /*!< SIM_SOPT7: ADC0TRGSEL Mask              */
#define SIM_SOPT7_ADC0TRGSEL_SHIFT               0                                                   /*!< SIM_SOPT7: ADC0TRGSEL Position          */
#define SIM_SOPT7_ADC0TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_SOPT7_ADC0TRGSEL_SHIFT))&SIM_SOPT7_ADC0TRGSEL_MASK) /*!< SIM_SOPT7                               */
#define SIM_SOPT7_ADC0PRETRGSEL_MASK             (0x01UL << SIM_SOPT7_ADC0PRETRGSEL_SHIFT)           /*!< SIM_SOPT7: ADC0PRETRGSEL Mask           */
#define SIM_SOPT7_ADC0PRETRGSEL_SHIFT            4                                                   /*!< SIM_SOPT7: ADC0PRETRGSEL Position       */
#define SIM_SOPT7_ADC0ALTTRGEN_MASK              (0x01UL << SIM_SOPT7_ADC0ALTTRGEN_SHIFT)            /*!< SIM_SOPT7: ADC0ALTTRGEN Mask            */
#define SIM_SOPT7_ADC0ALTTRGEN_SHIFT             7                                                   /*!< SIM_SOPT7: ADC0ALTTRGEN Position        */
/* ------- SDID Bit Fields                          ------ */
#define SIM_SDID_PINID_MASK                      (0x0FUL << SIM_SDID_PINID_SHIFT)                    /*!< SIM_SDID: PINID Mask                    */
#define SIM_SDID_PINID_SHIFT                     0                                                   /*!< SIM_SDID: PINID Position                */
#define SIM_SDID_PINID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_PINID_SHIFT))&SIM_SDID_PINID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_DIEID_MASK                      (0x1FUL << SIM_SDID_DIEID_SHIFT)                    /*!< SIM_SDID: DIEID Mask                    */
#define SIM_SDID_DIEID_SHIFT                     7                                                   /*!< SIM_SDID: DIEID Position                */
#define SIM_SDID_DIEID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_DIEID_SHIFT))&SIM_SDID_DIEID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_REVID_MASK                      (0x0FUL << SIM_SDID_REVID_SHIFT)                    /*!< SIM_SDID: REVID Mask                    */
#define SIM_SDID_REVID_SHIFT                     12                                                  /*!< SIM_SDID: REVID Position                */
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_REVID_SHIFT))&SIM_SDID_REVID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SRAMSIZE_MASK                   (0x0FUL << SIM_SDID_SRAMSIZE_SHIFT)                 /*!< SIM_SDID: SRAMSIZE Mask                 */
#define SIM_SDID_SRAMSIZE_SHIFT                  16                                                  /*!< SIM_SDID: SRAMSIZE Position             */
#define SIM_SDID_SRAMSIZE(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SRAMSIZE_SHIFT))&SIM_SDID_SRAMSIZE_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SERIESID_MASK                   (0x0FUL << SIM_SDID_SERIESID_SHIFT)                 /*!< SIM_SDID: SERIESID Mask                 */
#define SIM_SDID_SERIESID_SHIFT                  20                                                  /*!< SIM_SDID: SERIESID Position             */
#define SIM_SDID_SERIESID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SERIESID_SHIFT))&SIM_SDID_SERIESID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SUBFAMID_MASK                   (0x0FUL << SIM_SDID_SUBFAMID_SHIFT)                 /*!< SIM_SDID: SUBFAMID Mask                 */
#define SIM_SDID_SUBFAMID_SHIFT                  24                                                  /*!< SIM_SDID: SUBFAMID Position             */
#define SIM_SDID_SUBFAMID(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SUBFAMID_SHIFT))&SIM_SDID_SUBFAMID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_FAMID_MASK                      (0x0FUL << SIM_SDID_FAMID_SHIFT)                    /*!< SIM_SDID: FAMID Mask                    */
#define SIM_SDID_FAMID_SHIFT                     28                                                  /*!< SIM_SDID: FAMID Position                */
#define SIM_SDID_FAMID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_FAMID_SHIFT))&SIM_SDID_FAMID_MASK) /*!< SIM_SDID                                */
/* ------- SCGC4 Bit Fields                         ------ */
#define SIM_SCGC4_I2C0_MASK                      (0x01UL << SIM_SCGC4_I2C0_SHIFT)                    /*!< SIM_SCGC4: I2C0 Mask                    */
#define SIM_SCGC4_I2C0_SHIFT                     6                                                   /*!< SIM_SCGC4: I2C0 Position                */
#define SIM_SCGC4_CMP0_MASK                      (0x01UL << SIM_SCGC4_CMP0_SHIFT)                    /*!< SIM_SCGC4: CMP0 Mask                    */
#define SIM_SCGC4_CMP0_SHIFT                     19                                                  /*!< SIM_SCGC4: CMP0 Position                */
#define SIM_SCGC4_VREF_MASK                      (0x01UL << SIM_SCGC4_VREF_SHIFT)                    /*!< SIM_SCGC4: VREF Mask                    */
#define SIM_SCGC4_VREF_SHIFT                     20                                                  /*!< SIM_SCGC4: VREF Position                */
#define SIM_SCGC4_SPI0_MASK                      (0x01UL << SIM_SCGC4_SPI0_SHIFT)                    /*!< SIM_SCGC4: SPI0 Mask                    */
#define SIM_SCGC4_SPI0_SHIFT                     22                                                  /*!< SIM_SCGC4: SPI0 Position                */
/* ------- SCGC5 Bit Fields                         ------ */
#define SIM_SCGC5_LPTMR_MASK                     (0x01UL << SIM_SCGC5_LPTMR_SHIFT)                   /*!< SIM_SCGC5: LPTMR Mask                   */
#define SIM_SCGC5_LPTMR_SHIFT                    0                                                   /*!< SIM_SCGC5: LPTMR Position               */
#define SIM_SCGC5_PORTA_MASK                     (0x01UL << SIM_SCGC5_PORTA_SHIFT)                   /*!< SIM_SCGC5: PORTA Mask                   */
#define SIM_SCGC5_PORTA_SHIFT                    9                                                   /*!< SIM_SCGC5: PORTA Position               */
#define SIM_SCGC5_PORTB_MASK                     (0x01UL << SIM_SCGC5_PORTB_SHIFT)                   /*!< SIM_SCGC5: PORTB Mask                   */
#define SIM_SCGC5_PORTB_SHIFT                    10                                                  /*!< SIM_SCGC5: PORTB Position               */
#define SIM_SCGC5_LPUART0_MASK                   (0x01UL << SIM_SCGC5_LPUART0_SHIFT)                 /*!< SIM_SCGC5: LPUART0 Mask                 */
#define SIM_SCGC5_LPUART0_SHIFT                  20                                                  /*!< SIM_SCGC5: LPUART0 Position             */
/* ------- SCGC6 Bit Fields                         ------ */
#define SIM_SCGC6_FTF_MASK                       (0x01UL << SIM_SCGC6_FTF_SHIFT)                     /*!< SIM_SCGC6: FTF Mask                     */
#define SIM_SCGC6_FTF_SHIFT                      0                                                   /*!< SIM_SCGC6: FTF Position                 */
#define SIM_SCGC6_TPM0_MASK                      (0x01UL << SIM_SCGC6_TPM0_SHIFT)                    /*!< SIM_SCGC6: TPM0 Mask                    */
#define SIM_SCGC6_TPM0_SHIFT                     24                                                  /*!< SIM_SCGC6: TPM0 Position                */
#define SIM_SCGC6_TPM1_MASK                      (0x01UL << SIM_SCGC6_TPM1_SHIFT)                    /*!< SIM_SCGC6: TPM1 Mask                    */
#define SIM_SCGC6_TPM1_SHIFT                     25                                                  /*!< SIM_SCGC6: TPM1 Position                */
#define SIM_SCGC6_ADC0_MASK                      (0x01UL << SIM_SCGC6_ADC0_SHIFT)                    /*!< SIM_SCGC6: ADC0 Mask                    */
#define SIM_SCGC6_ADC0_SHIFT                     27                                                  /*!< SIM_SCGC6: ADC0 Position                */
#define SIM_SCGC6_RTC_MASK                       (0x01UL << SIM_SCGC6_RTC_SHIFT)                     /*!< SIM_SCGC6: RTC Mask                     */
#define SIM_SCGC6_RTC_SHIFT                      29                                                  /*!< SIM_SCGC6: RTC Position                 */
/* ------- CLKDIV1 Bit Fields                       ------ */
#define SIM_CLKDIV1_OUTDIV4_MASK                 (0x07UL << SIM_CLKDIV1_OUTDIV4_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV4 Mask               */
#define SIM_CLKDIV1_OUTDIV4_SHIFT                16                                                  /*!< SIM_CLKDIV1: OUTDIV4 Position           */
#define SIM_CLKDIV1_OUTDIV4(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV4_SHIFT))&SIM_CLKDIV1_OUTDIV4_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV1_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV1_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV1 Mask               */
#define SIM_CLKDIV1_OUTDIV1_SHIFT                28                                                  /*!< SIM_CLKDIV1: OUTDIV1 Position           */
#define SIM_CLKDIV1_OUTDIV1(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV1_OUTDIV1_SHIFT))&SIM_CLKDIV1_OUTDIV1_MASK) /*!< SIM_CLKDIV1                             */
/* ------- FCFG1 Bit Fields                         ------ */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x01UL << SIM_FCFG1_FLASHDIS_SHIFT)                /*!< SIM_FCFG1: FLASHDIS Mask                */
#define SIM_FCFG1_FLASHDIS_SHIFT                 0                                                   /*!< SIM_FCFG1: FLASHDIS Position            */
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x01UL << SIM_FCFG1_FLASHDOZE_SHIFT)               /*!< SIM_FCFG1: FLASHDOZE Mask               */
#define SIM_FCFG1_FLASHDOZE_SHIFT                1                                                   /*!< SIM_FCFG1: FLASHDOZE Position           */
#define SIM_FCFG1_PFSIZE_MASK                    (0x0FUL << SIM_FCFG1_PFSIZE_SHIFT)                  /*!< SIM_FCFG1: PFSIZE Mask                  */
#define SIM_FCFG1_PFSIZE_SHIFT                   24                                                  /*!< SIM_FCFG1: PFSIZE Position              */
#define SIM_FCFG1_PFSIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_PFSIZE_SHIFT))&SIM_FCFG1_PFSIZE_MASK) /*!< SIM_FCFG1                               */
/* ------- FCFG2 Bit Fields                         ------ */
#define SIM_FCFG2_MAXADDR0_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR0_SHIFT)                /*!< SIM_FCFG2: MAXADDR0 Mask                */
#define SIM_FCFG2_MAXADDR0_SHIFT                 24                                                  /*!< SIM_FCFG2: MAXADDR0 Position            */
#define SIM_FCFG2_MAXADDR0(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_FCFG2_MAXADDR0_SHIFT))&SIM_FCFG2_MAXADDR0_MASK) /*!< SIM_FCFG2                               */
/* ------- UIDMH Bit Fields                         ------ */
#define SIM_UIDMH_UID_MASK                       (0xFFFFUL << SIM_UIDMH_UID_SHIFT)                   /*!< SIM_UIDMH: UID Mask                     */
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
/* ------- COPC Bit Fields                          ------ */
#define SIM_COPC_COPW_MASK                       (0x01UL << SIM_COPC_COPW_SHIFT)                     /*!< SIM_COPC: COPW Mask                     */
#define SIM_COPC_COPW_SHIFT                      0                                                   /*!< SIM_COPC: COPW Position                 */
#define SIM_COPC_COPCLKS_MASK                    (0x01UL << SIM_COPC_COPCLKS_SHIFT)                  /*!< SIM_COPC: COPCLKS Mask                  */
#define SIM_COPC_COPCLKS_SHIFT                   1                                                   /*!< SIM_COPC: COPCLKS Position              */
#define SIM_COPC_COPT_MASK                       (0x03UL << SIM_COPC_COPT_SHIFT)                     /*!< SIM_COPC: COPT Mask                     */
#define SIM_COPC_COPT_SHIFT                      2                                                   /*!< SIM_COPC: COPT Position                 */
#define SIM_COPC_COPT(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_COPC_COPT_SHIFT))&SIM_COPC_COPT_MASK) /*!< SIM_COPC                                */
#define SIM_COPC_COPSTPEN_MASK                   (0x01UL << SIM_COPC_COPSTPEN_SHIFT)                 /*!< SIM_COPC: COPSTPEN Mask                 */
#define SIM_COPC_COPSTPEN_SHIFT                  4                                                   /*!< SIM_COPC: COPSTPEN Position             */
#define SIM_COPC_COPDBGEN_MASK                   (0x01UL << SIM_COPC_COPDBGEN_SHIFT)                 /*!< SIM_COPC: COPDBGEN Mask                 */
#define SIM_COPC_COPDBGEN_SHIFT                  5                                                   /*!< SIM_COPC: COPDBGEN Position             */
#define SIM_COPC_COPCLKSEL_MASK                  (0x03UL << SIM_COPC_COPCLKSEL_SHIFT)                /*!< SIM_COPC: COPCLKSEL Mask                */
#define SIM_COPC_COPCLKSEL_SHIFT                 6                                                   /*!< SIM_COPC: COPCLKSEL Position            */
#define SIM_COPC_COPCLKSEL(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_COPC_COPCLKSEL_SHIFT))&SIM_COPC_COPCLKSEL_MASK) /*!< SIM_COPC                                */
/* ------- SRVCOP Bit Fields                        ------ */
#define SIM_SRVCOP_SRVCOP_MASK                   (0xFFUL << SIM_SRVCOP_SRVCOP_SHIFT)                 /*!< SIM_SRVCOP: SRVCOP Mask                 */
#define SIM_SRVCOP_SRVCOP_SHIFT                  0                                                   /*!< SIM_SRVCOP: SRVCOP Position             */
#define SIM_SRVCOP_SRVCOP(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SRVCOP_SRVCOP_SHIFT))&SIM_SRVCOP_SRVCOP_MASK) /*!< SIM_SRVCOP                              */

/* SIM - Peripheral instance base addresses */
#define SIM_BasePtr                    0x40047000UL
#define SIM                            ((SIM_Type *) SIM_BasePtr)
#define SIM_BASE_PTR                   (SIM)

/* ================================================================================ */
/* ================           SMC (file:SMC_MKL03)                 ================ */
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
#define SMC_PMPROT_AVLP_MASK                     (0x01UL << SMC_PMPROT_AVLP_SHIFT)                   /*!< SMC_PMPROT: AVLP Mask                   */
#define SMC_PMPROT_AVLP_SHIFT                    5                                                   /*!< SMC_PMPROT: AVLP Position               */
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
#define SMC_STOPCTRL_VLLSM_MASK                  (0x07UL << SMC_STOPCTRL_VLLSM_SHIFT)                /*!< SMC_STOPCTRL: VLLSM Mask                */
#define SMC_STOPCTRL_VLLSM_SHIFT                 0                                                   /*!< SMC_STOPCTRL: VLLSM Position            */
#define SMC_STOPCTRL_VLLSM(x)                    (((uint8_t)(((uint8_t)(x))<<SMC_STOPCTRL_VLLSM_SHIFT))&SMC_STOPCTRL_VLLSM_MASK) /*!< SMC_STOPCTRL                            */
#define SMC_STOPCTRL_LPOPO_MASK                  (0x01UL << SMC_STOPCTRL_LPOPO_SHIFT)                /*!< SMC_STOPCTRL: LPOPO Mask                */
#define SMC_STOPCTRL_LPOPO_SHIFT                 3                                                   /*!< SMC_STOPCTRL: LPOPO Position            */
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
/* ================           SPI0 (file:SPI0_MKL03)               ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
typedef struct {                                /*!<       SPI0 Structure                                               */
   __I  uint8_t   S;                            /*!< 0000: SPI status register                                          */
   __IO uint8_t   BR;                           /*!< 0001: SPI baud rate register                                       */
   __IO uint8_t   C2;                           /*!< 0002: SPI control register 2                                       */
   __IO uint8_t   C1;                           /*!< 0003: SPI control register 1                                       */
   __IO uint8_t   M;                            /*!< 0004: SPI match register                                           */
   __I  uint8_t   RESERVED0;                    /*!< 0005:                                                              */
   __IO uint8_t   D;                            /*!< 0006: SPI data register                                            */
} SPI_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- S Bit Fields                             ------ */
#define SPI_S_MODF_MASK                          (0x01UL << SPI_S_MODF_SHIFT)                        /*!< SPI0_S: MODF Mask                       */
#define SPI_S_MODF_SHIFT                         4                                                   /*!< SPI0_S: MODF Position                   */
#define SPI_S_SPTEF_MASK                         (0x01UL << SPI_S_SPTEF_SHIFT)                       /*!< SPI0_S: SPTEF Mask                      */
#define SPI_S_SPTEF_SHIFT                        5                                                   /*!< SPI0_S: SPTEF Position                  */
#define SPI_S_SPMF_MASK                          (0x01UL << SPI_S_SPMF_SHIFT)                        /*!< SPI0_S: SPMF Mask                       */
#define SPI_S_SPMF_SHIFT                         6                                                   /*!< SPI0_S: SPMF Position                   */
#define SPI_S_SPRF_MASK                          (0x01UL << SPI_S_SPRF_SHIFT)                        /*!< SPI0_S: SPRF Mask                       */
#define SPI_S_SPRF_SHIFT                         7                                                   /*!< SPI0_S: SPRF Position                   */
/* ------- BR Bit Fields                            ------ */
#define SPI_BR_SPR_MASK                          (0x0FUL << SPI_BR_SPR_SHIFT)                        /*!< SPI0_BR: SPR Mask                       */
#define SPI_BR_SPR_SHIFT                         0                                                   /*!< SPI0_BR: SPR Position                   */
#define SPI_BR_SPR(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_BR_SPR_SHIFT))&SPI_BR_SPR_MASK) /*!< SPI0_BR                                 */
#define SPI_BR_SPPR_MASK                         (0x07UL << SPI_BR_SPPR_SHIFT)                       /*!< SPI0_BR: SPPR Mask                      */
#define SPI_BR_SPPR_SHIFT                        4                                                   /*!< SPI0_BR: SPPR Position                  */
#define SPI_BR_SPPR(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_BR_SPPR_SHIFT))&SPI_BR_SPPR_MASK) /*!< SPI0_BR                                 */
/* ------- C2 Bit Fields                            ------ */
#define SPI_C2_SPC0_MASK                         (0x01UL << SPI_C2_SPC0_SHIFT)                       /*!< SPI0_C2: SPC0 Mask                      */
#define SPI_C2_SPC0_SHIFT                        0                                                   /*!< SPI0_C2: SPC0 Position                  */
#define SPI_C2_SPISWAI_MASK                      (0x01UL << SPI_C2_SPISWAI_SHIFT)                    /*!< SPI0_C2: SPISWAI Mask                   */
#define SPI_C2_SPISWAI_SHIFT                     1                                                   /*!< SPI0_C2: SPISWAI Position               */
#define SPI_C2_BIDIROE_MASK                      (0x01UL << SPI_C2_BIDIROE_SHIFT)                    /*!< SPI0_C2: BIDIROE Mask                   */
#define SPI_C2_BIDIROE_SHIFT                     3                                                   /*!< SPI0_C2: BIDIROE Position               */
#define SPI_C2_MODFEN_MASK                       (0x01UL << SPI_C2_MODFEN_SHIFT)                     /*!< SPI0_C2: MODFEN Mask                    */
#define SPI_C2_MODFEN_SHIFT                      4                                                   /*!< SPI0_C2: MODFEN Position                */
#define SPI_C2_SPMIE_MASK                        (0x01UL << SPI_C2_SPMIE_SHIFT)                      /*!< SPI0_C2: SPMIE Mask                     */
#define SPI_C2_SPMIE_SHIFT                       7                                                   /*!< SPI0_C2: SPMIE Position                 */
/* ------- C1 Bit Fields                            ------ */
#define SPI_C1_LSBFE_MASK                        (0x01UL << SPI_C1_LSBFE_SHIFT)                      /*!< SPI0_C1: LSBFE Mask                     */
#define SPI_C1_LSBFE_SHIFT                       0                                                   /*!< SPI0_C1: LSBFE Position                 */
#define SPI_C1_SSOE_MASK                         (0x01UL << SPI_C1_SSOE_SHIFT)                       /*!< SPI0_C1: SSOE Mask                      */
#define SPI_C1_SSOE_SHIFT                        1                                                   /*!< SPI0_C1: SSOE Position                  */
#define SPI_C1_CPHA_MASK                         (0x01UL << SPI_C1_CPHA_SHIFT)                       /*!< SPI0_C1: CPHA Mask                      */
#define SPI_C1_CPHA_SHIFT                        2                                                   /*!< SPI0_C1: CPHA Position                  */
#define SPI_C1_CPOL_MASK                         (0x01UL << SPI_C1_CPOL_SHIFT)                       /*!< SPI0_C1: CPOL Mask                      */
#define SPI_C1_CPOL_SHIFT                        3                                                   /*!< SPI0_C1: CPOL Position                  */
#define SPI_C1_MSTR_MASK                         (0x01UL << SPI_C1_MSTR_SHIFT)                       /*!< SPI0_C1: MSTR Mask                      */
#define SPI_C1_MSTR_SHIFT                        4                                                   /*!< SPI0_C1: MSTR Position                  */
#define SPI_C1_SPTIE_MASK                        (0x01UL << SPI_C1_SPTIE_SHIFT)                      /*!< SPI0_C1: SPTIE Mask                     */
#define SPI_C1_SPTIE_SHIFT                       5                                                   /*!< SPI0_C1: SPTIE Position                 */
#define SPI_C1_SPE_MASK                          (0x01UL << SPI_C1_SPE_SHIFT)                        /*!< SPI0_C1: SPE Mask                       */
#define SPI_C1_SPE_SHIFT                         6                                                   /*!< SPI0_C1: SPE Position                   */
#define SPI_C1_SPIE_MASK                         (0x01UL << SPI_C1_SPIE_SHIFT)                       /*!< SPI0_C1: SPIE Mask                      */
#define SPI_C1_SPIE_SHIFT                        7                                                   /*!< SPI0_C1: SPIE Position                  */
/* ------- M Bit Fields                             ------ */
#define SPI_M_Bits_MASK                          (0xFFUL << SPI_M_Bits_SHIFT)                        /*!< SPI0_M: Bits Mask                       */
#define SPI_M_Bits_SHIFT                         0                                                   /*!< SPI0_M: Bits Position                   */
#define SPI_M_Bits(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_M_Bits_SHIFT))&SPI_M_Bits_MASK) /*!< SPI0_M                                  */
/* ------- D Bit Fields                             ------ */
#define SPI_D_Bits_MASK                          (0xFFUL << SPI_D_Bits_SHIFT)                        /*!< SPI0_D: Bits Mask                       */
#define SPI_D_Bits_SHIFT                         0                                                   /*!< SPI0_D: Bits Position                   */
#define SPI_D_Bits(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_D_Bits_SHIFT))&SPI_D_Bits_MASK) /*!< SPI0_D                                  */

/* SPI0 - Peripheral instance base addresses */
#define SPI0_BasePtr                   0x40076000UL
#define SPI0                           ((SPI_Type *) SPI0_BasePtr)
#define SPI0_BASE_PTR                  (SPI0)

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
/* ================           TPM0 (file:TPM0_2CH)                 ================ */
/* ================================================================================ */

/**
 * @brief Timer/PWM Module (2 channels)
 */
typedef struct {                                /*!<       TPM0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0010, 16)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /*!< 0010: Channel  Value                                               */
   } CONTROLS[2];
   __I  uint32_t  RESERVED0[13];                /*!< 001C:                                                              */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __I  uint32_t  RESERVED1[12];                /*!< 0054:                                                              */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
} TPM0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TPM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/* ------- SC Bit Fields                            ------ */
#define TPM_SC_PS_MASK                           (0x07UL << TPM_SC_PS_SHIFT)                         /*!< TPM0_SC: PS Mask                        */
#define TPM_SC_PS_SHIFT                          0                                                   /*!< TPM0_SC: PS Position                    */
#define TPM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x))<<TPM_SC_PS_SHIFT))&TPM_SC_PS_MASK) /*!< TPM0_SC                                 */
#define TPM_SC_CMOD_MASK                         (0x03UL << TPM_SC_CMOD_SHIFT)                       /*!< TPM0_SC: CMOD Mask                      */
#define TPM_SC_CMOD_SHIFT                        3                                                   /*!< TPM0_SC: CMOD Position                  */
#define TPM_SC_CMOD(x)                           (((uint32_t)(((uint32_t)(x))<<TPM_SC_CMOD_SHIFT))&TPM_SC_CMOD_MASK) /*!< TPM0_SC                                 */
#define TPM_SC_CPWMS_MASK                        (0x01UL << TPM_SC_CPWMS_SHIFT)                      /*!< TPM0_SC: CPWMS Mask                     */
#define TPM_SC_CPWMS_SHIFT                       5                                                   /*!< TPM0_SC: CPWMS Position                 */
#define TPM_SC_TOIE_MASK                         (0x01UL << TPM_SC_TOIE_SHIFT)                       /*!< TPM0_SC: TOIE Mask                      */
#define TPM_SC_TOIE_SHIFT                        6                                                   /*!< TPM0_SC: TOIE Position                  */
#define TPM_SC_TOF_MASK                          (0x01UL << TPM_SC_TOF_SHIFT)                        /*!< TPM0_SC: TOF Mask                       */
#define TPM_SC_TOF_SHIFT                         7                                                   /*!< TPM0_SC: TOF Position                   */
#define TPM_SC_DMA_MASK                          (0x01UL << TPM_SC_DMA_SHIFT)                        /*!< TPM0_SC: DMA Mask                       */
#define TPM_SC_DMA_SHIFT                         8                                                   /*!< TPM0_SC: DMA Position                   */
/* ------- CNT Bit Fields                           ------ */
#define TPM_CNT_COUNT_MASK                       (0xFFFFUL << TPM_CNT_COUNT_SHIFT)                   /*!< TPM0_CNT: COUNT Mask                    */
#define TPM_CNT_COUNT_SHIFT                      0                                                   /*!< TPM0_CNT: COUNT Position                */
#define TPM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x))<<TPM_CNT_COUNT_SHIFT))&TPM_CNT_COUNT_MASK) /*!< TPM0_CNT                                */
/* ------- MOD Bit Fields                           ------ */
#define TPM_MOD_MOD_MASK                         (0xFFFFUL << TPM_MOD_MOD_SHIFT)                     /*!< TPM0_MOD: MOD Mask                      */
#define TPM_MOD_MOD_SHIFT                        0                                                   /*!< TPM0_MOD: MOD Position                  */
#define TPM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<TPM_MOD_MOD_SHIFT))&TPM_MOD_MOD_MASK) /*!< TPM0_MOD                                */
/* ------- CnSC Bit Fields                          ------ */
#define TPM_CnSC_DMA_MASK                        (0x01UL << TPM_CnSC_DMA_SHIFT)                      /*!< TPM0_CnSC: DMA Mask                     */
#define TPM_CnSC_DMA_SHIFT                       0                                                   /*!< TPM0_CnSC: DMA Position                 */
#define TPM_CnSC_ELS_MASK                        (0x03UL << TPM_CnSC_ELS_SHIFT)                      /*!< TPM0_CnSC: ELS Mask                     */
#define TPM_CnSC_ELS_SHIFT                       2                                                   /*!< TPM0_CnSC: ELS Position                 */
#define TPM_CnSC_ELS(x)                          (((uint32_t)(((uint32_t)(x))<<TPM_CnSC_ELS_SHIFT))&TPM_CnSC_ELS_MASK) /*!< TPM0_CnSC                               */
#define TPM_CnSC_ELSA_MASK                       (0x01UL << TPM_CnSC_ELSA_SHIFT)                     /*!< TPM0_CnSC: ELSA Mask                    */
#define TPM_CnSC_ELSA_SHIFT                      2                                                   /*!< TPM0_CnSC: ELSA Position                */
#define TPM_CnSC_ELSB_MASK                       (0x01UL << TPM_CnSC_ELSB_SHIFT)                     /*!< TPM0_CnSC: ELSB Mask                    */
#define TPM_CnSC_ELSB_SHIFT                      3                                                   /*!< TPM0_CnSC: ELSB Position                */
#define TPM_CnSC_MS_MASK                         (0x03UL << TPM_CnSC_MS_SHIFT)                       /*!< TPM0_CnSC: MS Mask                      */
#define TPM_CnSC_MS_SHIFT                        4                                                   /*!< TPM0_CnSC: MS Position                  */
#define TPM_CnSC_MS(x)                           (((uint32_t)(((uint32_t)(x))<<TPM_CnSC_MS_SHIFT))&TPM_CnSC_MS_MASK) /*!< TPM0_CnSC                               */
#define TPM_CnSC_MSA_MASK                        (0x01UL << TPM_CnSC_MSA_SHIFT)                      /*!< TPM0_CnSC: MSA Mask                     */
#define TPM_CnSC_MSA_SHIFT                       4                                                   /*!< TPM0_CnSC: MSA Position                 */
#define TPM_CnSC_MSB_MASK                        (0x01UL << TPM_CnSC_MSB_SHIFT)                      /*!< TPM0_CnSC: MSB Mask                     */
#define TPM_CnSC_MSB_SHIFT                       5                                                   /*!< TPM0_CnSC: MSB Position                 */
#define TPM_CnSC_CHIE_MASK                       (0x01UL << TPM_CnSC_CHIE_SHIFT)                     /*!< TPM0_CnSC: CHIE Mask                    */
#define TPM_CnSC_CHIE_SHIFT                      6                                                   /*!< TPM0_CnSC: CHIE Position                */
#define TPM_CnSC_CHF_MASK                        (0x01UL << TPM_CnSC_CHF_SHIFT)                      /*!< TPM0_CnSC: CHF Mask                     */
#define TPM_CnSC_CHF_SHIFT                       7                                                   /*!< TPM0_CnSC: CHF Position                 */
/* ------- CnV Bit Fields                           ------ */
#define TPM_CnV_VAL_MASK                         (0xFFFFUL << TPM_CnV_VAL_SHIFT)                     /*!< TPM0_CnV: VAL Mask                      */
#define TPM_CnV_VAL_SHIFT                        0                                                   /*!< TPM0_CnV: VAL Position                  */
#define TPM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x))<<TPM_CnV_VAL_SHIFT))&TPM_CnV_VAL_MASK) /*!< TPM0_CnV                                */
/* ------- STATUS Bit Fields                        ------ */
#define TPM_STATUS_CH0F_MASK                     (0x01UL << TPM_STATUS_CH0F_SHIFT)                   /*!< TPM0_STATUS: CH0F Mask                  */
#define TPM_STATUS_CH0F_SHIFT                    0                                                   /*!< TPM0_STATUS: CH0F Position              */
#define TPM_STATUS_CH1F_MASK                     (0x01UL << TPM_STATUS_CH1F_SHIFT)                   /*!< TPM0_STATUS: CH1F Mask                  */
#define TPM_STATUS_CH1F_SHIFT                    1                                                   /*!< TPM0_STATUS: CH1F Position              */
#define TPM_STATUS_TOF_MASK                      (0x01UL << TPM_STATUS_TOF_SHIFT)                    /*!< TPM0_STATUS: TOF Mask                   */
#define TPM_STATUS_TOF_SHIFT                     8                                                   /*!< TPM0_STATUS: TOF Position               */
/* ------- CONF Bit Fields                          ------ */
#define TPM_CONF_DOZEEN_MASK                     (0x01UL << TPM_CONF_DOZEEN_SHIFT)                   /*!< TPM0_CONF: DOZEEN Mask                  */
#define TPM_CONF_DOZEEN_SHIFT                    5                                                   /*!< TPM0_CONF: DOZEEN Position              */
#define TPM_CONF_DBGMODE_MASK                    (0x03UL << TPM_CONF_DBGMODE_SHIFT)                  /*!< TPM0_CONF: DBGMODE Mask                 */
#define TPM_CONF_DBGMODE_SHIFT                   6                                                   /*!< TPM0_CONF: DBGMODE Position             */
#define TPM_CONF_DBGMODE(x)                      (((uint32_t)(((uint32_t)(x))<<TPM_CONF_DBGMODE_SHIFT))&TPM_CONF_DBGMODE_MASK) /*!< TPM0_CONF                               */
#define TPM_CONF_GTBEEN_MASK                     (0x01UL << TPM_CONF_GTBEEN_SHIFT)                   /*!< TPM0_CONF: GTBEEN Mask                  */
#define TPM_CONF_GTBEEN_SHIFT                    9                                                   /*!< TPM0_CONF: GTBEEN Position              */
#define TPM_CONF_CSOT_MASK                       (0x01UL << TPM_CONF_CSOT_SHIFT)                     /*!< TPM0_CONF: CSOT Mask                    */
#define TPM_CONF_CSOT_SHIFT                      16                                                  /*!< TPM0_CONF: CSOT Position                */
#define TPM_CONF_CSOO_MASK                       (0x01UL << TPM_CONF_CSOO_SHIFT)                     /*!< TPM0_CONF: CSOO Mask                    */
#define TPM_CONF_CSOO_SHIFT                      17                                                  /*!< TPM0_CONF: CSOO Position                */
#define TPM_CONF_CROT_MASK                       (0x01UL << TPM_CONF_CROT_SHIFT)                     /*!< TPM0_CONF: CROT Mask                    */
#define TPM_CONF_CROT_SHIFT                      18                                                  /*!< TPM0_CONF: CROT Position                */
#define TPM_CONF_TRGSEL_MASK                     (0x0FUL << TPM_CONF_TRGSEL_SHIFT)                   /*!< TPM0_CONF: TRGSEL Mask                  */
#define TPM_CONF_TRGSEL_SHIFT                    24                                                  /*!< TPM0_CONF: TRGSEL Position              */
#define TPM_CONF_TRGSEL(x)                       (((uint32_t)(((uint32_t)(x))<<TPM_CONF_TRGSEL_SHIFT))&TPM_CONF_TRGSEL_MASK) /*!< TPM0_CONF                               */

/* TPM0 - Peripheral instance base addresses */
#define TPM0_BasePtr                   0x40038000UL
#define TPM0                           ((TPM0_Type *) TPM0_BasePtr)
#define TPM0_BASE_PTR                  (TPM0)

/* ================================================================================ */
/* ================           TPM1 (derived from TPM0)             ================ */
/* ================================================================================ */

/**
 * @brief Timer/PWM Module (2 channels)
 */

/* TPM1 - Peripheral instance base addresses */
#define TPM1_BasePtr                   0x40039000UL
#define TPM1                           ((TPM0_Type *) TPM1_BasePtr)
#define TPM1_BASE_PTR                  (TPM1)
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


#endif  /* MCU_MKL03Z4 */

