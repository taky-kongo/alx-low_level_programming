#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the linked list to enter
 */
void free_listint2(listint_t **head)
{
	listint_t *clear, *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		clear = temp->next;
		free(temp);
		temp = clear;
	}
	*head = NULL;
}
