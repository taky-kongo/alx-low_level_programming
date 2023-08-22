#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 * @n: the number of parameters
 *
 * Return: If n == 0, return 0 or the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	return (sum);
}
