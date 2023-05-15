#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string containing the concatenated arguments,
 * or NULL if the function fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, h = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (h < ac)
	{
		b = 0;
		while (av[h][b] != '\0')
		{
			count++;
			b++;
		}
		h++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < ac; h++)
	{
		for (b = 0; av[h][b] != '\0'; b++)
		{
			str[c] = av[h][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
