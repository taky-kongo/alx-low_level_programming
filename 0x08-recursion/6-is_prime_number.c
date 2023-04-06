#include "main.h"

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 *
 * @n: a number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n / n == 0 && n / 1 == 0)
	{
		return (1);
	}
	else
		return (0);
	is_prime_number(n / (n - 1));
}
