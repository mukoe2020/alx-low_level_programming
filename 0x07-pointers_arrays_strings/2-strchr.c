#include "main.h"
/**
  * *_strchr - Entry point
  * Description - 'a function that locates a character in a string'
  * @s: string to be used
  * @c: string within s to be located
  * Return: a pointer to the first occurrence of the character c in s
  * Or 0 if the character is not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
