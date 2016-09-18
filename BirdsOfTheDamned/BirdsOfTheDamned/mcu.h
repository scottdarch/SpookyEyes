/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 */
#pragma once

#ifndef __AVR_ATtiny13__
#define __AVR_ATtiny13__
#endif

#define F_CPU 600000UL
#define F_CPU_KHZ (F_CPU / 1000)

#include <stdbool.h>
#include <stdint.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/atomic.h>
#include <util/delay.h>

// IO HELPERS
#define PIN_INIT_OUTPUT(NAME) PIN_##NAME##_DDRx |= (1 << PIN_##NAME##_DDRxn)
#define PIN_INIT_INPUT(NAME, PULLUP) PIN_##NAME##_DDRx &= ~(1 << PIN_##NAME##_DDRxn); \
if (PULLUP) { \
    PIN_##NAME##_PORTx |= (1 << PIN_##NAME##_PORTxn); \
} else {\
    PIN_##NAME##_PORTx &= ~(1 << PIN_##NAME##_PORTxn); \
}

#define PIN_DISABLE_PULLUP(NAME) PIN_##NAME##_PORTx &= ~(1 << PIN_##NAME##_PORTxn)
#define PIN_OUT_HIGH(NAME) PIN_##NAME##_PORTx |= (1 << PIN_##NAME##_PORTxn)
#define PIN_OUT_LOW(NAME) PIN_##NAME##_PORTx &= ~(1 << PIN_##NAME##_PORTxn)
#define PIN_OUT_TOGGLE(NAME) PIN_##NAME##_PORTx ^= (1 << PIN_##NAME##_PORTxn)
#define PIN_OUT_SET(NAME, HILO) if (HILO) { \
    PIN_OUT_HIGH(NAME); \
} else {\
    PIN_OUT_LOW(NAME); \
}

#define PIN_IN_IS_HIGH(NAME) (PIN_##NAME##_PINx & (1 << PIN_##NAME##_PINxn))

//               +---+
//    |RESET,PB5 |   | VCC
//       SDA,PB3 |   | PB2,T0,EYES
//       SCL,PB4 |   | PB1,INT0,LIGHT
//           GND |   | PB0
//               +---+

// +--[LIGHT LEVEL INTERRUPT]-------------------------------------------------+
#define PIN_EYES_PORTx PORTB
#define PIN_EYES_PORTxn PB2
#define PIN_EYES_DDRx DDRB
#define PIN_EYES_DDRxn DDB2

// +--[LIGHT LEVEL INTERRUPT]-------------------------------------------------+
#define PIN_LIGHT_PORTx PORTB
#define PIN_LIGHT_PORTxn PB1
#define PIN_LIGHT_DDRx DDRB
#define PIN_LIGHT_DDRxn DDB1
#define PIN_LIGHT_PINx PINB
#define PIN_LIGHT_PINxn PINB1

// +--[BSI]-------------------------------------------------------------------+
#define PIN_BSI_SDA_PORTx PORTB
#define PIN_BSI_SDA_PORTxn PB3
#define PIN_BSI_SDA_DDRx DDRB
#define PIN_BSI_SDA_DDRxn DDB3
#define PIN_BSI_SDA_PINx PINB
#define PIN_BSI_SDA_PINxn PINB3

#define PIN_BSI_SCL_PORTx PORTB
#define PIN_BSI_SCL_PORTxn PB4
#define PIN_BSI_SCL_DDRx DDRB
#define PIN_BSI_SCL_DDRxn DDB4
