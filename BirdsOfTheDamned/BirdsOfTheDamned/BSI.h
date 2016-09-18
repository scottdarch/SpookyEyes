/*
 * Birds of the Damned
 *                                                                   o o
 *
 * ----------------------------------------------------------------------------
 * Bit-banged Serial Interface - A bit-banged implementation of two wire protocols.
 */
#pragma once

#include <stdint.h>
#include <stdbool.h>

#define SEND_MESSAGE_UNCHECKED(MSG, TARGET_PTR, ...) (TARGET_PTR)->MSG(TARGET_PTR, ##__VA_ARGS__)

struct BSI_I2C_Driver_t;

typedef struct BSI_I2C_Driver_t {
    bool (*write_job)(struct BSI_I2C_Driver_t* self, const uint8_t* data, uint16_t write_len);
    bool (*read_job)(struct BSI_I2C_Driver_t* self, uint8_t* out_data, uint16_t read_len);
    bool (*service)(struct BSI_I2C_Driver_t* self);
    
    // +----------------------------------------------------------------------+
    // | PRIVATE
    // +----------------------------------------------------------------------+
    uint8_t _peripheral_addr;
    uint8_t* _pending_read_job;
    uint16_t _pending_read_job_len;
    const uint8_t* _pending_write_job;
    uint16_t _pending_write_job_len;
}BSI_I2C_Driver;

BSI_I2C_Driver* init_peripheral(BSI_I2C_Driver* self, uint8_t peripheral_addr);

