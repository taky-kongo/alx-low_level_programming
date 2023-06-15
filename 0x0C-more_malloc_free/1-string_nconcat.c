#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2
 *
 * Return: a pointer containing s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i1 = 0, i2 = 0, j = 0;
	unsigned int i, size;

	while (s1[i1] != '\0')
		i1++;
	while (s1[i2] != '\0')
		i2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > i2)
		n = i2;
	size = i1 + n + 1;
	new_str = malloc(sizeof(char) * size);

	for (i = 0; i < i1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = i1; i < size; i++, j++)
	{
		new_str[i] = s2[j];
	}
	new_str[size] = '\0';

	return (new_str);
}
