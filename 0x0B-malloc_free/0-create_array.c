#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char
 *
 * @size: the size of the array
 * @c: the character to print
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (t == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
	free(t);
}
