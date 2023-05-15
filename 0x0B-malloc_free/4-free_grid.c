#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description - 'a function that frees the memory space allocated
 * for previous program'
 * @grid : pointer to 2 dimensional array
 * @height : height of grid
 * Return: void
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
