#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Returns void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; ++i)
	{
		if (i <= 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
