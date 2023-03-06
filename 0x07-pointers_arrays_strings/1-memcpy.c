#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @src: string to fill
 * @dest: the constant byte
 * @n: bytes of the memory area pointed to by s
 *
 * Return: pointer to the memory area s
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
