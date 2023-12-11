#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int h;

	if (array == NULL)
		return (-1);

	for (h = 0; h < (int)size; h++)
	{
		printf("Value checked array[%u] = [%d]\n",h, array[h]);
		if (value == array[h])
			return (h);
	}
	return (-1);
}
