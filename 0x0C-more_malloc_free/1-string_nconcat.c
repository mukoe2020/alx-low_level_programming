#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * Description - 'a function that concatenates two strings with'
 * @s1: char string type
 * @s2: char string type
 * @n: number of bytes
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i;
	char *ptr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}

	if (n >= length2)
	n = length2;
	ptr = (char *)malloc((length1 + n + 1) * sizeof(char));

	if (ptr == 0)
	return (0);

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (length1 + n); i++)
	{
		ptr[i] = s2[i - length1];
	}
	ptr[i] = '\0';
return (ptr);
}
