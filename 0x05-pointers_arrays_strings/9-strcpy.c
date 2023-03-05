#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 *
 * @dest: char to check
 * @src: char to check
 *
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
