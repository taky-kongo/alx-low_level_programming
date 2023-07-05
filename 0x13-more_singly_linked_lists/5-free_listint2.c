#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the linked list to enter
 */
void free_listint2(listint_t **head)
{
	listint_t *clear;

	if (*head == NULL)
		return;
	while ((*head)->next)
	{
		clear = *head;
		(*head) = (*head)->next;
		free(clear);
	}
	free(*head);
	*head = NULL;
}
