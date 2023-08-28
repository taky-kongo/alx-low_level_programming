#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the linked list
 * @n: the number to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nadd, *tmp;

	tmp = (*head);
	nadd = malloc(sizeof(listint_t));
	if (nadd == NULL)
		return (NULL);

	nadd->n = n;
	nadd->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = nadd;
		return (*head);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = nadd;

	return (*head);
}
