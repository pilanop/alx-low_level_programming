#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int i;
	int length = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		length++;
		j++;
	}

	if (length % 2 != 0)
		for (i = ((length - 1) / 2) + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	else
		for (i = (length / 2) + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
