#include "main.h"

/**
 * _islower - Program checks for lowercase character
 * @c: Character to process
 * Return: 0 - If uppercase; 1 - If lowercase,
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
