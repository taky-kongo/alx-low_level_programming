#include "main.h"

/**
 * _strdup - a new string which is a duplicate of the string str.
 * @str: to str to enter
 *
 * Return: a pointer to the duplicated string.
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	new_str = malloc(sizeof(char) * i);
	if (new_str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		new_str[j] = str[j];
	new_str[i] = '\0';
	return (new_str);
}
