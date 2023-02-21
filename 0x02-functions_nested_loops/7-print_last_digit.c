#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: The character to check
 *
 * Return: Returns the value of the last digit.
 *
 */

int print_last_digit(int n)
{
	int last_digit = _abs(n) % 10;

	return (last_digit);
}
