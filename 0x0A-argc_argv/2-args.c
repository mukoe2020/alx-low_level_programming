#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * Description - 'Printing all arguments one at a time'
  * @argc: number of arguments
  * @argv: array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
