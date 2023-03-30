#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 *
 * @dest: The string that receives
 * @src: the string to add
 * @n: the number of src bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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
	if (j >= n)
	{
		for (k = 0; k < n; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	else
	{
		for (k = 0; k < j; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
