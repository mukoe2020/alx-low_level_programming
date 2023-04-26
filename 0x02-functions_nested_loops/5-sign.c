#include "main.h"

/**
 * print sign -Prints the sign of a number
 * Description: 'checking the sign of a random number n'
 * @n: number's of signs to be checked
 *
 * Return: 1 if n is greater than 0, 0 if an is 0, -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
