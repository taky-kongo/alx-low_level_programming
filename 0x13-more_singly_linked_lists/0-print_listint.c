#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: a list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int number = 0;

	while (h != NULL)
	{
		++number;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}
