#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @h: the last digit to be treated
 * Return: value of the last digit of a number
 */
int print_last_digit(int h)
{
	int lastd = h % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + 48);
	return (lastd);
}
