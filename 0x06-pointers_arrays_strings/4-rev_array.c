#include "main.h"

/**
 * reverse_array - This function reverses an array of integers
 * @a: set of integers
 * @n: number of integers to reverse
 * return: void
 */

void reverse_array(int *a, int n)

{
	int tmp;
	int *new = a;

	while (&a[n--] > new)
	{
		tmp = *new;
		*new = a[n];
		a[n] = tmp;
		new++;
	}
}
