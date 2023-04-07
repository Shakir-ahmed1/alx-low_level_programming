#include "hash_tables.h"
/**
 * hash_table_delete - deletes all elements of the hash_table
 * @ht: the table
 */
void hash_table_delete(const hash_table_t *ht)
{
	hash_node_t *temp, *holder;
	unsigned long int i;

	if (ht == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array[i]);
			continue;
		}
		else
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				holder = temp;
				temp = temp->next;
				free(holder->key);
				free(holder->value);
				free(holder);
			}
		}
	}
	free((void *)ht->array);
	free((void *)ht);
}
