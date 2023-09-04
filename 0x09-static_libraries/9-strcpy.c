#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	/* Calculate the length of the source string */
	while (src[l] != '\0')
	{
		l++;
	}

	/* Copy the source string to the destination */
	for (int x = 0; x <= l; x++) /* Changed x < l to x <= l */
	{
		dest[x] = src[x];
	}

	return (dest);
}
