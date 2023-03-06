#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 *
 * @s:string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i = 0;
	int len;
	char up;
	int length = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		length++;
		j++;
	}

	while (i <= length)
	{
		if (s[i] >= 97)
		{
			len = s[i] - 97;

			up = 65 + len;

			s[i] = up;

			i++;
		}
		else
		{
			i++;
		}
	}
	return (s);
}
