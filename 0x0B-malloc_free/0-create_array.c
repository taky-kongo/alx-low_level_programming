#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: the character
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return ('\0');
	}
	if (size == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
	free(str);
}
