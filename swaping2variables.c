#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int temp;
    //Swapping the values of a and b using a 3rd var "temp"
    temp = a;
    a = b;
    b = temp;
    printf("The new value of a: %d", a);
    printf("\nThe new value of b: %d", b);
    return 0;

}