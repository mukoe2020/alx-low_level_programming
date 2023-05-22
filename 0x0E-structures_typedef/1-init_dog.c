#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * Description - 'function that initializes a variable for struct'
 * @d : pointer acessing struct dog
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: 0 (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)  /*if pointer d is not empty*/
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
