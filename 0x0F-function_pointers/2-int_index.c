#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: the array to enter
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, b, c = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		b = ((*cmp)(array[i]));
		if (b != 0)
		{
			c++;
			break;
		}
	}
	if (c == (size - 1))
		i = -1;
	return (i);
}
