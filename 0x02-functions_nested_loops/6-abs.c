#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: The character to check
 *
 * Return: Returns 1 and prints + if n is greater than zero
 *         Returns 0 and prints 0 if n is zero
 *         Returns -1 and prints - if n is less than zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		int i = n * -1;
		_putchar(i);
	}
	else
	{
		_putchar(n);
	}
}
