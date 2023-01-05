#include "main.h"

/**
 * _isupper - checks for a uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase character else 0
 */

int _isupper(int c)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == b)
			{
				return (1);
			}
			return (0);
		}
	}
}
