#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers Do not print 2 and 4.
 *
 * Return: Returns void
 */
void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; ++i)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
