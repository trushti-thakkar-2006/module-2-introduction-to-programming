#include <stdio.h>

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n=== Arithmetic Operations ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    // To prevent division by zero
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }

    // Relational Operations
    printf("\n=== Relational Operations ===\n");
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);

    // Logical Operations
    printf("\n=== Logical Operations ===\n");
    printf("(%d != 0) && (%d != 0) = %d\n", a, b, (a != 0) && (b != 0));
    printf("(%d != 0) || (%d != 0) = %d\n", a, b, (a != 0) || (b != 0));
    printf("!(%d != 0) = %d\n", a, !(a != 0));

    return 0;
}

