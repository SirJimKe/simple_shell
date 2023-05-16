#include "main.h"

/**
 * fork_process - forks a new process using fork function
 */
void fork_process(void)
{
	int status;
	pid_t pid;
	char *args[] = {NULL};
	char *input = NULL;

	pid = fork();
	if (pid < 0)
	{
		perror("fork");
		free(input);
		exit(1);
	}
	else if (pid == 0)
	{
		execute_command(args, &input);
		exit(0);
	}
	else
		waitpid(pid, &status, 0);
}
