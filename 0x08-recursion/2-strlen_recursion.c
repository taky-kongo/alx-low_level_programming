#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: The string to enter
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	count++;
	s++;
	return (_strlen_recursion(s) + count);
}
