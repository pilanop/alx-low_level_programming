#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *
 * @c: The character to check
 *
 * Return: Returns 1 if c is lowercase
 *         Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
