#include "main.h"

/**
  * _puts - Entry point
  * Description - 'a function printing a string, with a new line'
  * @str: string to be printed
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
