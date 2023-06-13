#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer
 *
 * @width: table width
 * @height: table height
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **line;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	line = (int **)malloc(sizeof(int *) * height);
	if (line == NULL)
	{
		free(line);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		line[i] = (int *)malloc(sizeof(int) * width);
		if (line == NULL)
		{
			free(line);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			line[i][j] = 0;
		}
	}
	return (line);
	for (i = 0; i < height; i++)
	{

		free(line[i]);
	}
	free(line);
}
