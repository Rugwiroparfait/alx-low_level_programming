#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append the source string to the destination */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the concatenated string */
	dest[i] = '\0';

	return (dest);
}
