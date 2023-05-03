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

	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
}
