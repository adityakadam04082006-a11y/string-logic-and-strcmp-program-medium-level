#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter first word: ");
    scanf("%s", str1);
    printf("Enter second word: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) < 0) {
        printf("In order: %s, %s\n", str1, str2);
    } else if (strcmp(str1, str2) > 0) {
        printf("In order: %s, %s\n", str2, str1);
    } else {
        printf("The words are identical.\n");
    }
    return 0;
}