#include "3-calc.h"

/**
 * main - displays the result of the operation
 *
 * @argc: the number of argument
 * @argv: the array of argument
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[2]);
	operator = argv[3];
	num2 = atoi(argv[4]);

	return (0);
}
