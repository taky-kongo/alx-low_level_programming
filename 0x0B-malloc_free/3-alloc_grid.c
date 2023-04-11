#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array.
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, size;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = width * height;
	tab = (int **)malloc(sizeof(int *) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = 0;
	}
	return (tab);
	free(tab);
}
