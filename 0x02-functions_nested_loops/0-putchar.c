#include "main.h"

/**
 * main - program that prints
 * _putchar
 *
 * Return: 0
 */

int main(void)
{
	char *wh = "_putchar";

	while (*wh)
	{
		_putchar(*wh);
		wh++;
	}
	_putchar('\n');
	return (0);
}
