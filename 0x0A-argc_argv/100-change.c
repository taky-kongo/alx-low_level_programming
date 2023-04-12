#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 *
 * Return: Always 0(success) or 1
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int sum = 0;
	int cents;
	int count = 0;
	int i = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
	}
	while (cents != sum)
	{
		if (coins[i] > cents)
		{
			i++;
		}
		if (sum > cents)
		{
			sum = sum - coins[i];
			i++;
			count--;
		}
		sum = sum + coins[i];
		count++;
	}
	printf("%d\n", count);
	return (0);
}
