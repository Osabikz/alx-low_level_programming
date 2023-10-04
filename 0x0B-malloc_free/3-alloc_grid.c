#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns the pointer to a two array of integer
 * @width: value in width
 * @height: value in height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		a[n] = malloc(sizeof(int) * width);

		if (a[n] == NULL)
		{
			for (; n >= 0; n--)
				free(a[n]);

			free(a);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			a[n][m] = 0;
	}
	return (a);
}
