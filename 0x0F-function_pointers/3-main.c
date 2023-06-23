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
	int num1, num2, cal;
	char *operator;
	int (*calcul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	calcul = get_op_func(operator);
	if (calcul == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' || '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	cal = calcul(num1, num2);
	printf("%d\n", cal);
	return (0);
}
