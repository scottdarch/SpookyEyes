/*
* Birds of the Damned
*                                                                   o o
*
* ----------------------------------------------------------------------------
*/

#include "max44009.h"
#include "mcu.h"
#include <avr/cpufunc.h>
#include <util/atomic.h>

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

static void _do_start_repeat() {
    // Repeat start
    //// Prepare for SR
    PIN_OUT_HIGH(BSI_SDA);
    TQNT;
    //// Do SR
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    PIN_OUT_LOW(BSI_SDA);
    TQCLK;
    PIN_OUT_LOW(BSI_SCL);
    SCLK;    
}

static void _send_byte(uint8_t byte) {
    uint8_t i = 0x80;
    do {
        PIN_OUT_SET(BSI_SDA, (byte & i));
        TQNT;
        PIN_OUT_HIGH(BSI_SCL);
        CLK;
        PIN_OUT_LOW(BSI_SCL);
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
    PIN_SWITCH_TO_INPUT(BSI_SDA);
    PIN_OUT_HIGH(BSI_SCL);
    HCLK;
    if (!PIN_IN_IS_HIGH(BSI_SDA)) {
        did_ack = true;
    }
    if (!PIN_IN_IS_HIGH(BSI_SDA)) {
        did_ack = true;
    }
    if (!PIN_IN_IS_HIGH(BSI_SDA)) {
        did_ack = true;
    }
    if (!PIN_IN_IS_HIGH(BSI_SDA)) {
        did_ack = true;
    }
    PIN_OUT_LOW(BSI_SCL);
    PIN_SWITCH_TO_OUTPUT_FROM_PULLUP(BSI_SDA);
    return did_ack;
}

static void _do_ack() {
    PIN_OUT_HIGH(BSI_SDA);
    TQNT;
    PIN_OUT_HIGH(BSI_SCL);
    CLK;
    PIN_OUT_LOW(BSI_SCL);
    TQNT;
    PIN_OUT_LOW(BSI_SDA);
}

static void _do_stop() {
    PIN_OUT_HIGH(BSI_SCL);
    TQNT;
    PIN_OUT_HIGH(BSI_SDA);
}

static uint8_t _read_byte() {
    uint8_t byte_read = 0;
    PIN_SWITCH_TO_INPUT_WITH_PULLUP(BSI_SDA);
    uint8_t bit_mask = 0x80;
    do {
        PIN_OUT_HIGH(BSI_SCL);
        HCLK;
        if (PIN_IN_IS_HIGH(BSI_SDA)) {
            byte_read |= bit_mask;
        }
        if (PIN_IN_IS_HIGH(BSI_SDA)) {
            byte_read |= bit_mask;
        }
        SCLK;
        PIN_OUT_LOW(BSI_SCL);
        bit_mask >>= 1;
        TQCLK;
    } while(bit_mask != 0x0);
    PIN_SWITCH_TO_OUTPUT_FROM_PULLUP(BSI_SDA);
    PIN_OUT_LOW(BSI_SCL);
    return byte_read;
}


// +--------------------------------------------------------------------------+
// | API
// +--------------------------------------------------------------------------+

bool max_44009_write_to_register(uint8_t peripheral_addr, uint8_t register_addr, const uint8_t data) {
    bool success = false;
    
    ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {

        const uint8_t peripheral_addr_shifted = (peripheral_addr << 1);
        
        // Write register to read from.
        _do_start();
        _send_byte(peripheral_addr_shifted);
        
        if (!_read_ack()) {
            goto DO_STOP;
        }
        
        _send_byte(register_addr);
        
        if (!_read_ack()) {
            goto DO_STOP;
        }
        
        // write byte
        _send_byte(data);
        
        if (!_read_ack()) {
            goto DO_STOP;
        }
        
        success = true;
        
    DO_STOP:
        _do_stop();
        
    }
    return success;
}

bool max_44009_read_from_register(uint8_t peripheral_addr, uint8_t register_addr, uint8_t* out_data) {
    bool success = false;
            
    ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {

        const uint8_t peripheral_addr_shifted = (peripheral_addr << 1);
    
        // Write register to read from.
        _do_start();
        _send_byte(peripheral_addr_shifted);
    
        if (!_read_ack()) {
            goto DO_STOP;
        }        
        
        _send_byte(register_addr);
    
        if (!_read_ack()) {
            goto DO_STOP;
        }
    
        _do_start_repeat();
    
        // Start read
        _send_byte(peripheral_addr_shifted | 0x01);
        
        if (!_read_ack()) {
            goto DO_STOP;
        }
    
        *out_data = _read_byte();
    
       // expect NAK to say we're done reading.
       _do_ack();
       TQCLK;
   
       success = true;
    
    DO_STOP:
        _do_stop();
    
    }
    return success;        
}
