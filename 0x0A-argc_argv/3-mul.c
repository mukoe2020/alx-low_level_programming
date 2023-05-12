#include "main.h"
#include <stdio.h>

/**
  * _atoi - Entry point
  * Description - 'function converting a string to an integer'
  * @s: string to be converted
  * Return: converted integer value
  */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
  * main - Entry point
  * Description - 'Program multiplying 2 numbers'
  * @argc: number of arguments
  * @argv: array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int result, numberOne, numberTwo;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numberOne = _atoi(argv[1]);
	numberTwo = _atoi(argv[2]);
	result = numberOne * numberTwo;

	printf("%d\n", result);
	return (0);
}

