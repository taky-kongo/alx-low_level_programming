#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the node
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list or
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (node->next != NULL && i != index)
	{
		i++;
		node = node->next;
	}

	if (index > i)
	{
		node = head;
	}
	return (node);
}
