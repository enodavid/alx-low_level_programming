#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int numb1, numb2;

	for (numb1 = 48; numb1 <= 56; numb1++)
	{
		for (numb2 = 49; numb2 <= 57; numb2++)
		{
			if (numb2 > numb1)
			{
				putchar(numb1);
				putchar(numb2);

					if (numb1 != 56 || numb2 != 57)
					{

						putchar(',');
						putchar(' ');
					}
			}
		}
	}

	putchar('\n');

	return (0);
}
