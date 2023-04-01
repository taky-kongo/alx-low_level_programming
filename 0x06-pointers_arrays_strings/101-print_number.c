#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: the integer to print
 */
void print_number(int n)
{
	int l, k, m, o;

	if (n >= 10000)
		_putchar(n / 10000 + '0');
	o = n % 10000;
	if (n >= 1000)	
		_putchar(o / 1000 + '0');
	l = o % 1000;
	if (n >= 100)	
		_putchar(l / 100 + '0');
	k = l % 100;
	if (n >= 10)
		_putchar(k / 10 + '0');
	m = k % 10;
	if (n >= 0)
		_putchar(m / 1 + '0');
}
