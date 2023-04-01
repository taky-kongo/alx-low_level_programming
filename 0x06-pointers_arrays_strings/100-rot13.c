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
	char alpha_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha_output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; srt[i] != '\0'; i++)
	{
		for (j = 0; alpha_input[j] != '\0'; j++)
		{
			if (srt[i] == alpha_input[j])
			{
				srt[i] = alpha_output[j];
			}
		}
	}
	return (srt);
}
