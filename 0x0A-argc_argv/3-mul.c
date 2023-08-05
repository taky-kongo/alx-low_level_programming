#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: The size of the array
 * @argv: The array of the arguments
 *
 * Return: 0 if success or 1 if the program does not receive two arguments
 */
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
