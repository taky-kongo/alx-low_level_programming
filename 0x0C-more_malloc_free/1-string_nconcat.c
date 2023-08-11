#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of s2 to print
 *
 * Return: a newly allocated space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i1 = 0, i2 = 0, i_str = 0;
	unsigned int i, j, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	if (n >= i2)
	{
		n = i2;
	}
	i_str = i1 + n;
	str = malloc(sizeof(char) * i_str + 1);
	for (i = 0; i < i1; i++)
		str[i] = s1[i];
	for (j = i1; j < i_str; j++, l++)
	{
		str[j] = s2[l];
	}
	str[i_str] = '\0';

	return (str);
}
