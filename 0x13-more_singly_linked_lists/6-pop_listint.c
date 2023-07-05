#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: the linked list to enter
 *
 * Return:the head node’s data (n) or if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node, *ptr;

	if (head == NULL)
		return (0);
	node = *head;
	ptr = (*head)->next;
	data = node->n;
	free(node);
	*head = ptr;
	return (data);
}
