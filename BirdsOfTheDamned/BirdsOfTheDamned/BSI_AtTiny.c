/*
* Birds of the Damned
*                                                                   o o
*
* ----------------------------------------------------------------------------
*/

#include "BSI.h"
#include "mcu.h"
#include <avr/cpufunc.h>

#define CLK _delay_us(24)
#define TQCLK _delay_us(18)
#define HCLK _delay_us(12)
#define QCLK _delay_us(6)
#define ECLK _delay_us(3)
#define SCLK _delay_us(2)
#define TQNT _NOP()

// +--------------------------------------------------------------------------+
// | PRIVATE
// +--------------------------------------------------------------------------+
static void _do_start() {
    PIN_OUT_LOW(BSI_SDA);
    TQNT;
    PIN_OUT_LOW(BSI_SCL);
    QCLK;
}

static void _send_byte(uint8_t byte) {
    uint8_t i = 0x80;
    do {
        PIN_OUT_SET(BSI_SDA, (byte & i));
        TQNT;
        PIN_OUT_HIGH(BSI_SCL);
        CLK;
        PIN_OUT_LOW(BSI_SCL);
        TQNT;
        if (i == 0x01) {
            TQNT;
            break;
        } else {
            i >>= 1;
            continue;
        }
    } while(1);
}

static bool _read_ack() {
    bool did_ack = false;
    PIN_INIT_INPUT(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    for(uint8_t x = 0; x < 3; ++x) {
        if (!PIN_IN_IS_HIGH(BSI_SDA)) {
            did_ack = true;
        }
    }
    PIN_OUT_LOW(BSI_SDA);
    TQNT;
    PIN_OUT_LOW(BSI_SCL);
    PIN_INIT_OUTPUT(BSI_SDA);
    return did_ack;
}

static void _do_stop() {
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    PIN_OUT_HIGH(BSI_SDA);
}

static uint8_t _read_byte() {
    uint8_t byte_read = 0;
    PIN_INIT_INPUT(BSI_SDA);
    uint8_t bit = 0x80;
    bool pin_state;
    do {
        PIN_OUT_HIGH(BSI_SCL);
        TQNT;
        pin_state = PIN_IN_IS_HIGH(BSI_SDA);
        PIN_OUT_LOW(BSI_SCL);
        byte_read |= (pin_state ? 1 : 0) << bit;
        if (bit == 1) {
            break;
        } else {
            bit >>= 1;
            continue;
        }
    } while(1);
    PIN_INIT_OUTPUT(BSI_SDA);
    return byte_read;
}

static bool _handle_write_job(BSI_I2C_Driver* self) {
    bool success = false;
    const uint8_t* write_job = self->_pending_write_job;
    
    _do_start();
    // address + |W
    _send_byte(self->_peripheral_addr);
    
    // write data
    if (_read_ack()) {
        // big endian
        uint8_t write_i = self->_pending_write_job_len;
        while(write_i) {
            //// Prepare for SR
            //PIN_OUT_HIGH(BSI_SDA);
            //TQNT;
            //// Do SR
            //PIN_OUT_HIGH(BSI_SCL);
            //TQNT;
            //PIN_OUT_LOW(BSI_SDA);
            //// while the clock is high retrieve the next byte to write.
            //// We need part of the clock time to perform the memory access.
            write_i -= 1;
            const uint8_t next_byte = write_job[write_i];
            //QCLK;
            //SCLK;
            //PIN_OUT_LOW(BSI_SCL);
            //SCLK;
            _send_byte(next_byte);
            if (!_read_ack()) {
                break;
            } else if (!write_i) {
                success = true;
                self->_pending_write_job = 0;
            }
        }
    }
    _do_stop();
    
    return success;
}

static bool _handle_read_job(BSI_I2C_Driver* self) {
    bool success = true;
    uint8_t* read_job = self->_pending_read_job;
    
    _do_start();
    // address + R
    _send_byte(self->_peripheral_addr | 0x01);
    
    // write data
    if (_read_ack()) {
        // big endian
        uint8_t read_i = self->_pending_read_job_len;
        while(read_i) {
            //// Prepare for SR
            //PIN_OUT_HIGH(BSI_SDA);
            //TQNT;
            //// Do SR
            //PIN_OUT_HIGH(BSI_SCL);
            //TQNT;
            //PIN_OUT_LOW(BSI_SDA);
            read_i -= 1;
            //TQCLK;
            //PIN_OUT_LOW(BSI_SCL);
            //SCLK;
            read_job[read_i] = _read_byte();
            if (!_read_ack()) {
                break;
            }
        }
        if (!read_i) {
            success = true;
            self->_pending_read_job = 0;
        }
    }
    _do_stop();
    
    return success;
}

// +--------------------------------------------------------------------------+
// | API
// +--------------------------------------------------------------------------+
bool _i2c_write_job(BSI_I2C_Driver* self, const uint8_t* data, uint16_t write_len) {
    if (self->_pending_write_job) {
        return false;
    } else {
        self->_pending_write_job = data;
        self->_pending_write_job_len = write_len;
        return true;
    }
}

bool _i2c_read_job(BSI_I2C_Driver* self, uint8_t* out_data, uint16_t read_len) {
    if (self->_pending_read_job) {
        return false;
    } else {
        self->_pending_read_job = out_data;
        self->_pending_read_job_len = read_len;
        return true;
    }
}

bool _i2c_service(BSI_I2C_Driver* self) {
    if (self->_pending_write_job) {
        return (_handle_write_job(self) && !self->_pending_read_job);
    } else if (self->_pending_read_job) {
        return (_handle_read_job(self) && !self->_pending_write_job);
    } else {
        return true;
    }
    
}

BSI_I2C_Driver* init_peripheral(BSI_I2C_Driver* self, uint8_t peripheral_addr) {
    if (self) {
        self->_peripheral_addr = (peripheral_addr << 1);
        self->read_job = _i2c_read_job;
        self->write_job = _i2c_write_job;
        self->service = _i2c_service;
        self->_pending_write_job = 0;
        self->_pending_read_job = 0;
    }
    return self;
}
