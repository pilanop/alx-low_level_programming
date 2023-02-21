#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet, in
 *                       lowercase, followed by a new line.
 *
 * Return: prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char i;
	int loop;

	for (loop = 0; loop <= 9; loop++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
