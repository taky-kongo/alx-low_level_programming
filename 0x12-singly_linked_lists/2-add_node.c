#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the list that receive a new node
 * @str: the string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int count = 0;
	char *new_str;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (new_str[count] != 0)
	{
		count++;
	}
	ptr->str = new_str;
	ptr->len = count;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
