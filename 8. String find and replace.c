#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "The quick brown fox.";
    char result[100] = ""; // Start with empty string
    
    char *pos = strstr(str, "fox"); // Find "fox"

    if (pos != NULL) {
        // 1. Copy everything BEFORE "fox"
        int index = pos - str;
        strncpy(result, str, index);
        
        // 2. Add the replacement word
        strcat(result, "cat");
        
        // 3. Add the rest of the string
        strcat(result, pos + 3); // +3 to skip "fox"
        
        printf("Original: %s\n", str);
        printf("Replaced: %s\n", result);
    } else {
        printf("Word 'fox' not found.\n");
    }
    return 0;
}