#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Program displays all natural numbers from n to 98
 * @n: Starting Number
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}

	printf("%d\n", n);
}
