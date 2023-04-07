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
	hash_node_t *new, *temp;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (temp && strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	new->next = NULL;

	if (ht->array[index] != NULL)
	{
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	ht->array[index] = new;
	return (1);
}
