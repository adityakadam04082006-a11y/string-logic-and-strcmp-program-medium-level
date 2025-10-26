#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    printf("Enter filename (e.g., 'image.png'): ");
    scanf("%s", filename);

    // strrchr finds the LAST occurrence of a character
    char *dot = strrchr(filename, '.');

    if (dot == NULL) {
        printf("No file extension found.\n");
    } else if (strcmp(dot, ".png") == 0) {
        printf("It's a PNG image.\n");
    } else if (strcmp(dot, ".jpg") == 0) {
        printf("It's a JPG image.\n");
    } else {
        printf("It's some other file type.\n");
    }
    return 0;
}