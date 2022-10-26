#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int num;

	int hex;

	for (num = 49; num <= 57; num++)
		putchar(num);

	for (hex = 97; hex <= 102; hex++)
		putchar(hex);

	putchar('\n');

	return (0);
}
