#include "main.h"

/**
  * _strcmp - Entry point
  * Description - 'a function comapring two strings'
  * @str1: first string to be used
  * @str2: second string to be used
  * Return: value less than 0 means str 1 < str2, equal to 0 means str1 = str2
  * and value < 0 means str1 > str2
  */

int _strcmp(char *str1, char *str2)
{
	int length, result_value;

	length = 0;

	while (str1[length] == str2[length] && str1[length] != '\0')
	{
		length++;
	}
	result_value = str1[length] - str2[length];
	return (result_value);
}
