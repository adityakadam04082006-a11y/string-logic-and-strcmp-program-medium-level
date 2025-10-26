#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

int main() {
    char input[100];
    int vowels = 0;
    
    printf("Enter some text: ");
    fgets(input, 100, stdin);

    for (int i = 0; i < strlen(input); i++) {
        char ch = tolower(input[i]); // Convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("That text contains %d vowels.\n", vowels);
    return 0;
}