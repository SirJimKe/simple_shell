#include "main.h"

/**
 * check_executable - checks if the executable file has the execute permission
 * @executable: string input
 * Return: 0 or 1
 */
int check_executable(char *executable)
{
	if (access(executable, X_OK) != 0)
	{
		perror("access");
		return (0);
	}
	return (1);
}

/**
 * execute_command - executes a command with the given arguments
 * @argv: douber pointer to character args (command and its arguments)
 * @envp: an array of strings representing the environment variables
 */
void execute_command(char **argv, char **envp)
{
	if (execve(argv[0], argv, envp) == -1)
	{
		perror("execve");
		exit(1);
	}
}