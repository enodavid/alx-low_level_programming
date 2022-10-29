#include "main.h"

/**
 * string_toupper - This function converts string characters to uppercase
 * @a: The string to convert
 * Return: character array
 */

char *string_toupper(char *a)

{
	char *new = a;

	while (*new != '\0')
	{
		if (*new >= 'a' && *new <= 'z')
			*new -= 32;
		new++;
	}
	return (a);
}
