/**
 * SpookyEyes O O
 *             `
 * ----------------------------------------------------------------------------
 * Runs an ATTiny's PWM output in a sinusoidal loop suitable for creating
 * spooky looking glowy eyes (SpoooOOOOoookyyyyyy!).
 */

#include <math.h>
#include <stdlib.h>
#include <avr/sleep.h>
#include <avr/wdt.h>

// +--------------------------------------------------------------------------+
// | CONSTANTS
// +--------------------------------------------------------------------------+
const float xmin = 1.57;
const float xmax = 7.85;
const float xminima = 4.71;
const float ymax = 127.5;
const float u = 0.01;
const int spookyPin = 0;
const int lightPin = A3; // pin 2=>A1, 3=>A3, 4=>A2
const int daylight = 1000;
const int daylightReadingThreashold = 5;
const int fadeDelay = 10;
int gDaylightReadings = 0;

#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

// Variables for the Sleep/power down modes:
volatile boolean f_wdt = 1;

// +--------------------------------------------------------------------------+

float x = xminima;

unsigned int sinusoidal(float inX) {
    return (unsigned int)round(sin(inX) * ymax + ymax);
}

void checkDayLight() {
    int samples = 0;
    int daylightCount = 0;
    while (samples++ < daylightReadingThreashold) {
        if (analogRead(lightPin) >= daylight) {
            ++daylightCount;
        }
        delay(1);
    }
    if (daylightCount >= (daylightReadingThreashold / 2)) {
        if (gDaylightReadings < (daylightReadingThreashold)) {
            ++gDaylightReadings;
        }
    } else if (gDaylightReadings > 0) {
        --gDaylightReadings;
    }
}

void setup() {
    pinMode(spookyPin, OUTPUT);
    pinMode(lightPin, INPUT);
}

void loop() {

    if (gDaylightReadings >= daylightReadingThreashold) {
        x = xminima;
        analogWrite(spookyPin, sinusoidal(x));
        setup_watchdog(9);
        checkDayLight();
    } else {
        x += u;
        if (x > xmax) {
            x = xmin;
            analogWrite(spookyPin, sinusoidal(x));
            delay(fadeDelay);
        } else if (x > xminima - u && x < xminima + u) {

            x = xminima;
            analogWrite(spookyPin, sinusoidal(x));

            checkDayLight();

            if (rand() % 100 > 50) {
                // long sleep
                setup_watchdog(9);
                system_sleep();
            } else {
                // short nap
                setup_watchdog(6);
                system_sleep();
            }
        } else {
            analogWrite(spookyPin, sinusoidal(x));
            delay(fadeDelay);
        }
    }
}

// +--------------------------------------------------------------------------+
// | Take from public domain:
// |
// http://interface.khm.de/index.php/lab/interfaces-advanced/sleep_watchdog_battery
// +--------------------------------------------------------------------------+
// set system into the sleep state
// system wakes up when watchdog is timed out
void system_sleep() {

    cbi(ADCSRA, ADEN); // switch Analog to Digitalconverter OFF

    set_sleep_mode(SLEEP_MODE_PWR_DOWN); // sleep mode is set here
    sleep_enable();

    sleep_mode(); // System sleeps here

    sleep_disable(); // System continues execution here when watchdog timed out
    sbi(ADCSRA, ADEN); // switch Analog to Digitalconverter ON
}

// 0=16ms, 1=32ms,2=64ms,3=128ms,4=250ms,5=500ms
// 6=1 sec,7=2 sec, 8=4 sec, 9= 8sec
void setup_watchdog(int ii) {

    byte bb;
    int ww;
    if (ii > 9)
        ii = 9;
    bb = ii & 7;
    if (ii > 7)
        bb |= (1 << 5);
    bb |= (1 << WDCE);
    ww = bb;

    MCUSR &= ~(1 << WDRF);
    // start timed sequence
    WDTCR |= (1 << WDCE) | (1 << WDE);
    // set new watchdog timeout value
    WDTCR = bb;
    WDTCR |= _BV(WDIE);
}

// Watchdog Interrupt Service / is executed when watchdog timed out
ISR(WDT_vect) {
    f_wdt = 1; // set global flag
}
