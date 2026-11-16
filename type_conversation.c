#include <stdio.h>
int main(){
    int a = 5;
    int b = 2;
    int result = a / b;

    printf("Result is : %d", result); /*Answer should be 2.5 but a and b both are integers
    the result is also in integer and not floating point value*/

    //IMPLICIT CONVERSATION

    /*It is done automatically by the compiler when you
    assign a value of one type to another.*/

    /*For eg: If you assign an int value to a float type*/

    float myFloat = 9;
    printf("\n%.3f", myFloat);

    //Explicit Conversation
    /*Explicit Conversationis done manually by placing the
    type in parentheses() in front of the value*/

    float myresult = (float) 9/2;
    printf("\n%.3f", myresult);
    return 0;
}