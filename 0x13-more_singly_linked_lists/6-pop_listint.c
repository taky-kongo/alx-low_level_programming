#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked lis
 *
 * @head: a node
 *
 * Return: the head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node = *head;

	if (*head == NULL)
		return (0);

	data = node->n;
	node = node->next;
	free(*head);
	*head = node;

	return (data);
}
