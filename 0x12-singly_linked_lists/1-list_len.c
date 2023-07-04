#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: the link list to enter
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
