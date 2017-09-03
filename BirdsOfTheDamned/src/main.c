#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_i2c.h"
#include "InitDevice.h"

// +--------------------------------------------------------------------------+
// | I2C DEFINITIONS
// +--------------------------------------------------------------------------+
// A0@GND
#define MAX44009_ADDRESS 0x4A
// A0@VCC
//#define MAX44009_ADDRESS 0x4B

#define MAX44009_REG_INT_STAT 0x00
#define MAX44009_REG_INT_EN 0x1
#define MAX44009_REG_CONFIG 0x2
#define MAX44009_REG_LUX_HIGH 0x3
#define MAX44009_REG_LUX_LOW 0x4
#define MAX44009_REG_THRESH_HIGH 0x5
#define MAX44009_REG_THRESH_LOW 0x6
#define MAX44009_REG_THRESH_TIMER 0x7

#define BUFFERLEN_0 16
#define BUFFERLEN_1 16

uint8_t buffer0[BUFFERLEN_0] = { 0 };
uint8_t buffer1[BUFFERLEN_1] = { 0 };

static volatile uint32_t msTicks; /* counts 1ms timeTicks */

static void Delay(uint32_t dlyTicks);

/***************************************************************************//**
 * @brief SysTick_Handler
 * Interrupt Service Routine for system tick counter
 ******************************************************************************/
void SysTick_Handler(void) {
    msTicks++; /* increment counter necessary in Delay()*/
}

/***************************************************************************//**
 * @brief Delays number of msTick Systicks (typically 1 ms)
 * @param dlyTicks Number of ticks to delay
 ******************************************************************************/
static void Delay(uint32_t dlyTicks) {
    uint32_t curTicks;

    curTicks = msTicks;
    while ((msTicks - curTicks) < dlyTicks)
        ;
}

int main(void) {
    /* Chip errata */
    CHIP_Init();

    enter_DefaultMode_from_RESET();

    /* Setup SysTick Timer for 1 msec interrupts  */
    if (SysTick_Config(CMU_ClockFreqGet(cmuClock_CORE) / 1000)) {
        while (1)
            ;
    }

    buffer0[0] = MAX44009_REG_INT_STAT;
    I2C_TransferSeq_TypeDef transfer = { .addr = MAX44009_ADDRESS, .flags =
            I2C_FLAG_WRITE_READ, .buf = { { buffer0, 1 }, { buffer1, 1 }, } };

    while (1) {
        GPIO_PinOutSet(LED0_PORT, LED0_PIN);
        Delay(200);
        I2C_TransferReturn_TypeDef result = I2C_TransferInit(I2C0, &transfer);

        while (result == i2cTransferInProgress) {
            GPIO_PinOutSet(LED1_PORT, LED1_PIN);
            result = I2C_Transfer(I2C0);
            GPIO_PinOutClear(LED1_PORT, LED1_PIN);
        }
        GPIO_PinOutClear(LED0_PORT, LED0_PIN);
        Delay(250);
    }
}
