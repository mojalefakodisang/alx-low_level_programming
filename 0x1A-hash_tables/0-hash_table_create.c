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

	table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = NULL;

	return (table);
}
