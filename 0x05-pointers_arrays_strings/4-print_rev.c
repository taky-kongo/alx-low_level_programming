#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: string to enter
 */
void print_rev(char *s)
{
	int j = 0;

	do {
		j++;
	} while ((*(s + j)) != '\0');
	do {
		_putchar((*(s + j)));
		j--;
	} while (j >= 0);
	_putchar('\n');
}
