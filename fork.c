#include "main.h"

/**
 * fork_process - forks a new process using fork function
 * @args: double pointer to character args (command and its arguments)
 * @envp: an array of strings representing the environment variables
 */
void fork_process(char **args, char **envp)
{
	int status;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execute_command(args, envp);
		exit(EXIT_SUCCESS);
	}
	else
		waitpid(child_pid, &status, 0);
}
