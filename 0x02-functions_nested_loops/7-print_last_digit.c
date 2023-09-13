#include "main.h"

/**
 * print_last_digit - prints last digits
 * @b: function parameter
 * Return: always j
 */

int print_last_digit(int b)
{
	int j;

	j = b % 10;
	if (b < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
