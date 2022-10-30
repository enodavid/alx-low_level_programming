 #include "main.h"

/**
 * times_table - Program displays the 9 times table
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */


void times_table(void)

{
	int numbRow, numbCol, product, tens, ones;

	for (numbRow = 0; numbRow <= 9; numbRow++)
	{
		for (numbCol = 0; numbCol <= 9; numbCol++)
		{
			product = numbRow * numbCol;
			tens = product / 10;
			ones = product % 10;

			if (numbCol == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
