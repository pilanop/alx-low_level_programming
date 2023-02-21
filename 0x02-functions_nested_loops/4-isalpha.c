#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character.
 *
 * @c: The character to check
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase Returns 0
 *         otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '10')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
