#include "main.h"

/**
 * print_alphabet_x10 - Prints all alphabets in lowercase 10 times
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

void print_alphabet_x10(void)
{
	char reps = 0;
	char smallAlphabets;

	while (reps <= 9)
	{
		for (smallAlphabets = 'a'; smallAlphabets <= 'z'; smallAlphabets++)

		{
			_putchar(smallAlphabets);
		}

		_putchar('\n');

		reps++;
	}

}
