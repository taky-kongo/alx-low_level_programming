#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: A node
 */
void free_listint2(listint_t **head)
{
	listint_t *clear;
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		clear = temp->next;
		free(temp);
		temp = clear;
	}
	*head = NULL;
}
