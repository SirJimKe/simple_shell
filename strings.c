#include "main.h"
<<<<<<< HEAD
/**
 * _strcpy - Copies the characters from source
 * to destination string
 * @dest: Destination string
 * @src: Source string
 * Return: Destination string
=======

/**
 * _strcpy - copies the characters from the source to the destination string
 * @dest: destination string
 * @src: source string
 * Return: destination string
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
 */
void _strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
<<<<<<< HEAD
	*dest = '\0';
}
/**
 * _strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Concatenated string
=======

	*dest = '\0';
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
 */
char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;
<<<<<<< HEAD
=======

>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
<<<<<<< HEAD
	dest = '\0';
	return (original_dest);
}
/**
 * _strlen - Finds the length of a string
 * @str: Input string
=======

	*dest = '\0';

	return (original_dest);
}


/**
 * _strlen - finds the length of the string
 * @str: input string
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
 * Return: unsigned int
 */
size_t _strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
		ptr++;
<<<<<<< HEAD
	return (ptr - str);
}
/**
 * _strncmp - Compares number of characters from two
 * strings
 * @str1: String 1
 * @str2: String 2
 * @n: The number of bytes to be compared
 * Return: 0 or the difference betweeen the corresponding characters
=======

	return (ptr - str);
}

/**
 * _strncmp - compares characters from two strings
 * @str1: first string
 * @str2: second string
 * @n: maximum number of characters to compare
 * Return: 0 or the difference between coresponding characters
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && *str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
<<<<<<< HEAD
=======

>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*str1 - (unsigned char)*str2);
}
<<<<<<< HEAD
/**
 * _strdup - Creates a duplicate of a string
 * @str: Input string
 * Return: A duplicate
=======

/**
 * _strdup - Creates a duplicate (copy) of a string (str)
 * @str: input string
 * Return: duplicate
>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
 */
char *_strdup(const char *str)
{
	size_t len = _strlen(str);
	char *duplicate;

	duplicate = (char *)malloc((len + 1) * sizeof(char));
<<<<<<< HEAD
	if (duplicate != NULL)
		_strcpy(duplicate, str);
=======

	if (duplicate != NULL)
		_strcpy(duplicate, str);

>>>>>>> f71062b04eccb0757dbd34e2e68dad6400f5399c
	return (duplicate);
}
