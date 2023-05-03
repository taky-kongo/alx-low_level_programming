#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 *
 * @head: a node
 */
void free_list(list_t *head)
{
	list_t *clear;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		head = NULL;
		return;
	}
	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear->str);
		free(clear);
	}
}
