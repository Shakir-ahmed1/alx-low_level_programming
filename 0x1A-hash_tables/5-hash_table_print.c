#include "hash_tables.h"
/**
 * hash_table_print - prints all elements of the hash_table
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	long unsigned int i, signal = 1;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		else
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (signal)
				{
					printf("'%s': '%s'",temp->key,temp->value);
					signal = 0;
				}
				else
				{
					printf(",'%s': '%s'",temp->key,temp->value);
				}
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
