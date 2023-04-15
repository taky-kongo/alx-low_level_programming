#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: If new_size > old_size, the “added” memory
 * should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 * If new_size is equal to zero, and ptr is not NULL
 * then the call is equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = malloc(old_size);
	if (new_size > old_size)
	{
		ptr = malloc(old_size + (new_size - old_size));
	}
	if (new_size == old_size)
	{
		ptr = malloc(old_size);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != 0)
	{
		return (NULL);
		free(ptr);
	}
	return (ptr);
}
