#include <stdio.h>
#include <string.h>
#include <ctype.h> // for isdigit()

int main() {
    char input[30];
    printf("Enter something: ");
    scanf("%s", input);

    int isNumber = 1; // 1 = true
    for (int i = 0; i < strlen(input); i++) {
        if (isdigit(input[i]) == 0) { // isdigit returns 0 if not a digit
            isNumber = 0;
            break;
        }
    }

    if (isNumber == 1) {
        printf("'%s' is a valid number.\n", input);
    } else {
        printf("'%s' is NOT a valid number.\n", input);
    }
    return 0;
}