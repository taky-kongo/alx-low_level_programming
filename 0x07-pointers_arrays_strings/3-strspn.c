#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: a string
 * @accept: a prefix substring.
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int j;

	while (s[i] != ' ')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
		i++;
	}
	return (k);
}
