#include <stdio.h>
#include <string.h>

int main() {
    char pass[50];
    printf("Enter password (must contain '$' or '#'): ");
    scanf("%s", pass);

    if (strchr(pass, '$') != NULL || strchr(pass, '#') != NULL) {
        printf("Password contains a special character. Good.\n");
    } else {
        printf("Password must include '$' or '#'.\n");
    }
    return 0;
}