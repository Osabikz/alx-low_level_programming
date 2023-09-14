#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: function parameter
 */

void print_diagonal(int n)
{
	int k;
	int i;

	for (k = 0 ; k < n ; k++)
	{
		if (n > 1)
		{
			for (i = 0 ; i < k ; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
	}
}
