#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: the memory area that receives
 * @src: the memory area to copy
 * @n: The number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = *dest; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
