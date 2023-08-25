#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a list_t list.
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *tmp;
	int i = 0;

	tmp = *head;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (ptr->str != '\0')
	{
		printf("%d\n", i);
		i++;
	}
	ptr->len = i;
	ptr->next = NULL;

	if (tmp == NULL)
	{
		tmp = ptr;
		return (tmp);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;

	return (tmp);
}
