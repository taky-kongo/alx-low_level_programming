#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 *
 * @head: a node to enter
 * @str: a string to enter
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr_str;
	char *new_str;
	int len = 0;

	ptr_str = malloc(sizeof(list_t));
	if (ptr_str == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	while (new_str[len])
		len++;
	ptr_str->str = new_str;
	ptr_str->len = len;
	ptr_str->next = (*head);
	(*head) = ptr_str;

	return (ptr_str);
}
