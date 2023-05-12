#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description - 'Program that adds positive integers'
  * @argc: number of arguments
  * @argv: number of array of arguments passed
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i, j;
	int total = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		total += atoi(argv[i]);

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", total);

	return (0);

}
