#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * @array: the array
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array ==  0 || size <= 0 || cmp == 0)
		return (-1);
	while (i != size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
