#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer to calculate factorial
 *
 * Return: factorial of n or -1 if n is negative
 */

int factorial(int n)
{
	if (n == 0)
		return 1;
	else if (n < 0)
		return -1;
	return (factorial(n - 1) * n);
}
