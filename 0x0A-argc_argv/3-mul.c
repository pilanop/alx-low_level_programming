#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if Success or 1 if Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", (*argv[1] * *argv[2]));
	}
}
