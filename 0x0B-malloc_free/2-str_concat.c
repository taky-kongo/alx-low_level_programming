#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, size_str = 0;
	int k, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	size_str = i + j;
	str = malloc(sizeof(char) * size_str);
	if (str == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
	{
		str[k] = s1[k];
	}
	for (k = i; k < size_str; k++, l++)
	{
		str[k] = s2[l];
	}
	str[size_str] = '\0';
	return (str);
}
