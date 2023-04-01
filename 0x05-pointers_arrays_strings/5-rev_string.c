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
	int tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		tmp = s[i - 1 - j];
		s[i - 1 - j] = s[j];
		s[j] = tmp;
	}
}
