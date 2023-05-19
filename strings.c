#include "main.h"
/**
 * _strcpy - Copies the characters from source
 * to destination string
 * @dest: Destination string
 * @src: Source string
 * Return: Destination string
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
 * @dest: Destination string
 * @src: Source string
 * Return: Concatenated string
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
	dest = '\0';
	return (original_dest);
}
/**
 * _strlen - Finds the length of a string
 * @str: Input string
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
 * _strncmp - Compares number of characters from two
 * strings
 * @str1: String 1
 * @str2: String 2
 * @n: The number of bytes to be compared
 * Return: 0 or the difference betweeen the corresponding characters
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
 * _strdup - Creates a duplicate of a string
 * @str: Input string
 * Return: A duplicate
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
