#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: character input to be printed
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
