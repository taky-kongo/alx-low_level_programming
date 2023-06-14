#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and print the result
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= 1 || *argv[i] <= 9))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
		if (i == argc - 1)
			printf("%d\n", sum);
	}
	return (0);
}
