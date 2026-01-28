#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char code[100], token[20];
    int i=0, j;
    printf("Enter code: ");
    fgets(code, sizeof(code), stdin);
    while (code[i]) {
        if (code[i]==' ' || code[i]=='\n' || code[i]=='\t') { i++; continue; }

        // Identifier
        if (isalpha(code[i])) {
            j=0;
            while (isalnum(code[i])) token[j++]=code[i++];
            token[j]='\0';
            printf("Identifier: %s\n", token);
        }
        // Constant
        else if (isdigit(code[i])) {
            j=0;
            while (isdigit(code[i])) token[j++]=code[i++];
            token[j]='\0';
            printf("Constant: %s\n", token);
        }
        // Operator
        else {
            printf("Operator: %c\n", code[i++]);
        }
    }
    return 0;
}
