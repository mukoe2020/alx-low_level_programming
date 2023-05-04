#include "main.h"

/**
  * reverse_array - Entry point
  * Description - 'a function reversing elements of an array'
  * @a: the array
  * @n: array elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
