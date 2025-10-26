#include <stdio.h>
#include <string.h>

int main() {
    char* words[] = {"one", "two", "three", "four", "five", "sixteen"};
    int numWords = 6;
    
    int maxLen = 0;
    char* longestWord = "";

    for (int i = 0; i < numWords; i++) {
        if (strlen(words[i]) > maxLen) {
            maxLen = strlen(words[i]);
            longestWord = words[i];
        }
    }

    printf("The longest word is '%s' with %d letters.\n", longestWord, maxLen);
    return 0;
}