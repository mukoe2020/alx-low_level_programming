#include "main.h"

/**
 * clear_bit - Entry point
 * Description - 'sets value of a given bit to 0'
 * @n: the bit
 * @index: index of the bit to set to 0
 * Return: 1 if it worked, -1 if an error ocurred'
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
