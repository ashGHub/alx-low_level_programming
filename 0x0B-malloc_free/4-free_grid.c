#include <stdlib.h>

/**
 * free_grid - free each rows
 * @grid: 2D array pointer
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
