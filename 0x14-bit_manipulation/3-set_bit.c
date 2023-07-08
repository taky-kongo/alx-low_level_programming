#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;
	unsigned int count, i;
	int count_j = 0, j;

	temp = *n;
	while (*n > 0)
	{
		count_j++;
		count++;
		*n = *n >> 1;
	}
	*n = temp;

	if ((count - 1) > index)
	{
		i = count - 1;
		for (j = (count_j - 1); j >= 0; j--, i--)
		{
			if (i != index)
				*n = ((*n >> i) & 1);
			else
				*n = (~(*n >> i) & 1);
		}
	}
	else if ((count - 1) == index)
	{
		*n = ((*n >> index) & 1);
		for (j = (int)index; j >= 0; j--)
			*n = ((*n >> j) & 1);
	}
	else
	{
		*n = (~(*n >> index) & 1);
		for (j = (int)(index - 1); j >= 0; j--)
			*n = ((*n >> j) & 1);
	}
	return (1);
}
