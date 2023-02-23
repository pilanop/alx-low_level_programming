#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: The number That will be checked if it's uppercase character.
 *
 * Return: Returns 1 if c is uppercase
 *         Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
