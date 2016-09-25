/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Low-power Halloween decoration.
 */
#include "mcu.h"
#include "max44009.h"

ISR(TIM0_COMPA_vect) {
    PIN_OUT_HIGH(EYE0);
    PIN_OUT_HIGH(EYE1);
}

ISR(TIM0_COMPB_vect) {
    PIN_OUT_LOW(EYE0);
    PIN_OUT_LOW(EYE1);
}

int main() {
    cli();
    wdt_disable();
    PIN_INIT_OUTPUT(EYE0);
    PIN_INIT_OUTPUT(EYE1);
    PIN_INIT_OUTPUT(BSI_SDA);
    PIN_INIT_OUTPUT(BSI_SCL);
    PIN_OUT_HIGH(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    uint8_t lux = 0;
    // ~976 Hz
    TCCR0B |= (1 << CS01);
    OCR0A = 0x00;
    OCR0B = 0x0F;
    TIMSK0 |= (1 << OCIE0B) | (1 << OCIE0A);
    sei();
    while (1) 
    {
        max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_LUX_HIGH, &lux);
        max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_CONFIG, &lux);
        _delay_ms(1000);
    }
}

