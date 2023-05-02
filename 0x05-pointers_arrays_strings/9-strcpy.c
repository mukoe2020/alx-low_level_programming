#include "main.h"

/**
  * _strcpy - Entry point
  * Description - 'a function copying one pointer to another pointer'
  * @src: char type string
  * @dest: char string type
  * Return: Pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int h = 0;

	while (src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
