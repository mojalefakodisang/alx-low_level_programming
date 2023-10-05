#include "hash_tables.h"

/**
 * hash_table_create - create a hash table from hash_table_t structure
 *
 * @size: size of the table
 *
 * Return: returns the address to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t *));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t **));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
