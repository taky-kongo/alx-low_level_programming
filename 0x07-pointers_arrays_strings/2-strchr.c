#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int j = 0;
	int k;

	while (s[j] != c)
	{
		j++;
	}
	if (*s != '\0')
	{
		for (k = 0; k < j; k++)
		{
			s++;
		}
	}
	else
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			s++;
		}
	}
	return (s);
}
