#include "main.h"

/**
 * leet - Function encodes chars into 1337
 * @a: string to convert
 * Return: string
 */

char *leet(char *a)

{
	char *buf = a;
	int y = 0;
	char translation[][10] = { { 'a', 'A', 't', 'T', 'o', 'O', 'e', 'E', 'l', 'L'}
				  , { '4', '4', '7', '7', '0', '0', '3', '3', '1', '1'} };

	while (*buf != 0)
	{
		if (*buf == 'a' || *buf == 'A' || *buf == 'e' || *buf == 'E'
		    || *buf == 'o' || *buf == 'O' || *buf == 't' || *buf == 'T'
		    || *buf == 'l' || *buf == 'L')
		{
			y = 0;
			while (translation[0][y] != *buf)
				y++;
			*buf = translation[1][y];
		}
		buf++;
	}
	return (a);
}
