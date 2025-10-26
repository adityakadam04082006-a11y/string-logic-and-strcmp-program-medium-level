#include <stdio.h>
#include <string.h>

int main() {
    char pass[30];
    int attempts = 3;
    int loggedIn = 0; // 0 = false

    for (int i = 0; i < attempts; i++) {
        printf("Enter password (%d attempts left): ", attempts - i);
        scanf("%s", pass);

        if (strcmp(pass, "secret123") == 0) {
            loggedIn = 1;
            break; // Exit the loop
        } else {
            printf("Incorrect.\n");
        }
    }

    if (loggedIn == 1) {
        printf("Access Granted.\n");
    } else {
        printf("Access Denied. Too many attempts.\n");
    }
    return 0;
}