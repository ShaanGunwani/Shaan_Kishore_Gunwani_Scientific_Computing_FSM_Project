#include <stdio.h>

#define NO_ERROR 0
#define ERROR 1

// Declare variables for the current state
int Q2_cur = 0;
int Q1_cur = 0;
int Q0_cur = 0;

// Declare variable for the error signal
int ERR = 0;

void monitor_bits(int Din) {
    // Update the next state variables
    int Q2_nxt = Q2_cur;
    int Q1_nxt = Q1_cur;
    int Q0_nxt = Q0_cur;
    ERR = 0; // initialize ERR to 0

    // Implement state transition logic
    if (Din == 1) {
        Q2_nxt = Q1_cur;
        Q1_nxt = Q0_cur;
        Q0_nxt = 1;
        if (Q2_nxt == 1 && Q1_nxt == 1 && Q0_nxt == 1) {
            ERR = 1;
        }
    } else {
        Q2_nxt = 0;
        Q1_nxt = 0;
        Q0_nxt = 0;
    }

    // Update the current state variables
    Q2_cur = Q2_nxt;
    Q1_cur = Q1_nxt;
    Q0_cur = Q0_nxt;
}


int main() {
    int Din;
    while (1) {
        printf("Enter the input value for Sequence Detector: "); 
        scanf("%d", &Din);
        monitor_bits(Din);

        if (ERR == NO_ERROR) {
            printf("Output = 0 (No Error)\n");
        } else {
            printf("Output = ERR (1)\n");
        }
    }
    return 0;
}

