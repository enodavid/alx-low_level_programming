#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: first string for comparison
 * @s2: second string for comparison
 * Return: 1 if string1 is greater, 0 if both are same, -1 if different
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;

	while (s1[y] != '\0' && s2[y] != '\0')
	{
		if (s1[y] != s2[y])
		{
			return (s1[y] - s2[y]);
		}
		y++;
	}
	return (0);
}
