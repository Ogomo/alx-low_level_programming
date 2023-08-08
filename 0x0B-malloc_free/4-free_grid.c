#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * @grid: grid to free up
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
