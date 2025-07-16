#include <stdio.h>

int main() {
    // Constant declaration
    const float PI = 3.14159;

    // Variable declarations
    int age = 25;
    char grade = 'A';
    float height = 5.9;

    // Output the values
    printf("=== Variable and Constant Demo ===\n");
    printf("Age (int): %d\n", age);           // int
    printf("Grade (char): %c\n", grade);      // char
    printf("Height (float): %.1f feet\n", height);  // float
    printf("Value of PI (constant float): %.5f\n", PI); // constant

    return 0;
}
