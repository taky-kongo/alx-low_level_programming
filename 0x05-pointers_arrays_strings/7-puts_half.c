#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: The string to enter
 */
void puts_half(char *str)
{
	int n;
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		while (n <= i)
		{
			if (n != '\0')
				_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (n <= i)
		{
			if (n != '\0')
				_putchar(*(str + n));
			n++;
		}
	}
	_putchar('\n');
}
