#include "main.h"

/**
 * jack_bauer - Program entry point
 * Return: 0 - If program runs successfully; 1 - If an error occurs
 */

void jack_bauer(void)
{
	int numb1, numb2, numb3, numb4;

	for (numb1 = 48; numb1 <= 49; numb1++)
	{
		for (numb2 = 48; numb2 <= 57; numb2++)
		{
			for (numb3 = 48; numb3 <= 53; numb3++)
			{
				for (numb4 = 48; numb4 <= 57; numb4++)
                {
					_putchar(numb1);
                    _putchar(numb2);
                    _putchar(':');
                    _putchar(numb3);
                    _putchar(numb4);
                    _putchar('\n');

				}
			}
		}
	}

	if (numb1 == 50)
	{
		for (numb2 = 48; numb2 <= 51; numb2++)
		{
			for (numb3 = 48; numb3 <= 53; numb3++)
			{
				for (numb4 = 48; numb4 <= 57; numb4++)
                {
					_putchar(numb1);
                    _putchar(numb2);
                    _putchar(':');
                    _putchar(numb3);
                    _putchar(numb4);
                    _putchar('\n');

				}
			}
		}
	} 
}