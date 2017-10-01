//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include "InitDevice.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library includes]
#include "em_system.h"
#include "em_emu.h"
#include "em_cmu.h"
#include "em_device.h"
#include "em_chip.h"
#include "em_assert.h"
#include "em_adc.h"
#include "em_gpio.h"
#include "em_i2c.h"
#include "em_rtc.h"
#include "em_timer.h"
#include "em_wdog.h"
// [Library includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void enter_DefaultMode_from_RESET(void) {
    // $[Config Calls]
    CMU_enter_DefaultMode_from_RESET();
    ADC0_enter_DefaultMode_from_RESET();
    RTC_enter_DefaultMode_from_RESET();
    WDOG_enter_DefaultMode_from_RESET();
    I2C0_enter_DefaultMode_from_RESET();
    TIMER0_enter_DefaultMode_from_RESET();
    PORTIO_enter_DefaultMode_from_RESET();
    // [Config Calls]$

}

//================================================================================
// HFXO_enter_DefaultMode_from_RESET
//================================================================================
extern void HFXO_enter_DefaultMode_from_RESET(void) {

    // $[HFXO]
    // [HFXO]$

}

//================================================================================
// LFXO_enter_DefaultMode_from_RESET
//================================================================================
extern void LFXO_enter_DefaultMode_from_RESET(void) {

    // $[Use oscillator source]
    // [Use oscillator source]$

    // $[LFXO Boost Percent]
    // [LFXO Boost Percent]$

    // $[REDLFXO Boost]
    // [REDLFXO Boost]$

}

//================================================================================
// CMU_enter_DefaultMode_from_RESET
//================================================================================
extern void CMU_enter_DefaultMode_from_RESET(void) {

    // $[LFXO enable]
    // [LFXO enable]$

    // $[HFXO enable]
    // [HFXO enable]$

    // $[LFACLK Setup]
    /* Enable LFRCO oscillator */
    CMU_OscillatorEnable(cmuOsc_LFRCO, true, true);

    /* Select LFRCO as clock source for LFACLK */
    CMU_ClockSelectSet(cmuClock_LFA, cmuSelect_LFRCO);

    // [LFACLK Setup]$

    // $[High Frequency Clock select]
    /* Using HFRCO at 14MHz as high frequency clock, HFCLK */
    CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFRCO);

    /* Enable peripheral clock */
    CMU_ClockEnable(cmuClock_HFPER, true);

    // [High Frequency Clock select]$

    // $[LF clock tree setup]
    /* Enable LF clocks */
    CMU_ClockEnable(cmuClock_CORELE, true);
    CMU_ClockSelectSet(cmuClock_LFA, cmuSelect_LFRCO);
    // [LF clock tree setup]$
    // $[Peripheral Clock enables]
    /* Enable clock for ADC0 */
    CMU_ClockEnable(cmuClock_ADC0, true);

    /* Enable clock for I2C0 */
    CMU_ClockEnable(cmuClock_I2C0, true);

    /* Enable clock for RTC */
    CMU_ClockEnable(cmuClock_RTC, true);

    /* Enable clock for TIMER0 */
    CMU_ClockEnable(cmuClock_TIMER0, true);

    /* Enable clock for GPIO by default */
    CMU_ClockEnable(cmuClock_GPIO, true);

    // [Peripheral Clock enables]$

}

//================================================================================
// ADC0_enter_DefaultMode_from_RESET
//================================================================================
extern void ADC0_enter_DefaultMode_from_RESET(void) {

    // $[ADC_Init]
    ADC_Init_TypeDef init = ADC_INIT_DEFAULT;

    init.ovsRateSel = adcOvsRateSel2;
    init.lpfMode = adcLPFilterBypass;
    init.warmUpMode = adcWarmupNormal;
    init.timebase = ADC_TimebaseCalc(0);
    init.prescale = ADC_PrescaleCalc(7000000, 0);
    init.tailgate = 0;

    ADC_Init(ADC0, &init);
    // [ADC_Init]$

    // $[ADC_InitSingle]
    // [ADC_InitSingle]$

    // $[ADC_InitScan]
    // [ADC_InitScan]$

}

//================================================================================
// ACMP0_enter_DefaultMode_from_RESET
//================================================================================
extern void ACMP0_enter_DefaultMode_from_RESET(void) {

    // $[ACMP Initialization]
    // [ACMP Initialization]$

    // $[ACMP Channel config]
    // [ACMP Channel config]$

}

//================================================================================
// IDAC0_enter_DefaultMode_from_RESET
//================================================================================
extern void IDAC0_enter_DefaultMode_from_RESET(void) {

    // $[IDAC Initialization]
    // [IDAC Initialization]$

    // $[IDAC optional configurations]
    // [IDAC optional configurations]$

    // $[IDAC enable]
    // [IDAC enable]$

}

