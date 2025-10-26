#include <stdio.h>
#include <string.h>

// Function returns 1 if password is good, 0 otherwise
int isValidPassword(char pass[]) {
    // Rule 1: Must be at least 8 chars
    if (strlen(pass) < 8) {
        printf("Error: Password is too short.\n");
        return 0; // 0 = false
    }

    // Rule 2: Cannot be "password" or "12345678"
    if (strcmp(pass, "password") == 0 || strcmp(pass, "12345678") == 0) {
        printf("Error: Password is too common.\n");
        return 0; // 0 = false
    }

    return 1; // 1 = true, all checks passed
}

int main() {
    char newPass[50];
    printf("Enter new password: ");
    scanf("%s", newPass);

    if (isValidPassword(newPass) == 1) {
        printf("Password set successfully!\n");
    } else {
        printf("Could not set password.\n");
    }
    return 0;
}