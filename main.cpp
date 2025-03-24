#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <windows.h>
#include "dependencies.h"

#define MAX_LINE 1024
#define MAX_ARGS 64

// Function to execute a command using spawnvp
void execute_command(char **args) {

    char **new_args = change_command(args);

    cout << new_args[1] << endl;
    
    int status = _spawnvp(_P_WAIT, new_args[0], (const char * const *)new_args);
    if (status == -1) {
        perror("CustomShell");
    }
}

int main() {
    char line[MAX_LINE];
    char *args[MAX_ARGS];

    while (1) {
        // Print the shell prompt
        printf("sanskrit-cli> ");
        fflush(stdout);

        // Read a line of input
        if (fgets(line, MAX_LINE, stdin) == NULL) {
            break; // Exit on Ctrl+D (EOF)
        }

        // Remove trailing newline character
        line[strcspn(line, "\n")] = '\0';

        // Split the line into arguments using strtok
        int i = 0;
        char *token = strtok(line, " ");
        while (token != NULL && i < MAX_ARGS - 1) {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        // If no command was entered, continue to next iteration
        if (args[0] == NULL) {
            continue;
        }

        // If the user types "exit", break the loop and exit
        if (strcmp(args[0], "nirgachhatu") == 0) {
            break;
        }

        // Execute the command
        execute_command(args);
    }

    return 0;
}
