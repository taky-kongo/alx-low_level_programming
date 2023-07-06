#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len_str, count_str = 0;
	unsigned int indice, d, i, sum = 0;

	len_str = strlen(b);
	count_str = 0;
	while (b[count_str] != '\0')
	{
		if ((b[count_str] != '0' && b[count_str] != '1') || b == NULL)
			return (0);
		if (b[count_str] != '0')
		{
			indice = (len_str - (count_str + 1));
			if (indice == 0)
			{
				d = 1;
			}
			else
			{
				d = 1;
				for (i = 1; i <= indice; i++)
				{
					d = d * 2;
				}
			}
			sum = sum + d;
		}
		count_str++;
	}
	return (sum);
}
