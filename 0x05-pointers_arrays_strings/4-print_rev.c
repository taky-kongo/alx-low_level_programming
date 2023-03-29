#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: string to enter
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;
	for (i = j; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
