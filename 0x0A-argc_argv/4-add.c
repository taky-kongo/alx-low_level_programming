#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: The number of command line arguments
 *
 * Return: 0 (success) or 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc > 2)
		printf("%d\n", add);
	return (0);
}
