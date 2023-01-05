#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: alphabet  to check
 * Return: 1 if c is alphabet else 0
 */

int _isalpha(int c)
{
	char upr, lwr;

	for (lwr = 'a'; lwr <= 'z'; lwr++)
	{
		for (upr = 'A'; upr <= 'Z'; upr++)
		{
			if (c == upr || c == lwr)
				return (1);
		}
	}
	return (0);
}
