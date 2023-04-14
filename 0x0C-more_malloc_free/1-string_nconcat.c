#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2
 *
 * Return: NULL, if the function fails
 * a pointer to a new space that contains s1 and the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, l = 0, istr = 0;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	istr = i + n;
	str = malloc((sizeof(char) * istr) + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (k = i; k < istr; k++, l++)
	{
		str[k] = s2[l];
	}
	str[istr] = '\0';
	return (str);
	free(str);
}
