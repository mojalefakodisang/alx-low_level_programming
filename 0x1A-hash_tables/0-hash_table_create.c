#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of the hash table
 *
 * Return: returns the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t **));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
