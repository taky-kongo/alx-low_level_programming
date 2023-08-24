#include "lists.h"

/**
 * list_len - count the number of elements in a linked list_t list.
 * @h: the linked list_t list to enter
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
