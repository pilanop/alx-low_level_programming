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

	while (*(s + i) != '\0')
	{
		i++;
	}
	int j;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
}
