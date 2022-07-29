#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a hash table key
 * @ht: hash table
 * @key: key
 * Return: Value if present, null otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if ((node != NULL) && (strcmp(node->key, key) == 0))
	{
		return (node->value);
	}
	return (NULL);
}
