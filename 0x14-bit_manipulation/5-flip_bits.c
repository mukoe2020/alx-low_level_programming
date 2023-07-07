#include "main.h"

/**
 * flip_bits - Entry point
 * Description - 'function that returns the number of bits you would need to
 *                flip to get from one number to another'
 * @n: the number
 * @m: the number to flip n to
 * Return: the number of bits required to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bits = 0;
	unsigned long int currnt;
	unsigned long int exclu = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currnt = exclu >> i;
		if (currnt & 1)
			bits++;
	}

	return (bits);
}
