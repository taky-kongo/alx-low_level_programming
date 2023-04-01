#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @srt: The string to be encoded
 *
 * Return: srt The string to be encoded
 */
char *rot13(char *srt)
{
	char a_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a_ouput[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; srt[i] != '\0'; i++)
	{
		for (j = 0; a_input[j] != '\0'; j++)
		{
			if (srt[i] == a_input[j])
			{
				srt[i] = a_ouput[j];
			}
		}
	}
	srt[i] = '\0';
	return (srt);
}
