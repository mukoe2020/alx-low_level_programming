#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Entry point
  * Description - 'a function that prints the sum of the two diagonals
  * of a square matrix of integers'
  * @a: matrix of integers
  * @size: size of matrix
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int h;

	int sum1 = 0;
	int sum2 = 0;

	for (h = 0; h < size; h++)
	{
		sum1 += a[h];
		a += size;
	}

	a -= size;

	for (h = 0; h < size; h++)
	{
		sum2 += a[h];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
