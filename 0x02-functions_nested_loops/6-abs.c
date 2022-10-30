#include "main.h"

/**
 * _abs - Program displays the absolute value of an integer
 * @n: Nuber to process
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int _abs(int n)

{
	if (n < 0)
		return (-n);
	else
		return (n);
}
