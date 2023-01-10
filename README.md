# Shaan_Kishore_Gunwani_Scientific_Computing_FSM_Project



# Serial Bit Sequence Detector FSM


# Description


Designing a circuit that will monitor an incoming serial bit stream. The information in the bit stream represents data in groups of three bits. The code *111* represents that an error has occurred in the transmitter. The system needs to monitor the incoming bit stream and assert a signal called "ERR" if the sequence "111" is detected. At all times and for all other incoming codes, ERR = 0. 


# State Diagram and State Transition Table


To implement this design, we need a machine that can keep track of the number of the incoming bits. In this way, the machine will know once the three bits within a sequence have been received. The machine must also track if the sequence of the incoming bits are 1's. In order to do this, we create a sequence of states that will be traversed when Din = 1. We also need a parallel sequence of states that will be traversed if an incoming bit is ever a 0. Each of these parallel paths must contain enough states to track that three bits of the sequence have been received before starting over and monitoring the next incoming sequence. To simplify the state diagram, the output ERR = 1 is only listed once next to the corresponding transition in the diagram. It is assumed that all other times, ERR = 0. 


![image](https://user-images.githubusercontent.com/114371881/211448462-7ac81b5f-4b36-4c23-86ba-a7fa8e0f6a14.png)



# State Encoding 

Encode the states in binary in order to minimize the number of the D-Flip-Flops. Since there are 5 unique states, we'll need 3 bits to encode all the states. Also, we need to state variable names. The three variables for the current state -> Q2_cur, Q1_cur, and Q0_cur. The three variables for the next state -> Q2_nxt, Q1_nxt, and Q0_nxt. 

State - Start -> Code - "000", 
State - D0_is_1 -> Code - "000", 
State - D1_is_1 -> Code - "010", 
D0_not_1 -> Code - "011",
State - D1_not_1 -> Code - "100".


# Karnaugh Maps 



NAME : SHAAN KISHORE GUNWANI
STUDENT ID: 2602176982





