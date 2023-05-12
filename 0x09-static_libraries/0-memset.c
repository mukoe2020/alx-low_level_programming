#include "main.h"

/**
 *_memset - Entry point
 * Description: a function that fills memory with a constant byte
 *@n: - number of bytes
 *@b: - constant bytes
 *@s: - memory area
 *Return:  a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
