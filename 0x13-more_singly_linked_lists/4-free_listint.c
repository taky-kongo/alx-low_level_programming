#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: a list
 */
void free_listint(listint_t *head)
{
	listint_t *clear;

	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
}
