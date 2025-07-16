#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "example.txt";
    const char *text = "Hello, File I/O in C!\n";

    // 1. Open or create file for writing
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        perror("Error opening file for writing");
        return 1;
    }

    // 2. Write string into file
    if (fputs(text, fp) == EOF) {
        perror("Error writing to file");
        fclose(fp);
        return 1;
    }
    fclose(fp);  // 3. Close after writing :contentReference[oaicite:6]{index=6}

    // 4. Reopen same file for reading
    fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file for reading");
        return 1;
    }

    // 5. Read and display contents
    printf("File contents:\n");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        fputs(buffer, stdout);
    }

    fclose(fp);
    return 0;
}
