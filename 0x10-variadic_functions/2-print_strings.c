#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the separator between the numbers
 * @n: the number of paramaters to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(args);
}
