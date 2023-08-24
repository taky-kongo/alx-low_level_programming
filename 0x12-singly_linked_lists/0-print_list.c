#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list to enter
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int numb_node = 0;
	const list_t *ptr = NULL;

	ptr = h;
	if (h == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
			printf("[0] (nil)\n");
		numb_node++;
		ptr = ptr->next;
	}
	return (numb_node);
}
