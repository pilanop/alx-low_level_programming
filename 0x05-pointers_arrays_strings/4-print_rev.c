#include "main.h"

/**
 * print_rev - printing a string in reverse
 *
 * @s: the string to be printed in rev
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
