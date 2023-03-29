#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string.
 *
 * @dest: The string that receives
 * @src: The string to add
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k, l;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	j++;
	l = i + j;
	for (k = i; k < l; k++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + k) = '\0';
	return (dest);
}
