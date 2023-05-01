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
	list_t *clear;

	if (head == NULL)
		return;

	clear = malloc(sizeof(list_t));
	if (clear == NULL)
		return;
	clear = head->next;
	free(head);
	head = NULL;
}
