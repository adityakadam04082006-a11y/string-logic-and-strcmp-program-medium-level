#include <stdio.h>
#include <string.h>

// main has arguments: argc (count), argv (values)
int main(int argc, char *argv[]) {
    // argc is 1 if no args are given (program name is 1st)
    if (argc < 2) {
        printf("Usage: %s [start|stop]\n", argv[0]);
        return 1; // Exit with error
    }

    // argv[1] is the first argument
    if (strcmp(argv[1], "start") == 0) {
        printf("Starting service...\n");
    } else if (strcmp(argv[1], "stop") == 0) {
        printf("Stopping service...\n");
    } else {
        printf("Unknown command: %s\n", argv[1]);
    }
    return 0;
}