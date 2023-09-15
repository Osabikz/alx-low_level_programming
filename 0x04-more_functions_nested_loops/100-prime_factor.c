#include <stdio.h>

/**
 * main - print the largest prime number
 * number 612852475143
 * Reture: 0
 */
int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divisor = 3 ; divisor < (prime / 2) ; divisor += 2)
		{
			if ((prime % d) == 0)
				prime /= divisor;
		}
	}

	printf("%1d\n", prime);

	return (0);
}
