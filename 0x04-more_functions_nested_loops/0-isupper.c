#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: The argument to enter
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
