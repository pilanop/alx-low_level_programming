#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 *
 * @s: string
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0;
	int r;
	int len;
	char up;
	int length = 0;
	int j = 0;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[j] != '\0')
	{
		length++;
		j++;
	}

	while (i <= length)
	{

		if (s[i] == arr[0] || s[i] == arr[1] || s[i] == arr[2] || s[i] == arr[3] || s[i] == arr[4] || s[i] == arr[5] || s[i] == arr[6] || s[i] == arr[7] || s[i] == arr[8] || s[i] == arr[9] || s[i] == arr[10] || s[i] == arr[11] || s[i] == arr[12])
		{
			if (s[i + 1] > 97)
			{
				len = s[i + 1] - 97;

				up = 65 + len;

				s[i + 1] = up;

				i++;
			}
			else
				i++;
		}
		else
			i++;
	}

	return (s);
}
