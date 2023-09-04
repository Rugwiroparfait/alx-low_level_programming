#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Memory where data is stored.
 * @src: Memory where data is copied from.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	for (; r < n; r++) /* Changed 'i' to 'n' for consistency */
	{
		dest[r] = src[r];
	}

	return (dest);
}
