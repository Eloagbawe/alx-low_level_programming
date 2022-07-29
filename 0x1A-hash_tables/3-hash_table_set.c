#include "hash_tables.h"

/**
 * ht_pair - pairs a value and a key
 * @key: key
 * @value: value
 * Return: a new hash_node_t if successful and NULL otherwise
*/
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
	{
		return (NULL);
	}
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
	{
		return (NULL);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	new_node->next = NULL;
	return (new_node);

}

/**
 * hash_table_set - adds an entry into the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *entry;

	if (ht == NULL || value == NULL ||
		key == NULL || *key == '\n' || *value == '\n')
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
	{
		new_node = ht_pair(key, value);
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		return (1);
	}
	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			strcpy(entry->value, value);
			return (1);
		}
		entry = entry->next;
	}
	new_node = ht_pair(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
