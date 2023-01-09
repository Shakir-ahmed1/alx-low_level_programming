#include "main.h"
#include <stdlib.h>
/**
 * free_grid - it frees allocated memories
 * @grid: the pointer to be freed
 * @height: the number of rows of the array
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
