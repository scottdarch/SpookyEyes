/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Minimal, bit-banged serial interface to a MAX44009 ambient light sensor.
 */
#pragma once

#include <stdint.h>
#include <stdbool.h>

// +--------------------------------------------------------------------------+
// | I2C DEFINITIONS
// +--------------------------------------------------------------------------+
#define MAX44009_ADDRESS 0x4A

#define MAX44009_REG_INT_STAT 0x00
#define MAX44009_REG_INT_EN 0x1
#define MAX44009_REG_CONFIG 0x2
#define MAX44009_REG_LUX_HIGH 0x3
#define MAX44009_REG_LUX_LOW 0x4
#define MAX44009_REG_THRESH_HIGH 0x5
#define MAX44009_REG_THRESH_LOW 0x6
#define MAX44009_REG_THRESH_TIMER 0x7

// +--------------------------------------------------------------------------+
// | API
// +--------------------------------------------------------------------------+
bool max_44009_write_to_register(uint8_t peripheral_addr, uint8_t register_addr, const uint8_t* data, uint16_t write_len);

bool max_44009_read_from_register(uint8_t peripheral_addr, uint8_t register_addr, uint8_t* out_data);
