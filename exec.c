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
		exit(EXIT_SUCCESS);
	}
}

/**
 * find_command_directory - checks if a command exists
 * @command: the command name
 * Return: directory or NULL
 */
char *find_command_directory(const char *command)
{
	char *path_env = _getenv("PATH"), *path_copy, *path_dir, *full_path;

	if (path_env == NULL)
	{
		perror("path");
		return (NULL);
	}

	path_copy = _strdup(path_env);
	path_dir = _strtok(path_copy, ":");

	while (path_dir != NULL)
	{
		size_t path_dir_len = _strlen(path_dir);
		size_t command_len = _strlen(command);

		full_path = (char *)malloc(path_dir_len + command_len + 2);
		if (full_path == NULL)
		{
			perror("malloc");
			free(path_copy);
			return (NULL);
		}

		_strcpy(full_path, path_dir);
		_strcat(full_path, "/");
		_strcat(full_path, command);

		if (access(full_path, F_OK) == 0)
		{
			free(path_copy);
			return (full_path);
		}

		free(full_path);
		path_dir = _strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
