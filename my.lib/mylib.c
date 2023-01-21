/* The mylib.c file is a source file that contains the implementation of the functions that are declared in the mylib.h file. 
These functions are intended to be used in other source files, such as the main function. 
In this case, the mylib.c file contains the implementation of the two functions "monitor_bits" and "get_err" that are declared in the mylib.h file. 
The monitor_bits function is responsible for monitoring the incoming bit stream and updating the state of the finite state machine. 
The get_err function is used to check the current state of the machine and check if an error occurred in the transmitter or not. 
The monitor_bits function takes an input parameter Din, which is the incoming bit, 
and it updates the current state variables Q2_cur, Q1_cur, Q0_cur, Q2_nxt, Q1_nxt, Q0_nxt based on the current state of the machine and the incoming bit. 
It also updates the err variable based on the current state of the machine and the incoming bit.*/



#include "mylib.h"

int Q2_cur = 0;
int Q1_cur = 0;
int Q0_cur = 0;
int Q2_nxt = 0;
int Q1_nxt = 0;
int Q0_nxt = 0;
int err = NO_ERROR;

void monitor_bits(int Din) {
    Q2_cur = Q2_nxt;
    Q1_cur = Q1_nxt;
    Q0_cur = Q0_nxt;
    if (Din == 1) {
        switch (Q2_cur * 4 + Q1_cur * 2 + Q0_cur) {
            case 0:
                Q2_nxt = 0;
                Q1_nxt = 0;
                Q0_nxt = 1;
                break;
            case 2:
                Q2_nxt = 0;
                Q1_nxt = 1;
                Q0_nxt = 0;
                break;
            case 3:
                Q2_nxt = 0;
                Q1_nxt = 1;
                Q0_nxt = 1;
                err = ERROR;
                break;
            case 4:
                Q2_nxt = 1;
                Q1_nxt = 0;
                Q0_nxt = 0;
                break;
            case 7:
                Q2_nxt = 0;
                Q1_nxt = 0;
                Q0_nxt = 0;
                break;
            default:
                break;
        }
    }
