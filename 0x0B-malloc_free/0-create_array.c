#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it
 * @size: first value
 * @c: second value
 * Return: NULL or str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
