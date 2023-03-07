#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search
 * @accept: pointer to string of acceptable bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
				return s;
			temp++;
		}
		s++;
	}
	return NULL;
}
