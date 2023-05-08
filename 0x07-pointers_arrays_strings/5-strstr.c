#include "main.h"
/**
  * *_strstr - Entry point
  * Description - 'a function that locates a substring'
  * @haystack: string to be used
  * @needle: string to be located
  * Return: a pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, h;

	for (i = 0; haystack[i]; i++)
	{
		for (h = 0; needle[h]; h++)
		{
			if (haystack[i + h] != needle[h])
			{
				break;
			}
		}
		if (!needle[h])
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
