#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: The string to enter
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		if (*s == '\0')
		{
			return;
		}
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
