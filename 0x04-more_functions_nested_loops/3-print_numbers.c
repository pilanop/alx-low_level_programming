#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9, followed by a new line.
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
}
