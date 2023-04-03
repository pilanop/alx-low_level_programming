#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *ptr;
	ptr = h;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", h->len, h->str);

	return i;
}
