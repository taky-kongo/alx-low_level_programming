#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: the first sting to concatenate
 * @s2: the second sting to concatenate
 *
 * Return: a pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i1 = 0;
	int i2 = 0;
	int istr = 0;
	int j;
	int k = 0;

	while (s1[i1] != '\0')
	{
		i1++;
	}
	while (s2[i2] != '\0')
	{
		i2++;
	}
	istr = i1 + i2;
	istr++;
	str = malloc(sizeof(char) * istr);
	for (j = 0; j < i1; j++)
	{
		str[j] = s1[j];
	}
	for (j = i1; j < istr; j++, k++)
	{
		str[j] = s2[k];
	}
	str[istr] = '\0';
	return (str);
	free(str);
}
