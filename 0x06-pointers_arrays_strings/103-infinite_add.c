#include "main.h"

/**
 * infinite_add - Function adds two 'integer strings'
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: result
 * @size_r: size of array r
 * Return: the summed string in r. If r is too small, return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int t = 0, u = 0, v, w = 0, x, y, z = 0;

	while (n1[t] != '\0')
		t++;
	while (n2[u] != '\0')
		u++;
	if (t > u)
		w = t;
	else
		w = u;
	if (w + 1 > size_r)
		return (0);
	r[w] = '\0';
	for (v = w - 1 ; v >= 0 ; v--)
	{
		t--;
		u--;
		if (t >= 0)
			x = n1[t] - '0';
		else
			x = 0;
		if (u >= 0)
			y = n2[u] - '0';
		else
			y = 0;
		r[v] = (x + y + z) % 10 + '0';
		z = (x + y + z) / 10;
	}
	if (z == 1)
	{
		r[w + 1] = '\0';
		if (w + 2 > size_r)
			return (0);
		while (w-- >= 0)
			r[w + 1] = r[w];
		r[0] = z + '0';
	}
	return (r);
}
