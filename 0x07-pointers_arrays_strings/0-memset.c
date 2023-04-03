#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: area pointed to by s
 * @b: the constant byte
 * @n: the first n bytes
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
