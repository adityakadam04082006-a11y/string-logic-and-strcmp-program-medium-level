#include <stdio.h>
#include <string.h>

int main() {
    char statusMsg[100];
    int errorCode = 0; // 0 = OK

    if (errorCode == 0) {
        sprintf(statusMsg, "System OK. Code: %d", errorCode);
    } else {
        sprintf(statusMsg, "System ERROR. Code: %d", errorCode);
    }

    printf("Status: %s\n", statusMsg);
    return 0;
}