#include "hash_tables.h"

/**
* hash_table_set - function for updating key or value of a hash table,
* In case of collision, add the new node at the beginning of the list
*
* @ht: a pointer to the hash table
* @key: key of the hashtable, key can not be an empty string
* @value: value associated with the key, value must be duplicated,
*         value can be an empty string
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	char *val_copy;
	unsigned long int idx, h;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	/*updates in case there is already an existing array at spot for insertion*/
	for (h = idx; ht->array[h]; h++)
	{
		if (strcmp(ht->array[h]->key, key) == 0)
		{
			free(ht->array[h]->value);
			ht->array[h]->value = val_copy;
			return (1);
		}
	}
	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
	{
		free(val_copy);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}
	new_hash->value = val_copy;
	new_hash->next = ht->array[idx];
	ht->array[idx] = new_hash;

	return (1);
}
