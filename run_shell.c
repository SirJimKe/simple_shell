#include "main.h"

/**
 * read_input - reads input from stdin
 * @input: pointer to input string
 * @input_len: pointer to input length
 *
 * Return: number of bytes read
 */
ssize_t read_input(char **input, size_t *input_len)
{
	ssize_t bytes_read;

	bytes_read = _getline(input, input_len, stdin);
	if (bytes_read == -1)
	{
		free(*input);
		exit(0);
	}

	if ((*input)[bytes_read - 1] == '\n')
		(*input)[bytes_read - 1] = '\0';

	return (bytes_read);
}

/**
 * handle_input - handles the parsed input
 * @input: input string
 * @args: array of command and arguments
 * @envp: array of environment variables
 */
void handle_input(char *input, char **args, char **envp)
{
	char *command_path;
	char **env = environ;
	int status = 0;

	if (!parse_input(input, args))
		return;

	if (_strncmp(args[0], "exit", _strlen("exit")) == 0)
	{

		if (args[1] != NULL)
			status = atoi(args[1]);
		free(input);
		exit(status);
	}
	if (_strncmp(args[0], "env", _strlen("env")) == 0)
	{
		while (*env != NULL)
		{
			_puts(*env);
			env++;
		}
	}

	command_path = find_command_directory(args[0]);

	if (command_path != NULL)
		args[0] = command_path;

	if (!check_executable(args[0]))
		return;

	fork_process(args, envp);
	free(command_path);
}

/**
 * run_shell - runs the simple shell program
 * @argv: double pointer to character args (command and its arguments)
 * @envp: an array of strings representing the environment variables
 */
void run_shell(char **argv __attribute__((unused)), char **envp)
{
	char *input = NULL;
	size_t input_len = 0;
	char *args[] = {NULL, NULL};

	while (1)
	{
		if (isatty(STDIN_FILENO))
			print_prompt();

		read_input(&input, &input_len);

		args[0] = input;

		handle_input(input, args, envp);
	}

	free(input);
}
