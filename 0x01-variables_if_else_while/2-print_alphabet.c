#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	char smallAlphabets;

	for (smallAlphabets = 'a'; smallAlphabets <= 'z'; smallAlphabets++)

	putchar(smallAlphabets);
	putchar('\n');

	return (0);
}
