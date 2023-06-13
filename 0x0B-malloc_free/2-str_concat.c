#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: a pointer to a space containing s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, size = 0;
	int k = 0, g = 0, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	size = i + j;
	new_str = malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);
	while (k != i)
	{
		new_str[k] = s1[k];
		k++;
	}
	l = i;
	while (l != size)
	{
		new_str[l] = s2[g];
		l++;
		g++;
	}
	new_str[size] = '\0';

	return (new_str);
}
