#include "main.h"
/**
 * print_number - Entry point
 * Description - function printing an integer
 * @n: input integer.
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, x, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	x = h;
	count = 1;

	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
