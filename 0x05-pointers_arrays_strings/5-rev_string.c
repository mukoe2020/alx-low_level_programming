 #include "main.h"

/**
  * rev_string - Entry point
  * Description - 'printing a string in reverse, but in halves'
  * @s: string to be reversed
  * Return: void
  */
 void rev_string(char *s)
{
	char x;
	int length;
	int half;
	int i;
	i = 0;
 
for (length = 0; s[length] != '\0'; length++)
{
	half = length / 2;
}
while (half--)
{
	x = s[length - i - 1];
	[length - i - 1] = s[i];
	s[i] = x;
	i++;
}

}
                          
