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
	unsigned int count;

	temp = *n;
	while (*n > 0)
	{
		count++;
		*n = *n >> 1;
	}
	*n = temp;

	if ((index > (count - 1)) && (index < 32))
		return (-1);
	*n = ((1 << index) ^ *n);
	return (1);
}
