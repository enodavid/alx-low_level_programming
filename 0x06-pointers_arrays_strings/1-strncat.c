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
	char *new = dest;

	while (*new != 0)
		new++;
	while (n-- > 0)
		*new++ = *src++;
	*new = 0;

	return (dest);
}
