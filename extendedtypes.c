#include <stdio.h>
int main(){
    int normalInt = 1000;
    double normalDouble = 100.91;

    short int small = -100; //smaller int
    unsigned int n = 25; //only =VE INT
    long int n2 = 1234567890; //larger int
    long long int n3 = 9223372036854775807; //very large, only +ve
    unsigned long long int n4 = 18446744073709551615U; //very large, only +ve
    long double n5 = 3.141592653589793238L; //extended 

    printf("Normal int: %d and its size %zu", normalInt, sizeof(normalInt));
    printf("\nNormal double: %f and its size: %zu.", normalDouble, sizeof(normalDouble));

    printf("\n\nShort Int: %hd and its size %zu.", small, sizeof(small));
    printf("\nUnsigned Int: %u and its size: %zu.", n, sizeof(n));
    printf("\nLong Int: %ld and its size: %zu.", n2, sizeof(n2));
    printf("\nLong Long Int: %lld and its size %zu.", n3, sizeof(n3));
    printf("\nUnsigned Long Long Int: %llu and its size: %zu.", n4, sizeof(n4));
    printf("\nLong Double: %lf and its size: %zu.", n5, sizeof(n5));

    return 0;
}