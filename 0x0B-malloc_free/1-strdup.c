#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 *           allocated space in memory, which contains a
 *           copy of the string given as a parameter.
 *
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
