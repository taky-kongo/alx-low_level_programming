#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: gfrgfg
 * @accept: fdgdg
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int m;
	int k;

	m = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' || s[i] != accept[j])
		{
			if (accept[j] == s[i])
			{
				m = i;
				break;
			}
			j++;
		}
		if (m != 0)
			break;
		i++;
	}
	if (m == 0)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			s++;
		}
	}
	else
	{
		for (k = 0; k <= m; k++)
		{
			s++;
		}
	}
	return (s);
}
