#include <stdio.h>
#include <string.h>

int main() {
    char data[] = "sensors,10,20,50,error,30";
    printf("Parsing data: %s\n", data);
    
    // Get the first token
    char *token = strtok(data, ",");

    // Loop through other tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        
        if (strcmp(token, "error") == 0) {
            printf("  -> Found an error token! Skipping...\n");
        }
        
        token = strtok(NULL, ",");
    }
    return 0;
}