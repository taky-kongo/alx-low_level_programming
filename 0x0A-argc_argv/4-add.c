#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: The number of command line arguments
 *
 * Return: 0 (success) or 1.
 */
int main(int argc,char *argv[])
{
	int i;
	int add = 0;

	if (argc <= 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else if (*argv[i] >= 'A' && *argv[i] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
		else if (argc > 2)
		{
			add = add + atoi(argv[i]);
		}
	}
	if (argc > 2)
		printf("%d\n", add);
	return (0);
}
