#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the linked list to enter
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (ptr)
		{
			if (i == idx)
			{
				new_node->next = ptr->next;
				ptr->next = new_node;
				return (ptr);
			}
			i++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}
