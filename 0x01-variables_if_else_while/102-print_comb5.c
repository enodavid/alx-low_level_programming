#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

int main(void)
{
	int numb1, numb2, numb3, numb4, sumLeft, sumRight;

	for (numb1 = 48; numb1 <= 57; numb1++)
	{
		for (numb2 = 48; numb2 <= 56; numb2++)
		{
			for (numb3 = 48; numb3 <= 57; numb3++)
			{
				for (numb4 = 49; numb4 <= 57; numb4++)
				{

					sumLeft = numb1 + numb2;
					sumRight = numb3 + numb4;

					if (sumRight > sumLeft)
					{
						putchar(numb1);
						putchar(numb2);
						putchar(' ');
						putchar(numb3);
						putchar(numb4);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
