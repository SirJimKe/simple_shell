#include "main.h"

/**
 * print_prompt - prints ($) on the stdout
 */
void print_prompt(void)
{
	char prompt[] = "($) ";
	int i = 0;

	while (prompt[i] != '\0')
	{
		_putchar(prompt[i]);
		i++;
	}
	fflush(stdout);
}
