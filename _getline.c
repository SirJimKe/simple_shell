#include "main.h"

/**
 * _getline - reads characters from the specified stream
 * @lineptr: A pointer to a pointer to a character
 * @n: pointer to a size_t variable
 * @stream: the STDIN
 * Return:  the number of characters read
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int c;
	size_t i = 0;
	char *temp;

	if (lineptr == NULL || n == NULL || stream == NULL)
		return (-1);

	if (*lineptr == NULL || *n == 0)
	{
		*lineptr = malloc(INITIAL_BUFFER_SIZE);
		if (*lineptr == NULL)
			return (-1);
		*n = INITIAL_BUFFER_SIZE;
	}
	while ((c = fgetc(stream)) != EOF)
	{
		(*lineptr)[i++] = (char)c;

		if (i >= *n - 1)
		{
			*n *= 2;
			temp = realloc(*lineptr, *n);
			if (temp == NULL)
			{
				free(*lineptr);
				return (-1);
			}
			*lineptr = temp;
		}

		if (c == '\n')
			break;
	}

	(*lineptr)[i] = '\0';

	return ((ssize_t)i);
}
