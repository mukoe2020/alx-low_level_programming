#include <stdio.h>
/**
 *main -Entry point
 *Description: prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
	{
	if (i < n)
	{
		putchar((i / 10) + 48);
		putchar((i % 10) + 48);
		putchar(' ');
		putchar((n / 10) + 48);
		putchar((n % 10) + 48);
	if (i != 98 || n != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
