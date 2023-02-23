#include <stdio.h>

/**
 * main - computes the sum of even-valued terms in the Fibonacci
 *                      sequence whose values do not exceed 4000000
 *
 * Return: The sum of the even-valued terms in the Fibonacci sequence.
 */

int main(void)
{
	int sum = 0;
	int n1 = 1, n2 = 2, fib;

	while (n2 <= 4000000)
	{
		if (n2 % 2 == 0)
		{
			sum += n2;
		}

		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
	}

	printf("%d\n", sum);

	return (0);
}
