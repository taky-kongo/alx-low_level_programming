#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: the list to enter
 * @index: the index of the node
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0, j = 0;
	listint_t *count, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	count = head;
	while (count)
	{
		i++;
		count = count->next;
	}

	if (index > i)
		return (NULL);

	while (j < index && tmp)
	{
		j++;
		tmp = tmp->next;
	}
	return (tmp);
}
