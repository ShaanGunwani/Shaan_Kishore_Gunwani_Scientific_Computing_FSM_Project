/* The mylib.h file is a header file that contains function prototypes and constants that are used in the mylib.c file. 
The purpose of this file is to provide an interface to the functions and variables defined in the mylib.c file, so that they can be used in other source files.
In this case, the mylib.h file contains the function prototypes for the two functions "monitor_bits" and "get_err" that are defined in the mylib.c file. 

The monitor_bits function is used to monitor the incoming bit stream and update the state of the finite state machine and 
the get_err function is used to check the current state of the machine to check if an error occurred in the transmitter or not.

Also, it contains the pre-processor macro NO_ERROR and ERROR which are used to define the error signal.
It is included in the main file by using preprocessor directive (#include "mylib.h") at the top of the file, 
this will make the functions and variables defined in the mylib.c file available in the main file.*/
  
  
  
#ifndef MYLIB_H
#define MYLIB_H

#define NO_ERROR 0
#define ERROR 1

void monitor_bits(int Din);
int get_err();

#endif

