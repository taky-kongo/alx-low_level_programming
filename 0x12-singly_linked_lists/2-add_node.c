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

	ptr_str = (list_t *)malloc(sizeof(list_t));
	if (ptr_str == NULL)
		return (NULL);
	ptr_str->str = strdup(str);
	ptr_str->next = (*head);
	(*head) = ptr_str;

	return (ptr_str);
}
