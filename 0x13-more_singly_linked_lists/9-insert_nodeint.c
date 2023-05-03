#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: a node
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: The value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new_node;
	unsigned int index = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	while (node && index != idx - 1)
	{
		index++;
		node = node->next;
	}
	new_node->n = n;
	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
