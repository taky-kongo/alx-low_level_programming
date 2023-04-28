#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: a list to enter
 * @str: a string to enter
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr_str;

	ptr_str = malloc(sizeof(*ptr_str));

	while (head != NULL)
	{
		ptr_str = ptr_str->next;
	}
	ptr_str->str = strdup(str);
	ptr_str->next = NULL;

	return (ptr_str);
}
