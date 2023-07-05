#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the linked list to enter
 */
void free_listint2(listint_t **head)
{
	listint_t *clear;

	if (*head == NULL)
	{
		*head = NULL;
		return;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	else
	{
		while ((*head)->next)
		{
			clear = *head;
			(*head) = (*head)->next;
			free(clear);
		}
		free(*head);
		*head = NULL;
	}
}
