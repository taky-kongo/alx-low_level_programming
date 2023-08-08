#include "main.h"

/**
 * alloc_grid - a 2 dimensional array of integers.
 * @width: the width of array
 * @height: the height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
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
}
