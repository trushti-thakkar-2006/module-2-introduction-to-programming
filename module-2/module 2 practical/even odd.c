#include <stdio.h>

int main() {
    int number, month;

    // Part 1: Check Even or Odd using if-else
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }

    // Part 2: Display month name using switch
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    printf("Month: ");
    switch (month) {
        case 1:  printf("January\n"); break;
        case 2:  printf("February\n"); break;
        case 3:  printf("March\n"); break;
        case 4:  printf("April\n"); break;
        case 5:  printf("May\n"); break;
        case 6:  printf("June\n"); break;
        case 7:  printf("July\n"); break;
        case 8:  printf("August\n"); break;
        case 9:  printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number.\n"); break;
    }

    return 0;
}
