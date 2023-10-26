#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index to be gotten
 * @n: the integer to be checked
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
