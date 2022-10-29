#include "main.h"

/**
 * _strncat - appends first n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = 0, z = 0;

	while (dest[y] != '\0')
		y++;

	while (src[z] != '\0' && z < n)
	{
		dest[y] = src[z];
		y++;
		z++;
	}

	dest[y] = '\0';

	return (dest);
}
