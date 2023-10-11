#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: function parameter
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (1);
	}
	return (-1);
}
