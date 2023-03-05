#include "main.h"
/**
 * _strcmp - compare 2 string
 *
 * @s1:string
 * @s2:strmp
 *
 * Return:int
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2 || *s1 > *s2)
		return (*s1 - *s2);
	else
		return (0);
}
