#include "main.h"

/**
 * largest_number - This returns the largest of 3 given numbers
 * @a: First number
 * @b: Second number
 * @c: Third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)

{

int z;

if (a >= b && a >= c)
	z = a;

	else if (b >= a && b >= c)
		z = b;

	else
		z = c;

return (z);
}
