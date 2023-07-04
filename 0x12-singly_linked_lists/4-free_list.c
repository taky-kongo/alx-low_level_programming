#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list to enter
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		head = NULL;
	}
	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
