#include <stdio.h>
int main(){
    int num = 10;
    int num2 = 50;

    printf("The initial value of num is: %d", num);

    num = num2;
    printf("\nThe new value of num is: %d", num);
    return 0;
}