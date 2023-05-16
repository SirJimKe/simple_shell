#include "main.h"

#define MAX_INPUT_LENGTH 1024

/**
 * run_shell - runs the simple shell program
 */
void run_shell(void)
{
	char *input = NULL;
	size_t input_len = 0;
	ssize_t bytes_read;
	char *args[MAX_INPUT_LENGTH];

	while (1)
	{
		print_prompt();
		bytes_read = getline(&input, &input_len, stdin);
		if (bytes_read == -1)
		{
			_putchar('\n');
			free(input);
			exit(0);
		}

		if (!parse_input(input, args))
			continue;

		if (!check_executable(args[0]))
			continue;

		fork_process();
	}

	free(input);
}
