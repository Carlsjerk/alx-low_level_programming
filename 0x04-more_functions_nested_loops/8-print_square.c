#include "main.h"

/**
 * print_square - prints asquare followed by a new line
 * @size: yhe size of the square
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
