#include "main.h"

/**
 * reverse_array - fuction that reverses the content of an array of integers
 * @a: value 1
 * @n: value 2
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0 ; i < n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}

}
