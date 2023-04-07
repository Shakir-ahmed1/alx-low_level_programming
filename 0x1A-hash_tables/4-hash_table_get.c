#include "hash_tables.h"
/**
 * hash_table_get - gets a value with a given key
 * @ht: the table
 * @key: the key
 * Return: the value or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
