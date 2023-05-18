#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description - 'a function that creates an array of integers'
 * @min : elements in array
 * @max : number of bytes
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *array, h = 0, i = min;

	if (min > max)
		return (0);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == 0)
		return (0);

	while (h <= max - min)
		array[h++] = i++;
return (array);
}
