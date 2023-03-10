#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
