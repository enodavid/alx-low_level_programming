#include "main.h"

/**
 * cap_string - This function capitalizes words in a string
 * @a: character string to capitalize
 * Return: string
 */

char *cap_string(char *a)

{
	int new = 1;
	char *buf = a;

	while (*buf != 0)
	{
		if (new == 1)
		{
			new = 0;
			if (*buf < 'z' && *buf > 'a')
				*buf -= 32;
		}
		if (*buf == ' ' || *buf == '\t' || *buf == '\n' || *buf == ','
		    || *buf == ';' || *buf == '.' || *buf == '!' || *buf == '"'
		    || *buf == '(' || *buf == ')' || *buf == '{' || *buf == '}')
			new = 1;
		buf++;
	}
	return (a);
}
