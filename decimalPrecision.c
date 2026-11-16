#include <stdio.h>
int main(){
    float pi = 3.14159;

    /*using a (.) dot followed by a number in format specifier(%f)
     specifies how many digits should be shown after the decimal point*/

     printf("%.2f\n\n", pi); //only two digits after decimal will be shown

     /*ROUNDING: When we set up precision, printf() does not just cut off the extra digits.
     It also rounds the number to the nearest value*/
     
     printf("%.3f", pi);// rounded

     return 0;
}