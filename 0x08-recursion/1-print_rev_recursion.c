#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: The string to enter
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
	}
	if (i < 0)
	{
		return;
	}
	if (*s == '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_print_rev_recursion(s);
}
