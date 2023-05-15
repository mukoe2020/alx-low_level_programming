#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Entry point
 * Description - 'a function that creates an array of chars'
 * @size: size of the array
 * @c: char type
 * Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int number;
	char *ptArray;

	if (size == 0)
	{
		return (0);
	}

	ptArray = malloc(sizeof(char) * size);

	if (ptArray == 0)
	{
		return (0);
	}

	for (number = 0; number < size; number++)
	{
		ptArray[number] = c;
	}

	ptArray[number] = '\0';

	return (ptArray);

}
