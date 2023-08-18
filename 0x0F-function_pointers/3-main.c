#include "3-calc.h"

/**
 * main - the main function
 * @ac: the size of array
 * @argv: the array of argument
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	int num1, num2;
	char *operator;
	int (*calcul)(int, int);
	int calc = 0;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calcul = get_op_func(operator);
	if (calcul == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = calcul(num1, num2);
	printf("%d\n", calc);
	return (0);
}
