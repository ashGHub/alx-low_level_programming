#include <stdlib.h>

/**
 * init_to_zero - initialize array to zero
 * @a: array to initialize
 * @size: size of the array
 *
 * Return: Nothing
 */
void init_to_zero(int *a, int size)
{
	int i;

	for (i = 0; i < size; i++)
		*(a + i) = 0;
}

/**
 * clean - free each rows
 * @grid: 2D array pointer
 * @height: number of rows
 *
 * Return: Nothing
 */
void clean(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **r;

	if (width <= 0 || height <= 0)
		return (NULL);
	r = malloc(sizeof(int *) * height);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		int *rh = malloc(sizeof(int) * width);

		if (rh == NULL)
		{
			clean(r, i);
			return (NULL);
		}
		init_to_zero(rh, width);
		*(r + i) = rh;
	}
	return (r);
}
