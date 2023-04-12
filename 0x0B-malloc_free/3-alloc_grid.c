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
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(tab[i]);
			}
			free(tab);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
	for (i = 0; i < height; i++)
	{
		free(tab[i]);
	}
	free(tab);
}
