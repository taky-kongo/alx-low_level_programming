#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: The string to enter
 */
void _puts(char *str)
{
	int j = 0;

	while ((*(str + j)) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
