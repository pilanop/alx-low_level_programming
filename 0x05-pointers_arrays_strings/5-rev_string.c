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
	int length = 0;
	int j = 0;
	int i;
	char temp;

	while (s[j] != '\0')
	{
		length++;
		j++;
	}

	for (i = 0; i < (length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
