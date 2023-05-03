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

	while (head != NULL)
	{
		clear = head;
		head = head->next;
		free(clear);
	}
}
