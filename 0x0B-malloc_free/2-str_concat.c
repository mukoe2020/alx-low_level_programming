#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description - 'a function concantenating two strings, using malloc'
 * @s1: char string type
 * @s2: char string type
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, h, i;
	char *ptString;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (h = 0; s1[len1] != '\0'; h++)
	{
		len1++;
	}

	for (h = 0; s2[len2] != '\0'; h++)
	{
		len2++;
	}
	ptString = malloc((len1 + len2 + 1) * sizeof(char));

	if (ptString == 0)
	{
		return (0);
	}

	for (h = 0; h < len1; h++)
	{
		ptString[h] =  s1[h];
	}
	for (i = 0; i < len2; i++)
	{
		ptString[h + i] = s2[i];
	}
	return (ptString);
}
