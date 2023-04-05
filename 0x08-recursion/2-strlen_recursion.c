#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: The string to enter
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	s++;
	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		i = _strlen_recursion(s) + i + 1;
	}
	return (i);
}
