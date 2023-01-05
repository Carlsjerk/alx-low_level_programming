#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabets x10  in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