//================================================================================
// RTC_enter_DefaultMode_from_RESET
//================================================================================
extern void RTC_enter_DefaultMode_from_RESET(void) {

    // $[RTC_Init]
    RTC_Init_TypeDef init = RTC_INIT_DEFAULT;

    init.debugRun = 1;
    init.comp0Top = 1;

    RTC_Init(&init);
    // [RTC_Init]$

}

//================================================================================
// USART1_enter_DefaultMode_from_RESET
//================================================================================
extern void USART1_enter_DefaultMode_from_RESET(void) {

    // $[USART_InitAsync]
    // [USART_InitAsync]$

    // $[USART_InitSync]
    // [USART_InitSync]$

    // $[USART_InitPrsTrigger]
    // [USART_InitPrsTrigger]$

}

//================================================================================
// LEUART0_enter_DefaultMode_from_RESET
//================================================================================
extern void LEUART0_enter_DefaultMode_from_RESET(void) {

    // $[LEUART0 initialization]
    // [LEUART0 initialization]$

}

//================================================================================
// VCMP_enter_DefaultMode_from_RESET
//================================================================================
extern void VCMP_enter_DefaultMode_from_RESET(void) {

    // $[VCMP_Init]
    // [VCMP_Init]$

}

//================================================================================
// WDOG_enter_DefaultMode_from_RESET
//================================================================================
extern void WDOG_enter_DefaultMode_from_RESET(void) {

    // $[CMU_ClockEnable]
    /* Enable LE clock for CPU access to BURTC registers */
    CMU_ClockEnable(cmuClock_CORELE, true);
    // [CMU_ClockEnable]$

    // $[CMU_OscillatorEnable]
    CMU_OscillatorEnable(cmuOsc_LFRCO, true, true);
    // [CMU_OscillatorEnable]$

    // $[WDOG_Init]
    WDOG_Init_TypeDef watchdogInit = WDOG_INIT_DEFAULT;

    watchdogInit.debugRun = 0;
    watchdogInit.clkSel = wdogClkSelULFRCO;
    watchdogInit.perSel = wdogPeriod_8k;
    watchdogInit.swoscBlock = 0;
    watchdogInit.em4Block = 0;
    watchdogInit.lock = 0;
    watchdogInit.em3Run = 0;
    watchdogInit.em2Run = 0;
    WDOG_Init(&watchdogInit);
    // [WDOG_Init]$

}

//================================================================================
// I2C0_enter_DefaultMode_from_RESET
//================================================================================
extern void I2C0_enter_DefaultMode_from_RESET(void) {

    // $[I2C0 initialization]
    I2C_Init_TypeDef init = I2C_INIT_DEFAULT;

    init.enable = 1;
    init.master = 1;
    init.freq = I2C_FREQ_STANDARD_MAX;
    init.clhr = i2cClockHLRStandard;
    I2C_Init(I2C0, &init);
    // [I2C0 initialization]$

}

//================================================================================
// TIMER0_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER0_enter_DefaultMode_from_RESET(void) {

    // $[TIMER0 initialization]
    TIMER_Init_TypeDef init = TIMER_INIT_DEFAULT;

    init.enable = 1;
    init.debugRun = 0;
    init.dmaClrAct = 0;
    init.sync = 0;
    init.clkSel = timerClkSelHFPerClk;
    init.prescale = timerPrescale1;
    init.fallAction = timerInputActionNone;
    init.riseAction = timerInputActionNone;
    init.mode = timerModeUp;
    init.quadModeX4 = 0;
    init.oneShot = 0;
    init.count2x = 0;
    init.ati = 0;
    TIMER_Init(TIMER0, &init);
    // [TIMER0 initialization]$

    // $[TIMER0 CC0 init]
    TIMER_InitCC_TypeDef initCC0 = TIMER_INITCC_DEFAULT;

    initCC0.prsInput = false;
    initCC0.prsSel = timerPRSSELCh0;
    initCC0.edge = timerEdgeRising;
    initCC0.mode = timerCCModePWM;
    initCC0.eventCtrl = timerEventEveryEdge;
    initCC0.filter = 0;
    initCC0.cofoa = timerOutputActionSet;
    initCC0.cufoa = timerOutputActionNone;
    initCC0.cmoa = timerOutputActionClear;
    initCC0.coist = 0;
    initCC0.outInvert = 1;
    TIMER_InitCC(TIMER0, 0, &initCC0);
    // [TIMER0 CC0 init]$

    // $[TIMER0 CC1 init]
    TIMER_InitCC_TypeDef initCC1 = TIMER_INITCC_DEFAULT;

    initCC1.prsInput = false;
    initCC1.prsSel = timerPRSSELCh0;
    initCC1.edge = timerEdgeRising;
    initCC1.mode = timerCCModePWM;
    initCC1.eventCtrl = timerEventEveryEdge;
    initCC1.filter = 0;
    initCC1.cofoa = timerOutputActionSet;
    initCC1.cufoa = timerOutputActionNone;
    initCC1.cmoa = timerOutputActionClear;
    initCC1.coist = 0;
    initCC1.outInvert = 1;
    TIMER_InitCC(TIMER0, 1, &initCC1);
    // [TIMER0 CC1 init]$

    // $[TIMER0 CC2 init]
    TIMER_InitCC_TypeDef initCC2 = TIMER_INITCC_DEFAULT;

    initCC2.prsInput = false;
    initCC2.prsSel = timerPRSSELCh0;
    initCC2.edge = timerEdgeRising;
    initCC2.mode = timerCCModeOff;
    initCC2.eventCtrl = timerEventEveryEdge;
    initCC2.filter = 0;
    initCC2.cofoa = timerOutputActionNone;
    initCC2.cufoa = timerOutputActionNone;
    initCC2.cmoa = timerOutputActionNone;
    initCC2.coist = 0;
    initCC2.outInvert = 0;
    TIMER_InitCC(TIMER0, 2, &initCC2);
    // [TIMER0 CC2 init]$

}

