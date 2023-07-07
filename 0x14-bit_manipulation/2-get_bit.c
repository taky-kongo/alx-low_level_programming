#include "main.h"

/**
 * get_bit - the value of a bit at a given index.
 * @n: th value to enter
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number = n;
	unsigned int count = 0, j;
	int l, value, i;

	while (number > 0)
	{
		count++;
		number = number >> 1;
	}
	if (index > count -1)
		return (-1);
	number = n;
	j = count - 1;
	for (i = (count - 1); i >= 0; i--, j--)
	{
		l = (number >> i) & 1;
		if (j == index)
			value = l;
	}
	return (value);
}
