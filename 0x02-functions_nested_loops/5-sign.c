#include "main.h"

/**
 * print_sign - Program displays the sign of a number
 * @n: Number to process
 * Return: (0) - If number is zero;
 * (1) - If number > 0;
 * (-1) - If number < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
			else
			_putchar('-');
			return (-1);
}
