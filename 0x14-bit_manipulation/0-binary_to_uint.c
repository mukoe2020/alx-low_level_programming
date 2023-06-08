#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description - 'function that converts a binary number to an unsigned int'
 * @b: the string containing binary numbers
 * Return: converted number
 */


unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int decimal_v = 0;

	if (!b) /*if b is null, return 0 */
		return (0);
	for (h = 0; b[h]; b++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		decimal_v = 2 * decimal_v + (b[h] - '0');
	}

	return (decimal_v);
}
