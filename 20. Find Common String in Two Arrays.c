#include <stdio.h>
#include <string.h>

int main() {
    char* listA[] = {"apple", "banana", "cherry"};
    char* listB[] = {"orange", "grape", "cherry"};
    int found = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (strcmp(listA[i], listB[j]) == 0) {
                printf("Common item found: %s\n", listA[i]);
                found = 1;
                break;
            }
        }
        if (found == 1) break;
    }

    if (found == 0) {
        printf("No common items found.\n");
    }
    return 0;
}