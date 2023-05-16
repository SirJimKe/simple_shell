#include "main.h"

#define MAX_COMMAND_LENGTH 100
#define MAX_ARGUMENTS 100

/**
 * main - A super simple shell tha runs commands with their
 * full paths without any arguments
 *
 * Return 0;
 */

int main(void)
{
        char command[MAX_COMMAND_LENGTH];
        char *arguments[MAX_ARGUMENTS];

        while (1)
        {
                fgets(command, sizeof(command), stdin);
                command[strcspn(command, "\n")] = '\0';

                char *token = strtok(command, " ");
                int arg_count = 0;
                while (token != NULL && arg_count < MAX_ARGUMENTS - 1)
                {
                        arguments[arg_count] = token;
                        arg_count++;
                        token = strtok(NULL, " ");
                }

                arguments[arg_count] = NULL;

                pid_t child_pid = fork();

                if (child_pid == 0)
                {
                        execve(arguments[0], arguments, NULL);
                        perror("execve fails");
                        exit(EXIT_FAILURE);
                }
                else if (child_pid > 0)
		{
                        int status;
                        wait(&status);
                        printf("The child process ID had exited with status %d\n", status);
                }
        }
        return (0);
}


