#include "function_pointers.h"

/**
  * int_index - Entry point
  * Description - 'a function that searches for an integer'
  * @array: array of elements to be searched
  * @size: size of the array
  * @cmp: function pointer
  * Return:index of the first element for which
  * the cmp function does not return 0, or -1 if no match is found
  * or size is negative
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
