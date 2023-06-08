#include "main.h"
#include <stdio.h>

/**
 * print_binary - Entry point
 * Description - 'prints out binary equivalent of a number'
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
