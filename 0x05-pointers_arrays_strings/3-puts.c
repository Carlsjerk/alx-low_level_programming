#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line to stdout
 *@str: the atring to printed
 */

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
