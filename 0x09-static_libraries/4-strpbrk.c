#include "main.h"

/**
  *_strpbrk - Entry point
  * Description -  function that searches a string for any of a set of bytes
  *@s: string to be used
  *@accept: bytes in a string
  *Return: a pointer to the byte in s that matches one of the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int h, i;
	{
		for (h = 0; s[h] != '\0'; h++)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (s[h] == accept[i])
				{
					return (&s[h]);
				}
			}
		}
	}
	return (0);
}
