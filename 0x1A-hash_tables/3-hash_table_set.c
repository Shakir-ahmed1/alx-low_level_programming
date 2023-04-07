#include "hash_tables.h"
/**
 * hash_table_set - assignes a new element to the table
 * @ht: the hash table
 * @key: the key
 * @value: the value to be stored
 * Return: 1 if success 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new;

	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(key) + 1);
	if (new->key == NULL || new->value == NULL)
		return (0);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	index = key_index((const unsigned char *) key, ht->size);
	ht->array[index] = new;
	return (1);
}
