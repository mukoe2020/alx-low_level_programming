#include "main.h"

/**
 * get_endianness - Entry point
 * Description - 'checks if a machine is a little or a big endian'
 * Return: 0 if it is big, 1 if it is little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &h;

	return (*c);
}
