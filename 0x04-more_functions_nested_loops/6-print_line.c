#include "main.h"

/**
 * print_line - function that draw straight line
 * @n: function parameter
 *
 */

void print_line(int n)
{
	int k;

	for (k = 0 ; k < n ; k++)
		if (n > 0)
			_putchar('_');
	_putchar('\n');
}
