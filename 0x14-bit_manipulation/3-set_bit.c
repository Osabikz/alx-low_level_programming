#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: position to the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mark;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mark = 1;
	mark = mark << index;
	*n = ((*n) | mark);
	return (1);
}
