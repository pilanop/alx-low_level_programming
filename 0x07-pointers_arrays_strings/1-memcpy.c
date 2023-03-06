#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @src: source
 * @dest: the memory area
 * @n: bytes from memory area @src
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
