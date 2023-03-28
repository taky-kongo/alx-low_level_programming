#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a string to enter
 *
 * Return: res the length of a string
 */
int _strlen(char *s)
{
	int res;
	int j = 0;

	while ((*(s + j)) != '\0')
		j++;
	res = j;
	return (res);
}
