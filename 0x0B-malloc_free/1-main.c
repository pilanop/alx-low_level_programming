#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("First, solve the problem. Then, write the code.");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
