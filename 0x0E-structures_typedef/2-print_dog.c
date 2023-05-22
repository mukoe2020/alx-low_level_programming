#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * Description - 'function printing a struct'
 * @d: pointer containing struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}

	if ((*d).name == 0)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	if ((*d).age < 0)
		printf("Age: (nil)\n");

	else
		printf("Age: %f\n", d->age);

	if ((*d).owner == 0)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
