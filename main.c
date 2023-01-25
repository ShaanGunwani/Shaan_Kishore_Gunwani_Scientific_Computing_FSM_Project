// This C code is an implementation of a finite state machine that monitors an incoming serial bit stream. The information in the bit stream represents data in groups of three bits. The code "111" represents that an error has occurred in the transmitter. The system needs to monitor the incoming bit stream and assert a signal called "ERR" if the sequence "111" is detected.

// The main function reads the incoming bit from the user using the scanf function and passes it as an argument to the "monitor_bits" function. The "monitor_bits" function updates the current state variables and the error signal based on the incoming bit and the current state.

//  The "monitor_bits" function has the following main tasks:

// Initialize the next state variables and the error signal variable
// Implement the state transition logic:
// If the input bit is '1'
// Shift the current state to the next state
// Check if the current state is "111"
// If yes, assert the ERR signal
// If the input bit is '0'
// Reset the current state to "000"
// Update the current state variables with the next state variables
// The "main" function is a infinite loop that reads the input from the user and calls the monitor_bits function to update the state of the finite state machine and check the error signal. Then it will check if the error signal is set to NO_ERROR or ERROR and print the corresponding output.

// Also, the code defines two constants NO_ERROR and ERROR, which are assigned the values 0 and 1 respectively. These constants are used to check the value of the error signal and print the corresponding output.

// The infinite loop in the main function makes the program continuously running, it will keep running and waiting for the user input until the program is terminated manually.








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
        printf("Enter the input value for Sequence Detector (Please input one bit at a time (1/0)): "); 
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

