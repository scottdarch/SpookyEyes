/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Low-power Halloween decoration.
 */
#include "mcu.h"
#include "max44009.h"
#include <avr/io.h>
#include <avr/sleep.h>

static bool _descending = false;

ISR(TIM0_COMPA_vect) {
    PIN_OUT_HIGH(EYE0);
    PIN_OUT_HIGH(EYE1);
}

ISR(TIM0_COMPB_vect) {
    PIN_OUT_LOW(EYE0);
    PIN_OUT_LOW(EYE1);
}

ISR(INT0_vect) {
    
}

void configure_max44009() {
    // Mantissa (LM[7:4]): Four most significant bits of mantissa lower threshold
    // Exponent (LE[3:0]): Exponent bits lower threshold
    // Lower lux threshold = 2(exponent) x mantissa x 0.045
    // Exponent = 8xLE3 + 4xLE2 + 2xLE1 + LE0
    // Mantissa = 128xLM7 + 64xLM6 + 32xLM5 + 16xLM4
    static const uint8_t lower_threshold_lux = (2 << 4) | (1 << 0);
    // Time delay = (128xT7 + 64xT6 + 32xT5 + 16xT4 + 8xT3 + 4xT2 + 2xT1 + T0) x 100ms
    static const uint8_t thresh_timer = (1 << 0);
        
    PIN_OUT_HIGH(EYE0);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_INT_EN, 0x01)) {
    }
    PIN_OUT_LOW(EYE0);
    PIN_OUT_HIGH(EYE1);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_THRESH_LOW, lower_threshold_lux)) {
    }
    PIN_OUT_LOW(EYE1);
    PIN_OUT_HIGH(EYE0);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_THRESH_TIMER, thresh_timer)) {
    }
    PIN_OUT_LOW(EYE0);
}

static void reset_glowy_eyes() {
    TIMSK0 &= ~((1 << OCIE0B) | (1 << OCIE0A));
    _descending = false;
    OCR0A = 0x00;
    OCR0B = 0x00;
    PIN_OUT_LOW(EYE0);
    PIN_OUT_LOW(EYE1);
}

static void check_daylight_and_sleep() {
    uint8_t interrupt_status = 0;
    while(!max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_INT_STAT, &interrupt_status)) {
    }
    if (!interrupt_status) {
        // too bright. go to sleep.
        GIMSK |= (1 << INT0);
        sleep_enable();
        sleep_cpu();
        sleep_disable();
        GIMSK &= ~(1 << INT0);
    }
}

int main() {
    cli();
    wdt_disable();
    PIN_INIT_OUTPUT(EYE0);
    PIN_INIT_OUTPUT(EYE1);
    PIN_INIT_OUTPUT(BSI_SDA);
    PIN_INIT_OUTPUT(BSI_SCL);
    PIN_INIT_INPUT(LIGHT);
    PIN_OUT_HIGH(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    TCCR0B |= (1 << CS01);
    MCUCR |= (1 << SM1);
    reset_glowy_eyes();
    configure_max44009();
    sei();
    while (1) 
    {
        if (OCR0B == 0xFF) {
            PIN_OUT_HIGH(EYE0);
            PIN_OUT_HIGH(EYE1);
            OCR0B = 0xFE;
            _descending = true;
        } else if (OCR0B == 0) {
            reset_glowy_eyes();
            _delay_ms(500);
            check_daylight_and_sleep();
            TIMSK0 |= (1 << OCIE0B) | (1 << OCIE0A);
            OCR0B = 1;
        } else if (_descending) {
            OCR0B -= 1;
        } else {                        
            OCR0B += 1;
        }
        _delay_ms(4);   
    }
}

