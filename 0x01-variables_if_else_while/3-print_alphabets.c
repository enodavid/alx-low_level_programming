#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int smallAlphabets;
	int largeAlphabets;

	for (smallAlphabets = 97; smallAlphabets <= 122; smallAlphabets++)
		putchar(smallAlphabets);
	for (largeAlphabets = 65; largeAlphabets <= 90; largeAlphabets++)
		putchar(largeAlphabets);
		putchar('\n');

	return (0);
}
