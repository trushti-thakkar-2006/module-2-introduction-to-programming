#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(void) {
    struct Student students[3];  // Array to hold 3 students

    // Input loop
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("  Name: ");
        scanf("%49s", students[i].name);  // safer than %s

        printf("  Roll number: ");
        scanf("%d", &students[i].roll);

        printf("  Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display loop
    printf("Student details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name       : %s\n", students[i].name);
        printf("  Roll number: %d\n", students[i].roll);
        printf("  Marks      : %.2f\n\n", students[i].marks);
    }

    return 0;
}
