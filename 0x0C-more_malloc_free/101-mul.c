#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers.
 *
 * @argc: the number of arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int *mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	mul = malloc(sizeof(*mul));
	if (mul == NULL)
		return (0);

	*mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul[0]);

	free(mul);
	return (0);
}
