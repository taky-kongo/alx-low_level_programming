#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list to enter
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
	free(temp);
}
