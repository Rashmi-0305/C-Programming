#include <stdio.h>
int main(){
    int myInt;
    float myFloat;
    char myChar;
    double myDouble;
    printf("Size of Int data type: %zu\n", sizeof(myInt));
    printf("Size of Float data type: %zu\n", sizeof(myFloat));
    printf("Size of Char data type: %zu\n", sizeof(myChar));
    printf("Size of double data type: %zu\n", sizeof(myDouble));

    return 0;
}