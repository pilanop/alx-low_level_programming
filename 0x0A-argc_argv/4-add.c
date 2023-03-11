#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; ++i)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
