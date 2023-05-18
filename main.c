#include "main.h"

/**
 * main - starting point of execution when the program is run
 * @argc: number of command-line arguments passed
 * @argv: command-line arguments
 * @envp: holds the environment variables
 * Return: 0
 */
int main(int argc, char **argv, char **envp)
{
	if (argc == 1)
		run_shell(argv, envp);
	return (0);
}
