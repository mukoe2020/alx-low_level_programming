#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 * Description -' a function allocating memory with malloc'
 * @b : unsigned integer
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