//================================================================================
// TIMER1_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER1_enter_DefaultMode_from_RESET(void) {

    // $[TIMER1 initialization]
    // [TIMER1 initialization]$

    // $[TIMER1 CC0 init]
    // [TIMER1 CC0 init]$

    // $[TIMER1 CC1 init]
    // [TIMER1 CC1 init]$

    // $[TIMER1 CC2 init]
    // [TIMER1 CC2 init]$

}

//================================================================================
// PCNT0_enter_DefaultMode_from_RESET
//================================================================================
extern void PCNT0_enter_DefaultMode_from_RESET(void) {

    // $[PCNT0 initialization]
    // [PCNT0 initialization]$

}

//================================================================================
// PRS_enter_DefaultMode_from_RESET
//================================================================================
extern void PRS_enter_DefaultMode_from_RESET(void) {

    // $[PRS initialization]
    // [PRS initialization]$

}

//================================================================================
// PORTIO_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTIO_enter_DefaultMode_from_RESET(void) {

    // $[Port A Configuration]

    /* Pin PA0 is configured to Push-pull */
    GPIO->P[0].DOUT |= (1 << 0);
    GPIO->P[0].MODEL = (GPIO->P[0].MODEL & ~_GPIO_P_MODEL_MODE0_MASK)
            | GPIO_P_MODEL_MODE0_PUSHPULL;
    // [Port A Configuration]$

    // $[Port B Configuration]

    /* Pin PB7 is configured to Push-pull with alt. drive strength */
    GPIO->P[1].MODEL = (GPIO->P[1].MODEL & ~_GPIO_P_MODEL_MODE7_MASK)
            | GPIO_P_MODEL_MODE7_PUSHPULLDRIVE;
    // [Port B Configuration]$

    // $[Port C Configuration]

    /* Pin PC0 is configured to Push-pull */
    GPIO->P[2].DOUT |= (1 << 0);
    GPIO->P[2].MODEL = (GPIO->P[2].MODEL & ~_GPIO_P_MODEL_MODE0_MASK)
            | GPIO_P_MODEL_MODE0_PUSHPULL;
    // [Port C Configuration]$

    // $[Port D Configuration]
    // [Port D Configuration]$

    // $[Port E Configuration]

    /* Pin PE12 is configured to Open-drain with pull-up and filter */
    GPIO->P[4].MODEH = (GPIO->P[4].MODEH & ~_GPIO_P_MODEH_MODE12_MASK)
            | GPIO_P_MODEH_MODE12_WIREDANDPULLUPFILTER;

    /* Pin PE13 is configured to Open-drain with pull-up and filter */
    GPIO->P[4].MODEH = (GPIO->P[4].MODEH & ~_GPIO_P_MODEH_MODE13_MASK)
            | GPIO_P_MODEH_MODE13_WIREDANDPULLUPFILTER;
    // [Port E Configuration]$

    // $[Port F Configuration]

    /* Pin PF2 is configured to Input enabled with pull-up and filter */
    GPIO->P[5].DOUT |= (1 << 2);
    GPIO->P[5].MODEL = (GPIO->P[5].MODEL & ~_GPIO_P_MODEL_MODE2_MASK)
            | GPIO_P_MODEL_MODE2_INPUTPULLFILTER;
    // [Port F Configuration]$

    // $[Route Configuration]

    /* Module I2C0 is configured to location 6 */
    I2C0->ROUTE = (I2C0->ROUTE & ~_I2C_ROUTE_LOCATION_MASK)
            | I2C_ROUTE_LOCATION_LOC6;

    /* Enable signals SCL, SDA */
    I2C0->ROUTE |= I2C_ROUTE_SCLPEN | I2C_ROUTE_SDAPEN;

    /* Module TIMER0 is configured to location 4 */
    TIMER0->ROUTE = (TIMER0->ROUTE & ~_TIMER_ROUTE_LOCATION_MASK)
            | TIMER_ROUTE_LOCATION_LOC4;

    /* Enable signals CC0, CC1 */
    TIMER0->ROUTE |= TIMER_ROUTE_CC0PEN | TIMER_ROUTE_CC1PEN;
    // [Route Configuration]$

}

