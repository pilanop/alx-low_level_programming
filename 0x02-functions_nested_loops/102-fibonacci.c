#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int n1 = 1, n2 = 2, fib;

	printf("%ld, %ld", n1, n2);

	for (i = 2; i < 50; i++)
	{
		fib = n1 + n2;
		printf(", %ld", fib);
		n1 = n2;
		n2 = fib;
	}

	printf("\n");
}
