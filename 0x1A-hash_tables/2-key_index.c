#include "hash_tables.h"
/**
 * key_index - Write a function that return
 * index of a key
 * @key: string
 * @size: size of the hash table
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
