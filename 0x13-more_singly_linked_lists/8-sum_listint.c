#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data n of a listint_t linked list
 *
 * @head: a node
 *
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (head == NULL)
		return (0);

	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
