#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @s: The string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
