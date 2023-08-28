#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
