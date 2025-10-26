#include <stdio.h>
#include <string.h>

int main() {
    char cmd[50];
    printf("Robot command prompt. Type 'quit' to exit.\n");

    while (1) {
        printf("> ");
        fgets(cmd, 50, stdin);
        cmd[strcspn(cmd, "\n")] = 0; // Remove newline

        if (strcmp(cmd, "quit") == 0) {
            printf("Shutting down...\n");
            break; // Exit loop
        } else if (strcmp(cmd, "status") == 0) {
            printf("STATUS: All systems nominal.\n");
        } else if (strcmp(cmd, "move") == 0) {
            printf("ACTION: Moving forward.\n");
        } else if (strcmp(cmd, "stop") == 0) {
            printf("ACTION: Stopping motors.\n");
        } else {
            printf("ERROR: Unknown command '%s'\n", cmd);
        }
    }
    return 0;
}