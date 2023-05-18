#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * Description - 'reallocates a memory block using malloc and free'
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *dupli, *relloc;
	unsigned int h;

	if (ptr != NULL)
	dupli = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (h = 0; h < (old_size || h < new_size); h++)
	{
		*(relloc + h) = dupli[h];
	}
	free(ptr);
return (relloc);
}
