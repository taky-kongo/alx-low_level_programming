#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: n is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{

		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
