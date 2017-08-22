/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 */
#pragma once

#define F_CPU 128000UL
#define F_CPU_KHZ (F_CPU / 1000)

#include <stdbool.h>
#include <stdint.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <util/atomic.h>
#include <util/delay.h>

// IO HELPERS
#define PIN_INIT_OUTPUT(NAME) PIN_##NAME##_DDRx |= (1 << PIN_##NAME##_DDRxn)
#define PIN_INIT_INPUT(NAME) PIN_##NAME##_DDRx &= ~(1 << PIN_##NAME##_DDRxn)
#define PIN_INIT_INPUT_WITH_PULLUP(NAME) PIN_##NAME##_DDRx &= ~(1 << PIN_##NAME##_DDRxn); \
PIN_##NAME##_PORTx |= (1 << PIN_##NAME##_PORTxn)

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
//      EYE0,PB3 |   | PB2,SCK
//      EYE1,PB4 |   | PB1,INT0
//           GND |   | PB0,SDA
//               +---+

#define PIN_SWITCH_TO_INPUT_WITH_PULLUP(NAME) MCUCR |= (1 << PUD); \
PIN_OUT_HIGH(NAME); \
PIN_INIT_INPUT(NAME); \
MCUCR &= ~(1 << PUD)

#define PIN_SWITCH_TO_OUTPUT_FROM_PULLUP(NAME) MCUCR |= (1 << PUD); \
PIN_OUT_LOW(NAME); \
PIN_INIT_OUTPUT(NAME); \
MCUCR &= ~(1 << PUD)

#define PIN_SWITCH_TO_INPUT(NAME) MCUCR |= (1 << PUD); \
PIN_OUT_LOW(NAME); \
PIN_INIT_INPUT(NAME); \
MCUCR &= ~(1 << PUD)

// +--[SPOOKY EYES]-----------------------------------------------------------+
#define PIN_EYE0_PORTx PORTB
#define PIN_EYE0_PORTxn PB3
#define PIN_EYE0_DDRx DDRB
#define PIN_EYE0_DDRxn DDB3

#define PIN_EYE1_PORTx PORTB
#define PIN_EYE1_PORTxn PB4
#define PIN_EYE1_DDRx DDRB
#define PIN_EYE1_DDRxn DDB4

// +--[LIGHT LEVEL INTERRUPT]-------------------------------------------------+
#define PIN_LIGHT_PORTx PORTB
#define PIN_LIGHT_PORTxn PB1
#define PIN_LIGHT_DDRx DDRB
#define PIN_LIGHT_DDRxn DDB1
#define PIN_LIGHT_PINx PINB
#define PIN_LIGHT_PINxn PINB1

// +--[BSI]-------------------------------------------------------------------+
#define PIN_BSI_SDA_PORTx PORTB
#define PIN_BSI_SDA_PORTxn PB0
#define PIN_BSI_SDA_DDRx DDRB
#define PIN_BSI_SDA_DDRxn DDB0
#define PIN_BSI_SDA_PINx PINB
#define PIN_BSI_SDA_PINxn PINB0

#define PIN_BSI_SCL_PORTx PORTB
#define PIN_BSI_SCL_PORTxn PB2
#define PIN_BSI_SCL_DDRx DDRB
#define PIN_BSI_SCL_DDRxn DDB2
