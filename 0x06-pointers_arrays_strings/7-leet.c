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
	int j, k;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; letter[k] != '\0'; k++)
		{
			if (s[j] == letter[k])
			{
				s[j] = number[k];
			}
		}
	}
	return (s);
}
