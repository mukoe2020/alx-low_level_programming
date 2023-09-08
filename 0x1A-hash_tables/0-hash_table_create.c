#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
*
* Return: NULL if an error occurs, otherwise a pointer to hash table
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int h;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		return (NULL);
	}

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < size; h++)
		hash->array[h] = NULL;

	return (hash);
}
