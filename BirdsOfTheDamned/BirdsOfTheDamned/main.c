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

// +--[TYPES]-----------------------------------------------------------------+
enum WDTSleepTimeSeconds {
    WDTSLEEPTIME_2_S = 0,
    WDTSLEEPTIME_4_S = 1,
    WDTSLEEPTIME_8_S = 2,
};

// +--[ISRs]------------------------------------------------------------------+

ISR(TIM0_COMPA_vect) {
    PIN_OUT_HIGH(EYE0);
    PIN_OUT_HIGH(EYE1);
}

ISR(TIM0_COMPB_vect) {
    PIN_OUT_LOW(EYE0);
    PIN_OUT_LOW(EYE1);
}

EMPTY_INTERRUPT(INT0_vect);

EMPTY_INTERRUPT(WDT_vect);

// +--[DATA]------------------------------------------------------------------+

// Mantissa (LM[7:4]): Four most significant bits of mantissa lower threshold
// Exponent (LE[3:0]): Exponent bits lower threshold
// Lower lux threshold = 2(exponent) x mantissa x 0.045
// Exponent = 8xLE3 + 4xLE2 + 2xLE1 + LE0
// Mantissa = 128xLM7 + 64xLM6 + 32xLM5 + 16xLM4
static const uint8_t lower_threshold_lux = 0x1;

// Time delay = (128xT7 + 64xT6 + 32xT5 + 16xT4 + 8xT3 + 4xT2 + 2xT1 + T0) x 100ms
static const uint8_t thresh_timer = 30;

static bool _descending = false;

// +--[FUNCTIONS]-------------------------------------------------------------+

void configure_max44009() {
    
    PIN_OUT_HIGH(EYE0);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_CONFIG, 0x40)) {
    }
    PIN_OUT_LOW(EYE0);
    _delay_ms(500);

    PIN_OUT_HIGH(EYE1);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_THRESH_TIMER, thresh_timer)) {
    }
    PIN_OUT_LOW(EYE1);
    _delay_ms(500);
    
    PIN_OUT_HIGH(EYE0);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_THRESH_LOW, lower_threshold_lux)) {
    }
    PIN_OUT_LOW(EYE0);
    _delay_ms(500);
    
    PIN_OUT_HIGH(EYE1);
    while(!max_44009_write_to_register(MAX44009_ADDRESS, MAX44009_REG_INT_EN, 0x01)) {
    }
    PIN_OUT_LOW(EYE1);
}

static void reset_glowy_eyes() {
    TIMSK0 &= ~((1 << OCIE0B) | (1 << OCIE0A));
    _descending = false;
    OCR0A = 0x00;
    OCR0B = 0x00;
    PIN_OUT_LOW(EYE0);
    PIN_OUT_LOW(EYE1);
}

static void reset_interrupt() {
    uint8_t interrupt_status = 0;
    max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_INT_STAT, &interrupt_status);
}

static bool is_daylight() {
    uint8_t lux_low = 0;
    while(!max_44009_read_from_register(MAX44009_ADDRESS, MAX44009_REG_LUX_HIGH, &lux_low)) {
    }
    return (lux_low > lower_threshold_lux);
}

static void do_sleep() {
    sleep_enable();
    sleep_cpu();
    sleep_disable();
}

static void wdt_sleep(enum WDTSleepTimeSeconds wdtsleeptime_secs) {
    cli();
    WDTCR |= (1<<WDCE) | (1<<WDTIE);
    switch(wdtsleeptime_secs) {
        case WDTSLEEPTIME_2_S:
            WDTCR = (1<<WDTIE) | (1<<WDP2) | (1<<WDP1) | (1<<WDP0);
            break;
        case WDTSLEEPTIME_4_S:
            WDTCR = (1<<WDTIE) | (1<<WDP3);
            break;
        case WDTSLEEPTIME_8_S:
            WDTCR = (1<<WDTIE) | (1<<WDP3) | (1<<WDP0);
            break;
    }
    wdt_reset();
    WDTCR |= (1<<WDTIF);
    sei();
    do_sleep();
    cli();
    wdt_reset();
    MCUSR &= ~(1<<WDRF);
    WDTCR |= (1<<WDCE) | (1<<WDTIE);
    /* Turn off WDT */
    WDTCR = 0x00;
    sei();
}

// +--[MAIN]------------------------------------------------------------------+

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
    ACSR |= (1<<ACD);
    GIMSK &= ~(1 << INT0);
    
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    reset_glowy_eyes();
    configure_max44009();

    uint8_t event_count = 0;
    
    while (1)
    {
        if (OCR0B == 0) {
            // Done a veeery spoooky glowy fade.
            reset_glowy_eyes();
            sei();
            wdt_sleep(event_count);
            cli();
            if (event_count == 2) {
                event_count = 0;
            } else {
                event_count += 1;
            }
            if (is_daylight()) {
                // too bright. go to sleep.
                GIMSK |= (1 << INT0);
                while (is_daylight()) {
                    reset_interrupt();
                    sei();
                    do_sleep();
                    cli();
                }
                GIMSK &= ~(1 << INT0);
            }
            OCR0B = 1;
            TIMSK0 |= (1 << OCIE0B) | (1 << OCIE0A);
        } else if (OCR0B == 0xFF) {
            // At the top of the duty cycle. Now start dimming.
            OCR0B = 0xFE;
            _descending = true;
        } else if (_descending) {
            OCR0B -= 1;
        } else {
            OCR0B += 1;
        }
        // We're running a really slow clock compared to our
        // PWM timing so we've missed enough interrupts just
        // in the few branches we did above to be noticeable
        // to the human eye. Manually reset the LEDs before
        // again turning on the timers to run PWM.
        if (TCNT0 > OCR0B) {
            PIN_OUT_LOW(EYE0);
            PIN_OUT_LOW(EYE1);
        } else {
            PIN_OUT_HIGH(EYE0);
            PIN_OUT_HIGH(EYE1);
        }
        sei();
        _delay_ms(7);
        cli();
    }        
}

