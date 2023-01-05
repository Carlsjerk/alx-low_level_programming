#include "main.h"

/**
 * print_last_digit - function that printthe last digit of a number
 * @n: the input number
 * Return: the last digit, x
 */

int print_last_digit(int n)
{
	int x;

	x = (n % 10);
	if (x < 0)
		x *= -1;
	_putchar(x + 48);
	return (x);
}
