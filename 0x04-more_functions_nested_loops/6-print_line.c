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

	for (i = 0; i <= n; ++i)
	{
		if (i <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
