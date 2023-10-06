#include "hash_tables.h"

/**
 * make_new_node - creates a new item into the hash_table_t
 *
 * @key: The key
 * @value: The value
 *
 * Return: returns newly created node, else return NULL
 */
hash_node_t *make_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - sets a new item onto the hash_table
 *
 * @ht: The table
 * @key: The key
 * @value: The value
 *
 * Return: return 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *curr;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(curr->value);
			curr->value = new_value;
			return (1);
		}
		curr = curr->next;
	}
	new_node = make_new_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
