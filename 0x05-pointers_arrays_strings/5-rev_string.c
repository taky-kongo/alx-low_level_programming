#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: the string to enter
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = 0; j < i; j++)
	{
		*s = *(s + j);
		s--;
	}
}
