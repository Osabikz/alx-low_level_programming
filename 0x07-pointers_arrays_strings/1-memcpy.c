#include "main.h"

/**
 * _memcpy - functions that copies memory areas
 * @dest: destination value
 * @src: source value
 * @n: function parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
