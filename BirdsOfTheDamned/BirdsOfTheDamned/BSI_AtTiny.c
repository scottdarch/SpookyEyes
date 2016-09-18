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
static bool _handle_write_byte(uint8_t byte) {
    // TODO: common write logic.
    return false;    
}

static bool _handle_write_job(BSI_I2C_Driver* self) {
    // start
    PIN_OUT_LOW(BSI_SDA);
    TQNT;
    PIN_OUT_LOW(BSI_SCL);
    QCLK;
    
    bool did_ack = false;
    
    // address
    uint8_t i = 0x80;
    for (;i != 0x1; i >>= 1) {
        PIN_OUT_SET(BSI_SDA, (self->_peripheral_addr & i));
        SCLK;
        PIN_OUT_HIGH(BSI_SCL);
        CLK;
        PIN_OUT_LOW(BSI_SCL);
    }
    
    // |WRITE
    PIN_OUT_LOW(BSI_SDA);
    HCLK;
    PIN_OUT_HIGH(BSI_SCL);
    CLK;
    PIN_OUT_LOW(BSI_SCL);
    TQCLK;
    
    // ACK
    PIN_INIT_INPUT(BSI_SDA, true);
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    for(uint8_t x = 0; x < 3; ++x) {
        if (!PIN_IN_IS_HIGH(BSI_SDA)) {
            did_ack = true;
        }
    }
    PIN_OUT_LOW(BSI_SDA);
    _NOP();
    PIN_OUT_LOW(BSI_SCL);
    PIN_INIT_OUTPUT(BSI_SDA);
    // TODO: if ack and if we have more to write issue a repeated start then write more bits.
    TQCLK;
    
    // stop condition
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    PIN_OUT_HIGH(BSI_SDA);
    
    if (did_ack) {
        self->_pending_write_job = 0;
        return true;
    } else {
        return false;
    }        
}

static bool _handle_read_job(BSI_I2C_Driver* self) {
    
    self->_pending_read_job = 0;
    return true;    
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
        return _handle_write_job(self);
    } else if (self->_pending_read_job) {
        return _handle_read_job(self);
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
