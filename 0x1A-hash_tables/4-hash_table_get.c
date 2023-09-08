#include "hash_tables.h"

/**
* hash_table_get - a function that retrieves value of a key
* @ht: the hash table
* @key: the key whose value is to be retrieved
* Return: NULL if key cannot be found, or the value if successful
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int idx;

	if (ht == NULL || key == NULL  || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	hash = ht->array[idx];
	while (hash && strcmp(hash->key, key) != 0)
		hash = hash->next;

	return ((hash == NULL) ? NULL : hash->value);

}
