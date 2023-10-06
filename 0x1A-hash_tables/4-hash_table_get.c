#include "hash_tables.h"

/**
 * hash_table_get - searches the value of key at hash_table_t
 *
 * @ht: The table
 * @key: The key
 *
 * Return: returns value of key, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || ht->size == 0 || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);

	if (node != NULL)
	{
		if (node->value == NULL)
			return (NULL);
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
