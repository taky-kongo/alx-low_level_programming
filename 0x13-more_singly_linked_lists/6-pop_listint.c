#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the list to enter
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = tmp;

	return (x);
}
