#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int h;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		if (ht->array[h] != NULL)
		{
			if (flag == 1)
				printf(", ");

			hash_node = ht->array[h];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
