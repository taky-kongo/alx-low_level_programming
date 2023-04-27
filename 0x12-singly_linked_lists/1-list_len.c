#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: a list
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		++c;
		h = h->next;
	}
	return (c);
}
