#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int lettersReverse;

	for (lettersReverse = 'z'; lettersReverse >= 'a'; lettersReverse--)
		putchar(lettersReverse);
		putchar('\n');
	return (0);
}
