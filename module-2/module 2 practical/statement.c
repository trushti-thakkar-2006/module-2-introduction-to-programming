// Part 1: Using break to stop at 5
// #include <stdio.h>

// int main() {
//     int i;

//     printf("Using break (stop at 5):\n");
//     for (i = 1; i <= 10; i++) {
//         if (i == 5) {
//             break;  // Exit the loop when i is 5
//         }
//         printf("%d ", i);
//     }

//     printf("\n\n");

//     return 0;
// }

// Part 2: Using continue to skip 3
#include <stdio.h>

int main() {
    int i;

    printf("Using continue (skip 3):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  // Skip printing when i is 3
        }
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
