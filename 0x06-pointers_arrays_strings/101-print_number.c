#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: the integer to print
 */
void print_number(int n)
{
	int l, k, m, o, p, q;

	if (n >= 1000000)
		_putchar(n / 1000000 + '0');
	q = n % 1000000;
	if (n >= 100000)
		_putchar(q / 100000 + '0');
	p = q % 100000;
	if (n >= 10000)
		_putchar(p / 10000 + '0');
	o = p % 10000;
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
	else
	{
		_putchar('-');
		if (n <= -1000000)
			_putchar(-n / 1000000 + '0');
		q = -n % 1000000;
		if (n <= -100000)
			_putchar(q / 100000 + '0');
		p = q % 100000;
		if (n <= -10000)
			_putchar(p / 10000 + '0');
		o = p % 10000;
		if (n <= -1000)
			_putchar(o / 1000 + '0');
		l = o % 1000;
		if (n <= -100)
			_putchar(l / 100 + '0');
		k = l % 100;
		if (n <= -10)
			_putchar(k / 10 + '0');
		m = k % 10;
		_putchar(m / 1 + '0');
	}
}
