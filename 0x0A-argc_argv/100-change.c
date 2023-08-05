#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins.
 * @argc: The size of array
 * @argv: The array of arguments
 *
 * Return: 1 if the number of arguments passed to your program is not exactly 1
 * or 0 if success
 */
int main(int argc, char **argv)
{
	int cents = 0, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents != 0)
	{
		while (cents >= 25)
		{
			cents = cents - 25;
			count++;
		}
		while (cents >= 10 && cents < 25)
		{
			cents = cents - 10;
			count++;
		}
		while (cents < 10 && cents >= 5)
		{
			cents = cents - 5;
			count++;
		}
		while (cents < 5 && cents >= 2)
		{
			cents = cents - 2;
			count++;
		}
		while (cents < 2 && cents >= 1)
		{
			cents = cents - 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
