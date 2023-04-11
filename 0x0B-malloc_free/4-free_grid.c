#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory allocated by alloc_grid
 * @grid: pointer to the 2D array to be deallocated
 * @height: the number of rows in the grid
 * Return: Nothing
 *i
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
