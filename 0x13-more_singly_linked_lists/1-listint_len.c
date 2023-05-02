#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: a list
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number = 0;

	while (h != NULL)
	{
		++number;
		h = h->next;
	}
	return (number);
}
