#include "main.h"

/**
 * _strcat - concat 2 string
 *
 * @dest:char
 * @src:char
 *
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
