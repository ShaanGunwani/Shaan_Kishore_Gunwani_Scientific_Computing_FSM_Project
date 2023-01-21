#include "mylib.h"

#define BIT_WIDTH 3 // number of bits per data group
int shift_register = 0; // storage for incoming bits
int err = 0; // signal to indicate error

void monitor_bits(int incoming_bit) {
    shift_register = (shift_register << 1) | incoming_bit; // shift in new bit
    if ((shift_register & 7) == 7) { // check for sequence 111
        err = 1; // assert ERR signal
    } else {
        err = 0; // keep ERR signal clear
    }
}

int get_err(void) {
    return err;
}
