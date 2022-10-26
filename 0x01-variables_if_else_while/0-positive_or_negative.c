#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 * Return: 0 if successful, 1 if there is an error
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	switch (n > 0)
	{
		case 1:
		printf("%d is positive\n", n);
		break;
	}
	switch (n == 0)
	{
		case 1:
		printf("%d is zero\n", n);
		break;
	}
	switch (n < 0)
	{
		case 1:
		printf("%d is negative\n", n);
		break;
	}

	return (0);
}
