#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	for (char i = '0'; i <= 'f' ; i++)
	{
		if (i > 57 && i < 97)
		{
			continue;
		}
		putchar(i);
	}

	putchar('\n');

	return (0);
}

