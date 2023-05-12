#include "main.h"

/**
 *_isalpha - Entry point
 *Description - 'checks weather c is lowercase or uppercased letter'
 *@c: The character to be checked
 *Return: 1 if a character is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
