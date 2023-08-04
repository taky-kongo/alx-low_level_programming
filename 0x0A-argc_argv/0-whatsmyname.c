#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: The number of arguments.
 * @argv: The array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
