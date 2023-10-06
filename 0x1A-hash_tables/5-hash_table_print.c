#include "hash_tables.h"

/**
 * hash_table_print - prints the hash_table_t
 *
 * @ht: The table
 *
 * Return: no return value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
