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

/**
 * _puts - writes a string to stdout
 * @str: pointer to string
 */
void _puts(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
