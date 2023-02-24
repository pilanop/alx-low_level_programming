#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: s the number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
