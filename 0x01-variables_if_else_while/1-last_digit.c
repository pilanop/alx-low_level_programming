#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	float lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %f and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %f and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %f and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
