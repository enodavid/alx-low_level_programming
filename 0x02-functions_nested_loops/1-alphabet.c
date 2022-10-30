#include "main.h"

/**
 * print_alphabet - Prints all alphabets in lowercase followed by a new line
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

void print_alphabet(void)
{
	char smallAlphabets;

	for (smallAlphabets = 'a'; smallAlphabets <= 'z'; smallAlphabets++)

	_putchar(smallAlphabets);
	_putchar('\n');
}
