#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a word: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;
    int isPalindrome = 1; // 1 = true

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // 0 = false
            break; // No need to check further
        }
        left++;
        right--;
    }

    if (isPalindrome == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is NOT a palindrome.\n", str);
    }
    return 0;
}