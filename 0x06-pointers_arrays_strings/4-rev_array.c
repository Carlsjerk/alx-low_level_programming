#include "main.h"

/**
 * revers_array -function that reverses the contentnof an array of integers
 * @n: number of elements os the arrray
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
