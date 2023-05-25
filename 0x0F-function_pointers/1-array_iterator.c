#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Entry point
  * Description - 'function that executes a function given as
  * a parameter on each element of an array'
  * @array: array to be iterated over
  * @size: size of the array
  * @action: function pointer
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
