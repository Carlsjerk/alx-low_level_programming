#include "main.h"

/**
 * _strncpy - function that copies n number of bytes from the src
 * string eo the dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be appended from src yo dest
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = size[index];
	}
	for (; index < n; index++)
		dest]index] = '\0';

	return (dest);
}
