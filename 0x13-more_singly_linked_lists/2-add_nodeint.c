#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the linked list
 * @n: the number to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_add;

	n_add = malloc(sizeof(listint_t));
	if (n_add == NULL)
		return (NULL);

	n_add->n = n;
	n_add->next = *head;
	*head = n_add;

	return (*head);
}
