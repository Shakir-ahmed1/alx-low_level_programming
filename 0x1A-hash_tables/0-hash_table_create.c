#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array in hash table
 * Return: the pointer of the new hash table, if not return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new || size == 0)
		return (NULL);
	new->array = calloc(size, sizeof(hash_node_t));
	if (new->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	new->size = size;
	return (new);
}
