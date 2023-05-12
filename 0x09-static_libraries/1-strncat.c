#include "main.h"

/**
  * *_strncat - Entry point
  * Description - function concantenating two strings with n as parameter
  * @src: char string type
  * @dest: char string type destination
  * @n: maximum number of bytes to be used
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int y;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++, i++)
	{
		dest[i] = src[y];
	}
	dest[i] = '\0';
	return (dest);
}
