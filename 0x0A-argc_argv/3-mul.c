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
	int sum = 1;
	int i;

	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi((argv[i]));
		}
		printf("%d\n", sum);

	}
	return (0);
}
