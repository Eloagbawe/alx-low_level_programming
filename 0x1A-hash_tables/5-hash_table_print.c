#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			if (comma)
				printf(", ");
			while (node != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				node = node->next;
				if (node != NULL)
				printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
