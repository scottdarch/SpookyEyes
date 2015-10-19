#include <math.h>
#include <stdlib.h>
#include <avr/sleep.h>
#include <avr/wdt.h>

// +------------------------------------------------------------+
// | CONSTANTS
// +------------------------------------------------------------+
const float xmin = 1.57;
const float xmax = 7.85;
const float xminima = 4.71;
const float ymax = 127.5;
const float u = 0.01;
const int spookyPin = 0;
const int lightPin = A1; // pin 2=>A1, 3=>A3, 4=>A2

// +------------------------------------------------------------+

float x = xminima;
bool hide = false;

unsigned int sinusoidal(float inX) {
    return (unsigned int)round(sin(inX) * ymax + ymax);
}

void setup() {
    pinMode(spookyPin, OUTPUT);
    pinMode(lightPin, INPUT);
}

void loop() {
    analogWrite(spookyPin, sinusoidal(x));
    if (analogRead(lightPin) > 750) {
        //TODO: debounce
        x = xminima;
    } else if (!hide) {
        x += u;
        if (x > xmax) {
            x = xmin;
        } else if (x > xminima - u && x < xminima + u) {
            hide = false;
            if (rand() % 100 > 50) {
                // long sleep
                setup_watchdog(6);
                sleep_mode();
            } else {
                // short nap
                //delay(1000);
            }
        }
    } else if (rand() % 100 > 95) {
        hide = false;
    }
    delay(1);
}
