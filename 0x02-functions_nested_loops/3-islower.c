#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
