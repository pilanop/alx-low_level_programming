#include "main.h"

/**
 * check - helper function that calculates
 * the square root recursively
 *
 * @n: input number
 * @i: iterator
 *
 * Return: the natural square root of n
 */
int check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check(n, 1));
}
