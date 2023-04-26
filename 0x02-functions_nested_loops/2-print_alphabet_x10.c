#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
