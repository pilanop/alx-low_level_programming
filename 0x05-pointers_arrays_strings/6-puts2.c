#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int i;
	int length = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		length++;
		j++;
	}

	for (i = 0; i < length; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
