#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stddef.h>

/**
 * free_list - a function that frees a list_t list
 *
 * @head: a list to enter
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
		head = NULL;
	}
}
