#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: table to get a value with a certain key
 * @key: key to be found in the table
 *
 * Return: returns the value of the key if found else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	const long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || ht->size == 0 || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
