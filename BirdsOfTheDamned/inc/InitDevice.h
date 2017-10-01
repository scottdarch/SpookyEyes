//=========================================================
// inc/InitDevice.h: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================
#ifndef __INIT_DEVICE_H__
#define __INIT_DEVICE_H__

// USER CONSTANTS
// USER PROTOTYPES

// $[Mode Transition Prototypes]
extern void enter_DefaultMode_from_RESET(void);
// [Mode Transition Prototypes]$

// $[Config(Per-Module Mode)Transition Prototypes]
extern void HFXO_enter_DefaultMode_from_RESET(void);
extern void LFXO_enter_DefaultMode_from_RESET(void);
extern void CMU_enter_DefaultMode_from_RESET(void);
extern void ADC0_enter_DefaultMode_from_RESET(void);
extern void ACMP0_enter_DefaultMode_from_RESET(void);
extern void IDAC0_enter_DefaultMode_from_RESET(void);
extern void RTC_enter_DefaultMode_from_RESET(void);
extern void USART1_enter_DefaultMode_from_RESET(void);
extern void LEUART0_enter_DefaultMode_from_RESET(void);
extern void VCMP_enter_DefaultMode_from_RESET(void);
extern void WDOG_enter_DefaultMode_from_RESET(void);
extern void I2C0_enter_DefaultMode_from_RESET(void);
extern void TIMER0_enter_DefaultMode_from_RESET(void);
extern void TIMER1_enter_DefaultMode_from_RESET(void);
extern void PCNT0_enter_DefaultMode_from_RESET(void);
extern void PRS_enter_DefaultMode_from_RESET(void);
extern void PORTIO_enter_DefaultMode_from_RESET(void);
// [Config(Per-Module Mode)Transition Prototypes]$

// $[User-defined pin name abstraction]

#define ADC0_CH6_PIN            (6)
#define ADC0_CH6_PORT           (gpioPortD)

#define ADJ_PIN                 (6)
#define ADJ_PORT                (gpioPortD)

#define ADJ_PWR_PIN             (11)
#define ADJ_PWR_PORT            (gpioPortB)

#define EYE_L_PIN               (0)
#define EYE_L_PORT              (gpioPortA)

#define EYE_R_PIN               (0)
#define EYE_R_PORT              (gpioPortC)

#define GPIO_EM4WU4_PIN         (2)
#define GPIO_EM4WU4_PORT        (gpioPortF)

#define I2C0_SCL_PIN            (13)
#define I2C0_SCL_PORT           (gpioPortE)

#define I2C0_SDA_PIN            (12)
#define I2C0_SDA_PORT           (gpioPortE)

#define LED0_PIN                (10)
#define LED0_PORT               (gpioPortC)

#define LED1_PIN                (11)
#define LED1_PORT               (gpioPortC)

#define TIMER0_CC0_PIN          (0)
#define TIMER0_CC0_PORT         (gpioPortA)

#define TIMER0_CC1_PIN          (0)
#define TIMER0_CC1_PORT         (gpioPortC)

#define WAKE_PIN                (2)
#define WAKE_PORT               (gpioPortF)

// [User-defined pin name abstraction]$

#endif

