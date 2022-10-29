#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)

{
	char *new = dest;

	while (*new != 0)
		new++;
	while (*src != 0)
		*new++ = *src++;
	*new = 0;

	return (dest);
}
