#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the linked list to enter
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list else null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *get_node;
	unsigned int i = 0;

	ptr = head;
	while (ptr)
	{
		if (index == i)
		{
			get_node = ptr;
			return (get_node);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
