//In this code, the main function continuously reads an incoming bit from the user and calls the "monitor_bits" function from the mylib.c file with this incoming bit as an argument.
//Then it calls the "get_err" function from the mylib.c file, and if it returns ERROR, it prints "Error detected!" to the console.

//The state of the finite state machine is not explicitly represented in the main function, 
//but it is being handled by the monitor_bits function in the mylib.c file. 
//The state of the machine is represented by variables such as Q2_cur, Q1_cur, and Q0_cur, 
//these variables are used to store the current state of the machine and are being updated in the monitor_bits function, 
//based on the incoming bits and the current state of the machine. 
//The monitor_bits function also contains a switch statement that handles the different states of the machine, 
//and updates the state variables based on the input and the current state. */




#include <stdio.h>
#include "mylib.h"

int main() {
    int Din;
    while (1) { // infinite loop to continuously read incoming bits
        printf("Enter the incoming bit: ");
        scanf("%d", &Din);
        monitor_bits(Din);
        if (get_err() == ERROR) {
            printf("Error detected!\n");
        }
    }
    return 0;
}


