#include <stdio.h>
/**
 *main -Entry point
 *Description: prints numbers in lower cases
 *Return: always 0
 */
int main(void)
{
	int i;
	int n;

	for  (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
