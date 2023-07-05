#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the linked list to calculate
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
