#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the linked list to free
 */
void free_listint(listint_t *head)
{
	listint_t *clear;

	if (head == NULL)
	{
		return;
	}
	if (head->next == NULL)
	{
		free(head);
		head = NULL;
		return;
	}
	while (head->next)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
	free(head);
	head = NULL;
}
