#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			if (k >= 10)
			{
				_putchar((k / 10) + '0');

			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
