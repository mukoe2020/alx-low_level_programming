#include "main.h"

/**
  * print_rev - Entry point
  * Description - 'function printing a string in reverse'
  * @s: string to be reversed
  * Return: 0 (success)
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
