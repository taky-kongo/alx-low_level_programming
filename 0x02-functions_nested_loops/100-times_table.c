#include "main.h"

/**
 * print_times_table - a function that prints the n times table, start with 0.
 *
 * @n: is greater than 15 or less than 0 the function should not print anything
 */
void print_times_table(int n)
{
	int i, j, l;

	if (n < 0 || n > 15)
	{

	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j % 10) + '0');
					if (j != n)
						_putchar(',');
				}
				else if ((i * j > 9) && (i * j < 100))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j / 10) + '0');
					_putchar((i * j % 10) + '0');
					if (j != n)
						_putchar(',');
				}
				else if (i * j > 99)
				{
					l = (i * j) % 100;
					_putchar(' ');
					_putchar((i * j / 100) + '0');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
