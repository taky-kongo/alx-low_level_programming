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
	ptr_str->next = *head;
	*head = ptr_str;

	return (ptr_str);
}
