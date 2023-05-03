#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: a new node
 * @n: the value of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *lastnode;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;

	if (*head == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = node;

	return (*head);
}
