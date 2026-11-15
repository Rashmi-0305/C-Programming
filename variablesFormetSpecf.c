#include <stdio.h>
int main(){
    int num = 25; //declaring and initializing a variable
    char letter = 'A';

    printf("The number is: %d", num); // %d is a formet specifier for integer
    printf("\nThe letter is: %c", letter);// %c is a formet specifier for character

    //We can use more than one format specifiers in single line
    printf("\n\nThe number %d is my birth date and the letter %c is a random letter", num, letter);

    return 0;

}