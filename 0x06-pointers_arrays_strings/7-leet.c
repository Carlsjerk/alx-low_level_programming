#include "main.h"

/**
 * leet - encodes a string inyo 1337
 * @str: input string
 * Return: the pointer to dest
 */

char *leet(char *str)
{
	int count = 0, i;
	int lwr[] = {9,7, 101, 111, 116, 100};
	int upr[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == lwr[i] || *(str + count) == upr[i])
			{
				*(str + count) = num[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
