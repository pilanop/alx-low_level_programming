#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an arrayof chars,
 *                and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	while (str[i] == '\0')
	{
		str[i] = c;
		i++;
	}
	return (str);
}
