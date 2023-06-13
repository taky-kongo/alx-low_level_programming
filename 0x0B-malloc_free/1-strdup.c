#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 *
 * @str: the string given as a parameter.
 *
 * Return: NULL if str = NULL or  returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ptr_str;
	int i = 0;

	while (str[i] != '\0')
		i++;
	ptr_str = malloc(sizeof(char) * i);
	if (ptr_str == NULL || str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		ptr_str[i] = str[i];
		i++;
	}
	return (ptr_str);
}