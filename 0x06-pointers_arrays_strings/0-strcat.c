#include "main.h"

/**
  * *_strcat - Entry point
  * Description - a function concantenating two strings
  * @dest: char string type
  * @src: char string type
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int y;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (y = 0; src[y] != '\0'; y++, i++)
	{
	dest[i] = src[y];
	}
	dest[i] = '\0';
	return (dest);
}
