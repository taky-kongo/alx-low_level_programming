#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 0, if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	if (s1[i] > s2[j])
		return (s1[i] - s2[j]);
	else if (s1[i] < s2[j])
		return (s1[i] - s2[j]);
	else
		return (0);
}
