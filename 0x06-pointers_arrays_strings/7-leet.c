#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: The string to be encoded
 *
 * Return: s The encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int l = 0;
	int j, k;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	while (s[i] != '\0')
	{
		i++;
	}
	while (letter[l] != '\0')
	{
		l++;
	}
	for (j = 0; j < i; j++)
	{
		for (k = 0; k < l; k++)
		{
			if (s[j] == letter[k])
			{
				s[j] = number[k];
			}
		}
	}
	return (s);
}
