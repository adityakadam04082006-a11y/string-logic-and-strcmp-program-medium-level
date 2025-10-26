#include <stdio.h>
#include <string.h>

int main() {
    char guess[30];
    char secret[] = "robotics";

    printf("Guess the secret word (it's a hobby): ");

    while (1) {
        scanf("%s", guess);
        if (strcmp(guess, secret) == 0) {
            printf("You got it! The word was 'robotics'.\n");
            break;
        } else {
            printf("Nope, try again: ");
        }
    }
    return 0;
}