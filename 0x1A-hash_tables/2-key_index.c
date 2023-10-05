#include "hash_tables.h"

/**
 * key_index - index of a key in hash_table_t hash table
 *
 * @key: The key
 * @size: size of the array of the hash table
 *
 * Return: returns index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
