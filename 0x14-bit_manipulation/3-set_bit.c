#include "main.h"

/**
 * set_bit - Entry point
 * Description - 'sets a bit at a given index to 1'
 * @n: pointer to the  bit
 * @index: given index to set to 1
 * Return: 1 if it worked, and -1 if an error occurs'
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /*if index is greater than maximum index for 64-bit*/
		return (-1);

	*n ^= (1 << index);

	return (1);
}
