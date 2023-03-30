#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: The string that receives
 * @src: The string to copy
 * @n: the number of src bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (n <= i)
	{
		for (k = 0; k < n; k++)
		{
			dest[k] = src[k];
		}
	}
	else
	{
		for (k = 0; k < i; k++)
		{
			dest[k] = src[k];
		}
	}
	
	return (dest);
}
