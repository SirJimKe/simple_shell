#include "main.h"

/**
 * fork_process - forks a new process using fork function
 * @args: double pointer to character args (command and its arguments)
 * @envp: an array of strings representing the environment variables
 */
void fork_process(char **args, char **envp)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid < 0)
	{
		perror("fork");
		exit(1);
	}
	else if (pid == 0)
	{
		execute_command(args, envp);
		exit(0);
	}
	else
		waitpid(pid, &status, 0);
}
