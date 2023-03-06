#include <main.h>
#include <unistd.>

/**
 * _putchar - writes the character to c stdout
 * @c: The charactr to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and eerno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
