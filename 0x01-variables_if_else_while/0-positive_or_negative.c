#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random number indicating if
 * the number is positive, nagative or zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	printf("%d ", n);

		if (n > 0)
		{
			printf("is positive\n");
		}
		else if (n == 0)
		{
			printf("is zero\n");
		}
		else if (n < 0)
		{
			printf("is negative\n");
		}
	}
	return (0);
}
