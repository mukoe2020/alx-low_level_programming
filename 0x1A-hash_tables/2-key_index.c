#include "hash_tables.h"

/**
* key_index -  a function that gives you the index of a key
*              using the djb2 algorithm.
* @key: the key to retrieve its index
* @size: the size of the array in the has table
* Return: the index of the given key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
