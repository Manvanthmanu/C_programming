#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *ptr;
    int num;
    int count = 0;
    char buffer[100];

    // Open the file in read mode
    ptr = fopen("Hello.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file line by line
    while (fscanf(ptr, "%s", buffer) == 1 && count < 3) {
        char *endptr;
        num = strtol(buffer, &endptr, 10);

        // Check if the entire buffer is a valid integer
        if (endptr != buffer && *endptr == '\0') {
            printf("Found integer: %d\n", num);
            count++;
        }
    }

    if (count < 3) {
        printf("Less than three integers found in the file.\n");
    }

    // Close the file
    fclose(ptr);
    return 0;
}
