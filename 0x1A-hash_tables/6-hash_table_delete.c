#include "hash_tables.h"

/**
 * free_items - frees items of array of hash_table_t
 *
 * @node: Node to be freed
 *
 * Return: no return value
 */
void free_items(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - deletes the hash_table_t
 *
 * @ht: The table
 *
 * Return: no return value
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			free_items(ht->array[i]);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
