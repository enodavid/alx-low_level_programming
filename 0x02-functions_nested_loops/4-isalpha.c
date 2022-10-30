#include "main.h"

/**
 * _isalpha - Program checks if character is an alphabet
 * @c: Character to process
 * Return: 0 - If character is not an alphabet; 1 - If character is an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
