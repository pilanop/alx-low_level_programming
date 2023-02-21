#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 *               followed by a new line.
 *
 * @n: The first number
 *
 * Return: prints from n to 98.
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
