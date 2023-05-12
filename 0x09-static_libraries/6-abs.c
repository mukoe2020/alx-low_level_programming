#include "main.h"
/**
 * _abs - Computes the absolute value of an interger
 * @c: The number to be computed
 * Return: absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
