#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: to the buffer pointed to by dest
 * @src: the string pointed to by src
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
