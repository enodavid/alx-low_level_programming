#include "main.h"

/**
 * rot13 - Function encodes chars into rot13
 * @a: string to encode
 * Return: encoded string
 */

char *rot13(char *a)

{
	char *buf = a;
	int i;
	char trans[2][54] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
				   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (*buf != 0)
	{
		if ((*buf >= 'a' && *buf <= 'z') || (*buf >= 'A' && *buf <= 'Z'))
		{
			i = 0;
			while (*buf != trans[0][i])
				i++;
			*buf = trans[1][i];
		}
		buf++;
	}
	return (a);
}
