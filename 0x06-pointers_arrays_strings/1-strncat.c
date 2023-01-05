#include "main.h"

/**
 * _strncat - function that append n bytes of src string to the dest string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes of src string to be appended to the dest string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest. char *src, int n)
{
	int index;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[len + index] = src[index];
	}
	return (dest);
}
