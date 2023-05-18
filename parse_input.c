#include "main.h"

/**
 * parse_input - parse the input string to get executable name and arguments
 * @input: a string as input parameter
 * @args: a pointer to a character pointer args
 * Return: 0 or 1
 */
int parse_input(char *input, char **args)
{
	char *token;
	int i;

	token = strtok(input, " \n");
	if (!token)
		return (0);

	args[0] = token;
	i = 1;

	while ((token = strtok(NULL, " \n")))
		args[i++] = token;
	args[i] = NULL;

	return (1);
}
