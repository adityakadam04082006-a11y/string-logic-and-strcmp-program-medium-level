#include <stdio.h>
#include <string.h> // strcasecmp is often in string.h on Linux
// #include <strings.h> // Sometimes it's in strings.h

int main() {
    char input[10];
    printf("Are you sure? (yes/no): ");
    scanf("%s", input);

    // strcasecmp ignores case (Yes, yes, YES, yEs all match)
    if (strcasecmp(input, "yes") == 0) {
        printf("Action confirmed.\n");
    } else {
        printf("Action cancelled.\n");
    }
    return 0;
}