#include "main.h"
/**
 *Print_alphabet - prints the alphabet in lower case followed by a new line
 *Return: Always
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
