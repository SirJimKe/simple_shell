#include "main.h"

/**
 * _getline - A custom getline function
 * @input: Input command and arguments
 * @size: Buffer size allocated to input
 * @stream: The STDIN
 * Return: Number of characters passed to STDIN
 */

ssize_t _getline(char **input, size_t *size, FILE *stream)
{
	char ch;
	size_t len = 0;
	size_t buf_size = *size;
	char *line = *input;

	if (input == NULL || size == NULL || stream == NULL)
	{
		return (-1);
	}

	while ((ch = fgetc(stream)) != '\n')
	{
		if (len >= buf_size - 1)
		{
			buf_size *= 2;
			char *new_line = realloc(line, buf_size);

			if (new_line == NULL)
			{
				return (-1);
			}
			line = new_line;
		}
		line[len] = ch;
		len++;

		if (ch == '\n')
		{
			break;
		}
	}

	if (len == 0)
	{
		return (-1);
	}

	line[len] = '\0';
	*input = line;
	*size = buf_size;

	return (len);
}
