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

	printf("Last digit of %d is %d and is ", n, n % 10);

	switch (n % 10 > 5)
	{
		case 1:
		printf("greater than 5\n");
		break;
	}

	switch (n % 10 == 0)
	{
		case 1:
		printf("0\n");
		break;
	}

	switch (n % 10 < 6 && n % 10 != 0)
	{
		case 1:
		printf("less than 6 and not 0\n");
		break;
	}

	return (0);
}
