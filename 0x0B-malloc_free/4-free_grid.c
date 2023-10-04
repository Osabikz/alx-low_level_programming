#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that free a two dimensional grid
 * @grid: first integer
 * @height: second integer
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
