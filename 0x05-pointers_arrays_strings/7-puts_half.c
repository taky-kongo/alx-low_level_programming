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
	int j;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		str = str - n;
		for (j = n; j < i; j++)
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		str = str - n;
		for (j = n; j < i - 1; j++)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
