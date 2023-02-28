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
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}