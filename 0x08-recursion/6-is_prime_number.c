#include "main.h"

/**
 * check - checks if a given number is prime
 *
 * @n: the number to check
 * @i: the divisor
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check(n, i + 1));
}

/**
 * is_prime_number - checks if a given number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
