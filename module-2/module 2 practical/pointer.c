#include <stdio.h>

int main(void) {
    int num = 10;        // Declare and initialize a variable
    int *ptr = &num;     // Declare a pointer and assign it the address of num

    printf("Before: num = %d\n", num);        // Prints 10
    printf("Via pointer: *ptr = %d\n", *ptr); // Prints 10

    *ptr = 20;           // Modify the value of num using the pointer

    printf("After: num = %d\n", num);         // Prints 20
    printf("Via pointer: *ptr = %d\n", *ptr); // Prints 20

    return 0;
}
