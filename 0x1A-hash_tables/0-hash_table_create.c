#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) + size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return(ht);
}
