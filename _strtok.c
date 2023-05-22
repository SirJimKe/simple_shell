#include "main.h"

/**
 * _strtok - works similarly to the strtok function
 * @str: input string
 * @delim: a delimiter string
 * Return: pointer to token
 */
char *_strtok(char *str, const char *delim)
{
	static char *buffer;
	char *token;

	if (str != NULL)
		buffer = str;

	if (buffer == NULL || *buffer == '\0')
		return (NULL);

	while (*buffer != '\0' && strchr(delim, *buffer) != NULL)
		buffer++;

	if (*buffer == '\0')
		return (NULL);

	token = buffer;
	while (*buffer != '\0' && strchr(delim, *buffer) == NULL)
		buffer++;

	if (*buffer != '\0')
		*buffer++ = '\0';

	return (token);
}
