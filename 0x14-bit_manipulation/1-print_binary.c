#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = n, binary;
	int numb_op = 0, i;

	if (number == 0)
	{
		_putchar('0');
	}
	else
	{
		while (number > 0)
		{
			numb_op++;
			number = number >> 1;
		}
		number = n;
		for (i = (numb_op - 1); i >= 0; i--)
		{
			binary = (number >> i) & 1;
			_putchar(binary + '0');
		}
	}
}
