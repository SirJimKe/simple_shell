#include "main.h"

/**
 * _strcpy - copies the characters from the source to the destination string
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
void _strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */
char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}


/**
 * _strlen - finds the length of the string
 * @str: input string
 * Return: unsigned int
 */
size_t _strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
		ptr++;

	return (ptr - str);
}

/**
 * _strncmp - compares characters from two strings
 * @str1: first string
 * @str2: second string
 * @n: maximum number of characters to compare
 * Return: 0 or the difference between coresponding characters
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && *str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}

	if (n == 0)
		return (0);
	else
		return ((unsigned char)*str1 - (unsigned char)*str2);
}

/**
 * _strdup - Creates a duplicate (copy) of a string (str)
 * @str: input string
 * Return: duplicate
 */
char *_strdup(const char *str)
{
	size_t len = _strlen(str);
	char *duplicate;

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate != NULL)
		_strcpy(duplicate, str);

	return (duplicate);
}
