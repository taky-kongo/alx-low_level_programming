#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the separator between the numbers
 * @n: the number of number to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
}
