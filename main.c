#include <stdio.h>
#include <stdlib.h>


int main()
{

    //Declare all inputs and get user input for these inputs
    int Din;
    int Q2_cur;
    int Q1_cur;
    int Q0_cur;


    printf("Enter the input value for Din: ");
    scanf("%d", &Din);
    printf("Enter the input value for Q2_cur: ");
    scanf("%d", &Q2_cur);
    printf("Enter the input value for Q1_cur: ");
    scanf("%d", &Q1_cur);
    printf("Enter the input value for Q0_cur: ");
    scanf("%d", &Q0_cur);




    printf("Q2_cur: %d ", Q2_cur);
    printf("Q1_cur: %d ", Q1_cur);
    printf("Q0_cur: %d ", Q0_cur);
    printf("Din: %d \n", Din);



    if ( (Q2_cur!=1) && (Q1_cur!=1) && (Q0_cur!=1)){
        printf("Output = 0(No Error)");


    }

    else if (((Q2_cur!=1) && (Q1_cur!=1) && (Q0_cur!=1) && (Din!=1))||((Q1_cur!=1) && (Q0_cur==1) && (Din==1))){
        printf("Output = 0(No Error)");


    }

    else if (((Q1_cur==1) && (Q0_cur==1))||((Q0_cur==1) && (Din!=1))){
        printf("Output = 0(No Error)");


    }

    else if ((Q1_cur==1) && (Q0_cur!=1) && (Din==1)){
        printf("Output = ERR(1)");

    }
    else{
        printf("Output = No Error");
    }
}
