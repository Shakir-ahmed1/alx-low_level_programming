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
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
