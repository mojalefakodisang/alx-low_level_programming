#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to be printed
 *
 * Return: No return value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	int printed = 0;
	unsigned long int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr)
			{
				if (printed == 1)
					printf(", ");
				printf("'%s': '%s'", curr->key, curr->value);
				printed = 1;
				curr = curr->next;
			}
		}
	}
	printf("}\n");
}
