#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @n: is the number of elements of the array
 * @a: The reversal table
 */
void reverse_array(int *a, int n)
{
	int j;
	int tmp;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[n - j - 1];
		a[n - j - 1] = a[j];
		a[j] = tmp;
	}
}
