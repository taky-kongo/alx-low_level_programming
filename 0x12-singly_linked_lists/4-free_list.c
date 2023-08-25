#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *temp;
	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;
}
