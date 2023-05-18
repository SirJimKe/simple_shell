#include "main.h"

/**
 * run_shell - runs the simple shell program
 * @argv: double pointer to character args (command and its arguments)
 * @envp: an array of strings representing the environment variables
 */
void run_shell(char **argv __attribute__((unused)), char **envp)
{
	char *input = NULL;
	size_t input_len = 0;
	ssize_t bytes_read;
	char *args[] = {NULL, NULL};

	while (1)
	{
		print_prompt();
		bytes_read = getline(&input, &input_len, stdin);
		if (bytes_read == -1)
		{
			free(input);
			exit(0);
		}

		if (input[bytes_read - 1] == '\n')
			input[bytes_read - 1] = '\0';

		args[0] = input;
		/**
		 *
		 * if (!parse_input(input, args))
		 *	continue;

		 * if (!check_executable(args[0]))
		 *	continue;
		 */

		fork_process(args, envp);
	}

	free(input);
}
