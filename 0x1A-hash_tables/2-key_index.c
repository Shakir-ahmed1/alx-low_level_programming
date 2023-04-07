#include "hash_tables.h"
/**
 * key_index - converts key to index
 * @key: the key
 * @size: the size of the table
 * Return: The index for the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
