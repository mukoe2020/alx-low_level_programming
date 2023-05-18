#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * Description - 'a function allocating memory using malloc'
 * @nmemb: array of elements
 * @size: number of bytes of each element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;
	/* If nmemb or size is 0, then _calloc returns NULL */

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	/**
	 *The _calloc function allocates memory for an array
	 * of nmemb elements of size bytes
	 */
	array = malloc(nmemb * size);

	/* If malloc fails, then _calloc returns NULL*/

	if (array == 0)
	{
		return (0);
	}

    /*The memory is set to zero with a for loop*/

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}
