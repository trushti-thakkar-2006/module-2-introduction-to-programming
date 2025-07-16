#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int number, result;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call
        result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }

    return 0;
}

// Function definition
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact *= i;  // fact = fact * i
    }

    return fact;
}
