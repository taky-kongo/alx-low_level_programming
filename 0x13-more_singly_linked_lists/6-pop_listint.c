#include "lists.h"
/**
 * pop_listsint - deletes the head node of a listint_t linked lis
 *
 * @head: a node
 *
 * Return: the head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);

	data = temp->n;
	node = temp->next;
	free(head);

	return (data);
}
