#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	m = malloc(sizeof(char) * ((j + i) + 1));

	if (m == NULL)
		return (NULL);

	while (k != i)
	{
		m[k] = s1[k];
		k++;
	}

	while (k != (j + i) + 1)
	{
		m[k] = s2[l];
		l++;
		k++;
	}

	m[k] = '\0';

	return (m);
}
