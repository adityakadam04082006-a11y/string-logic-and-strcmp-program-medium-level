#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check answer
int checkAnswer(char ans[]) {
    // 1. Make answer lowercase
    for(int i=0; ans[i]; i++) {
        ans[i] = tolower(ans[i]);
    }
    
    // 2. Check if it matches
    if (strcmp(ans, "paris") == 0) {
        return 1; // Correct
    }
    return 0; // Incorrect
}

int main() {
    char guess[50];
    printf("What is the capital of France? ");
    scanf("%s", guess);

    if (checkAnswer(guess) == 1) {
        printf("Correct!\n");
    } else {
        printf("Incorrect.\n");
    }
    return 0;
}