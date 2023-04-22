#include <stdio.h>
/**
 * main -Entry point
 * Description: prints lowercase in reverse
 * Return: always
 */
int main(void)
{
	int i = 122;

	while (i <= 97)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
