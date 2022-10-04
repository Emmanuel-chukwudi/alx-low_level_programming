#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid...
 *
 * @grid: pointer to array
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		free(grid);

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
