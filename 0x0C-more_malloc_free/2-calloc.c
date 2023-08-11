#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the numb of elements
 * @size: the size of element
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		tab[i] = 0;
	return (tab);
}
