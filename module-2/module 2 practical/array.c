#include <stdio.h>

int main() {
    // --- Part 1: One-Dimensional Array ---
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("One-Dimensional Array (5 elements):\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // --- Part 2: Two-Dimensional Array (3x3 Matrix) ---
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row, col, sum = 0;

    printf("\nTwo-Dimensional Array (3x3 Matrix):\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
            sum += matrix[row][col];
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix: %d\n", sum);

    return 0;
}
