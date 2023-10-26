#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer of the integer
 * @index: position to change bit to 0
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mark;

	mark = 1;
	mark = mark << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mark ^ *n;

	return (1);
}
