#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, k, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = (i * j) % 10;
			c = (i * j) / 10;
			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
			}
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				if (j != 9)
					_putchar(',');
			}
			else if (i * j > 9)
			{
				_putchar(' ');
				_putchar(c + '0');
				_putchar(k + '0');
				if (j != 9)
					_putchar(',');
			}

		}
		_putchar('\n');
	}
}
