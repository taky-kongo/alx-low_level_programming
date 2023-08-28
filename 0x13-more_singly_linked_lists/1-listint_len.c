#include "lists.h"

/**
 * listint_len - counts the number of nodes in the linked list
 * @h: the list to enter
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
