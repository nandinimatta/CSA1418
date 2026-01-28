#include <stdio.h>
#include <string.h>
int main() {
    char line[200];
    printf("Enter a line of code:\n");
    fgets(line, sizeof(line), stdin);  // read a line
    // Check for single-line comment //
    if (strncmp(line, "//", 2) == 0) {
        printf("This is a single-line comment.\n");
    }
    // Check for multi-line comment /*
    else if (strncmp(line, "/*", 2) == 0) {
        if (strstr(line, "*/") != NULL) {
            printf("This is a complete multi-line comment.\n");
        } else {
            printf("This is the start of a multi-line comment.\n");
        }
    }
    else {
        printf("This is not a comment.\n");
    }

    return 0;
}
