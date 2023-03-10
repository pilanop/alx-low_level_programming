#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%c\n", *argv[argc]);
	return (0);
}