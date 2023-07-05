#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the list linked to enter
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
