#include <stdio.h>
/**
 *main -Entry point
 *Description: alphabet in lowercase
 *Return: always 0
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar(\n);
	return (0);
}
