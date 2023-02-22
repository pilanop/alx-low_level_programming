#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: The number to to print the max times table
 *
 * Return: times table
 */
void print_times_table(int n)
{
	int row, column, result;

	for (row = 0; row <= n; row++)
	{
		if (n > 15 || n < 0)
			break;
		_putchar('0');

		for (column = 1; column <= n; column++)
		{
			result = row * column;

			if (column == 0)
				_putchar('0');
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(',');
			_putchar(' ');
			_putchar(result / 100 + '0');
			_putchar((result / 10) % 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
