#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters
 *
 * @n: the number of parameter
 *
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
