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
	malloc(b);
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
	free(malloc(b));
}
