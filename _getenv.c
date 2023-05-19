#include "main.h"

/**
 * _getenv - retrieves the value of environment variables
 * @name: name of the environment variable
 * Return: NULL or a pointer to the value of the variable
 */
char *_getenv(const char *name)
{
	size_t len;
	int i;

	len = _strlen(name);

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(name, environ[i], len) == 0 &&
		    environ[i][len] == '=')
			return (&environ[i][len + 1]);
	}

	return (NULL);
}
