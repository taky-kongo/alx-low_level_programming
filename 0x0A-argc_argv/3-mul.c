#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: The number of command line arguments
 * @argv: The array
 *
 * Return: 0 success
 * 1 error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);

	}
	return (0);
}
