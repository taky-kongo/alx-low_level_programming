#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers that contain min and max
 *
 * @min: the minimum number of the array
 * @max: the maximum number of the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int nmb, i;
	int *tab;

	if (min > max)
		return (NULL);

	nmb = (max + 1) - min;
	tab = malloc(sizeof(int) * nmb);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < nmb; i++, min++)
		tab[i] = min;
	return (tab);
}
