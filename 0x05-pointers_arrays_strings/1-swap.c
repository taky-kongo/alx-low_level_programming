#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: The first number to exchange
 * @b: The second number to exchange
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
