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
