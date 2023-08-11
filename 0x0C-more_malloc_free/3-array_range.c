#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *tab;
	int i, j;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(int) * (max + 1 - min));
	if (tab == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < (max + 1 - min); i++, j++)
	{
		tab[i] = j;
	}
	return (tab);
}
