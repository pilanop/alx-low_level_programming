#include "main.h"

/**
 * print_numbers - a function that prints the numbers.
 *
 * Return: Returns void
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
