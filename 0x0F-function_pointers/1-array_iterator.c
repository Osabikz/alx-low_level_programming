#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: first parameters
 * @size: second parameter
 * @action: function parameter
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for  (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
