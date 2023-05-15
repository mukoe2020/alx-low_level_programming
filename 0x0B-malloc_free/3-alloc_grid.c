/**
 * alloc_grid - Entry point
 * @width : width of grid
 * @height : height of grid
 * Return: pointer to 2 dimensional array
*/

#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **doublep;
	int h, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	doublep = malloc(height * sizeof(int *));

	if (doublep == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		doublep[h] = malloc(width * sizeof(int));

		if (doublep[h] == NULL)
		{
			for (j = 0; j < h; j++)
			{
				free(doublep[j]);
			}
			free(doublep);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			doublep[h][j] = 0;
		}
	}
	return (doublep);
}
