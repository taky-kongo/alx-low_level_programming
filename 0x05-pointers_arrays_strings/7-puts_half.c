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

	while (*str != '\0')
	{
		i++;
		str++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		str = str - n;
		while (n < i)
		{
			_putchar(*str);
			n++;
			str++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		str = str - n;
		while (n < i)
		{
			_putchar(*str);
			n++;
			str++;
		}
	}
	_putchar('\n');
}
