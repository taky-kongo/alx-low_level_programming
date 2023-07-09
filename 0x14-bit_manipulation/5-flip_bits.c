#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: the number to be reached
 * @m: the initial number
 *
 * Return: the number of bits to be inverted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o;
	unsigned int i = 0;

	o = n ^ m;
	while (o > 0)
	{
		i++;
		o = o & (o - 1);
	}
	return (i);
}
