#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * Description - 'a function that prints the sum of all its params'
 * @n: first argument
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int h;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (h = 0; h < n; h++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);

	return (sum);
}
