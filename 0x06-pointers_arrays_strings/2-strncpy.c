#include "main.h"

/**
 * _strncpy - This function copies a string from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int y = 0;

	while (n > 0)
	{
		dest[y] = src[y];
		if (src[y] == '\0')
			break;
		n--;
		y++;
	}
	if (n > 0)
		while (n)
		{
			dest[y] = '\0';
			y++;
			n--;
		}

	return (dest);
}
