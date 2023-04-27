#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: a list
 *
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	h = malloc(sizeof(*h));
	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		++c;
		h = h->next;
	}
	return (c);
}
