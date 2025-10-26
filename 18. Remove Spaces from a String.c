#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "this has spaces";
    char nospaces[50];
    int j = 0; // Index for nospaces

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != ' ') {
            nospaces[j] = input[i];
            j++;
        }
    }
    nospaces[j] = '\0'; // Add null terminator

    printf("Original: '%s'\n", input);
    printf("Removed:  '%s'\n", nospaces);
    return 0;
}