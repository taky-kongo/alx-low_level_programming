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
	int i = 0;
	int *tab;

	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == 0)
		return (NULL);
	if (max == min)
		tab[0] = max;
	for (i = min; i < max + 1; i++)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
	free(tab);
}
