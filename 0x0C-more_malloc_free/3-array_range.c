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
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == 0)
		return (NULL);
	i = 0;
	while (tab[i] < (max - min + 1) && min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
	free(tab);
}
