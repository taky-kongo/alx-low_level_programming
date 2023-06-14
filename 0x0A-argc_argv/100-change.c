#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change
 *
 * @argc: the size of the argument
 * @argv: the array of the argument
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents != 0)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10 && cents < 25)
				cents = cents - 10;
			else if (cents >= 5 && cents < 10)
				cents = cents - 5;
			else if (cents >= 2 && cents < 5)
				cents = cents - 2;
			else
				cents = cents - 1;
			count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
