#include "main.h"

/**
 * create_array - a array of chars, and initializes it with a specific char.
 * @size: The size of the array
 * @c: The char
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i = 0;

	tab = malloc(sizeof(char) * size);
	if (tab == NULL || size == 0)
		return (NULL);

	for (; i < size; i++)
		tab[i] = c;

	return (tab);
}
