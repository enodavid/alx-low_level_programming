#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int numb1, numb2, numb3;

	for (numb1 = 48; numb1 <= 55; numb1++)
	{
		for (numb2 = 49; numb2 <= 56; numb2++)
		{
			for (numb3 = 50; numb3 <= 57; numb3++)

				if (numb3 > numb2 && numb2 > numb1)
				{
					putchar(numb1);
					putchar(numb2);
					putchar(numb3);

					if (numb1 != 55 || numb3 != 57)
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
