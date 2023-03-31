#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @srt : The string to enter
 *
 * Return: srt The new string value after change.
 */
char *string_toupper(char *srt)
{
	char alpha_up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j, k;

	while (srt[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		for (k = 0; k < 25; k++)
		{
			if (srt[j] == alpha_low[k])
			{
				srt[j] = alpha_up[k];
			}
		}
	}
	return (srt);
}
