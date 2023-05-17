#include "main.h"

/**
 * run_command - Takes a command as input and searches
 * for its path in the directories specified in the
 * PATH environmental variable
 * @command: The command input
 * Return: Nothing
 */

void run_command(const char *command)
{
	char *_path_env = getenv("PATH");
	char *_path = strtok(_path_env, ":");

	while (_path != NULL)
	{
		char _command_path[256];
		snprintf(_command_path, sizeof(_command_path), "%s%s", _path,
				command);

		if (access(_command_path, X_OK) == 0)
		{
			execl(_command_path, command, NULL);
			break;
		}
		_path = strtok(NULL, ":");
	}
	printf("command not found: %s\n", command);
}
