#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: The number of arguments
 * @av: The arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char **str;
	int i;

	str = (char **)malloc(sizeof(char *) * ac);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str[i] = (char *)malloc(sizeof(char) * *av[i]);
		if (str[i] == NULL)
			return (NULL);
		str[i] = av[i];
	}
	return (*str);
}
