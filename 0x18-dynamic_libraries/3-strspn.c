#include "main.h"
/**
  *_strspn - Entry point
  * Description -  a function that gets the length of a prefix substring.
  * @s: string to be used
  * @accept: string length to be found
  * Return: the number of bytes in the initial segment of s
  * which consits bytes only from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, h;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (s[i] == accept[h])
			{
				break;
			}
		}
		if (accept[h] == '\0')
		{
			break;
		}
	}
	return (i);
}
