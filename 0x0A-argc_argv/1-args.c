#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: the number of command line arguments
 * @argv: the array
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
