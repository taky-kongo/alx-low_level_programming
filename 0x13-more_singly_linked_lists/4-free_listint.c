#include "lists.h"

/**
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *clear;

	if (head == NULL)
	{

	}
	if (head->next == NULL)
	{
		free(head);
		head = NULL;
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
