#include "main.h"
/**
 * free_grid - a functin that fres grid of 2d array.
 * @grid: a parametre.
 * @height: param.
 * Return : return 0 if right.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
