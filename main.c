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


/* In this code, the main function continuously reads an incoming bit from the user and calls the "monitor_bits" function from the mylib.c file with this incoming bit as an argument.
Then it calls the "get_err" function from the mylib.c file, and if it returns ERROR, it prints "Error detected!" to the console. */ 
