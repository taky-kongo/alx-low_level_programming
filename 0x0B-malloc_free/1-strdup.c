#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 *
 * @str: the string given as a parameter.
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
	free(s);
}
