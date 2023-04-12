#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: The number of command line arguments
 * @argv: The array
 *
 * Return: 0 (success) or 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		add = add + atoi(argv[i]);
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
