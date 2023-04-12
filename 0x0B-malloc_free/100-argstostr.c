#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: the number of arguments
 * @av: the argument table
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char **str;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = (char **)malloc(sizeof(char *) * ac);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str[i] = malloc(sizeof(char) * *av[i]);
		str[i] = av[i];
	}
	return (*str);
	free(str);
}
