#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: the size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(sizeof(b) + b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
	free(check);
}
