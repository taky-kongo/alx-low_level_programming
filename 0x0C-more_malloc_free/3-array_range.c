#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @max: maximum number
 * @min: minimum number
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *tab;

	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (NULL);
	i = 0;
	for (; i < max - min; i++, min++)
	{
		tab[i] = min;
	}
	return (tab);
	free(tab);
}
