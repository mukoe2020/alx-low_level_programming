#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Description - 'a function that returns a pointer to a newly allocated mem'
 * @str : char string type
 * Return: pointer to char
*/

char *_strdup(char *str)
{
	char *ptString;
	int length;  /*iterator for length of str*/
	int i;  /*iterator for new_s*/

	if (str == 0)
	{
		return (0);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	ptString = malloc(sizeof(char) * (length + 1));

	if (ptString == 0)
	{
		return (0);
	}

	for (i = 0; i < length; i++)
	{
		ptString[i] = str[i];
	}

	ptString[i] = '\0';

	return (ptString);
}

