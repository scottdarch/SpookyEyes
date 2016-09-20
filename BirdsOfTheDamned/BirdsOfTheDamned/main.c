/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Low-power Halloween decoration.
 */
#include "mcu.h"
#include "max44009.h"

int main() {
    PIN_INIT_OUTPUT(EYES);
    PIN_INIT_OUTPUT(BSI_SDA);
    PIN_INIT_OUTPUT(BSI_SCL);
    PIN_OUT_HIGH(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    PIN_OUT_LOW(EYES);
        
    uint8_t lux = 0;
    while (1) 
    {
        max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_LUX_HIGH, &lux);
        max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_CONFIG, &lux);
        PIN_OUT_TOGGLE(EYES);
        _delay_ms(1000);
    }
}

