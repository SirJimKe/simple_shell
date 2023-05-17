#include "main.h"

int main() {
    char command[256];

    while (1) {
        printf("$ ");
        fgets(command, sizeof(command), stdin);

        // Remove the trailing newline character from the command
        command[strcspn(command, "\n")] = '\0';

        run_command(command);
    }

    return 0;
}
