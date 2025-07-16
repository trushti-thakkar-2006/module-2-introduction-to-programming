#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[200];
    char str2[100];

    // Read first string (including spaces)
    printf("Enter first string: ");
    if (!fgets(str1, sizeof(str1), stdin)) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }
    // Remove newline if present
    str1[strcspn(str1, "\n")] = '\0';

    // Read second string
    printf("Enter second string: ");
    if (!fgets(str2, sizeof(str2), stdin)) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }
    str2[strcspn(str2, "\n")] = '\0';

    // Ensure there's enough room in str1
    if (strlen(str1) + strlen(str2) + 1 > sizeof(str1)) {
        fprintf(stderr, "Error: strings too long to concatenate safely.\n");
        return 1;
    }

    // Concatenate
    strcat(str1, str2);  // appends str2 to end of str1 :contentReference[oaicite:1]{index=1}

    // Output
    printf("\nConcatenated string: \"%s\"\n", str1);
    printf("Length: %zu characters\n", strlen(str1));  // length via strlen :contentReference[oaicite:2]{index=2}

    return 0;
}
