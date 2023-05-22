#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point
 * Description - 'function creating a struct new dog'
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;
	int length1, length2, h, j;

	length1 = 0, length2 = 0;
	newD = malloc(sizeof(struct dog));

	if (newD == NULL)
		return (NULL);

	while (name[length1++])
		;
	while (owner[length2++])
		;

	newD->name = malloc(sizeof(newD->name) * length1);

	if (newD->name == NULL)
	{
		free(newD);
		return (NULL);
	}

	for (h = 0; h < length1; h++)
		newD->name[h] = name[h];

	newD->age = age;


	newD->owner = malloc(sizeof(newD->owner) * length2);

	if (newD->owner == NULL)
	{
		free(newD->name);
		free(newD);
		return (NULL);
	}
	for (j = 0; j < length2; j++)
		newD->owner[j] = owner[j];

	return (newD);
}
