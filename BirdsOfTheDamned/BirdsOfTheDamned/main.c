/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Low-power Halloween decoration.
 */
#include "mcu.h"
#include "BSI.h"

BSI_I2C_Driver _als;

int main() {
    PIN_INIT_OUTPUT(EYES);
    PIN_INIT_OUTPUT(BSI_SDA);
    PIN_INIT_OUTPUT(BSI_SCL);
    PIN_OUT_HIGH(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    PIN_OUT_LOW(EYES);
        
    init_peripheral(&_als, 0x4A);
    const uint8_t lux_reg = 0x03;
    uint16_t lux_val;
    while (1) 
    {
        if (SEND_MESSAGE_UNCHECKED(service, &_als)) {
            SEND_MESSAGE_UNCHECKED(write_job, &_als, &lux_reg, 1);
            SEND_MESSAGE_UNCHECKED(read_job, &_als, (uint8_t*)&lux_val, 2);
        } else {
            SEND_MESSAGE_UNCHECKED(service, &_als);
        }
        PIN_OUT_TOGGLE(EYES);
        _delay_ms(1000);
    }
}

