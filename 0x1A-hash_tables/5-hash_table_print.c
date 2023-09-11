#include "hash_tables.h"

/**
 * hash_table_print - print hash_table
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
