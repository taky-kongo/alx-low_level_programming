#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the list that to receive
 * @str: the string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *ptr;
	char *new_str;
	unsigned int count = 0;

	ptr = *head;
	tmp = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (new_str[count] != 0)
		count++;
	tmp->str = new_str;
	tmp->len = count;
	tmp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;

	return (ptr);
}
