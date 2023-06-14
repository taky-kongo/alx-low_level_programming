#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: The size of the array
 * @argv: The array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
