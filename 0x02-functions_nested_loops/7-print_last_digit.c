#include "main.h"

/**
 * print_last_digit - Program prints the last digit of a given number
 * @n: Given number to process
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int print_last_digit(int n)

{
	int lastDigit = 0;

	if (n < 0)
		lastDigit = (n % 10) * -1;
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
