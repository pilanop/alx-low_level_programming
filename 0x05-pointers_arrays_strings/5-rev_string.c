#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 * @s: The string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	char tmp;

	for (j = 0; s[j] != '\0'; j++)
		continue;

	j -= 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
