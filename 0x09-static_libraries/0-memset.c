#include "main.h"

/**
 * _memset - function that fills memory
 * @n: function parameter
 * @s: first value
 * @b: second value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
