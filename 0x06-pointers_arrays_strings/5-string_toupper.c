#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: parameter function
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\n')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 35;
		i++;
	}
	return (n);
}
