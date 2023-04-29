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
	list_t *last_node;
	int len = 0;
	char *new_str;

	ptr_str = malloc(sizeof(list_t));
	if (ptr_str == NULL)
		return (NULL);
	new_str = strdup(str);
	if (str == NULL)
	{
		free(ptr_str);
		return (NULL);
	}
	while (str[len])
		len++;
	ptr_str->len = len;
	ptr_str->str = new_str;
	ptr_str->next = NULL;

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = ptr_str;

	return (last_node);
}
