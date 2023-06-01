#include <stdio.h>

void get(void) __attribute__((constructor));

/**
  * get - prints a sentence before
  *         main function is executed
  */

void get(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
