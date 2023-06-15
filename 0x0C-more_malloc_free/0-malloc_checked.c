#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: the size of malloc
 *
 * Return:  a pointer to the allocated memory
 * or process termination with a status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_str;

	malloc_str = malloc(b);
	if (malloc_str == NULL)
		exit(98);

	return (malloc_str);
}
