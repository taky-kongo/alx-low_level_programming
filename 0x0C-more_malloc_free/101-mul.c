#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two positive numbers.
 *
 * @argc: the number of argument
 * @agrv: the array of argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
