#include <stdio.h>
#include <string.h>

int main() {
    char url[100];
    printf("Enter a URL: ");
    scanf("%s", url);

    if (strncmp(url, "http://", 7) == 0) {
        printf("Insecure protocol (HTTP).\n");
    } else if (strncmp(url, "https://", 8) == 0) {
        printf("Secure protocol (HTTPS).\n");
    } else {
        printf("Invalid or unknown protocol.\n");
    }
    return 0;
}