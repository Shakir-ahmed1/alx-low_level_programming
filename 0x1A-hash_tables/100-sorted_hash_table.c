#include "hash_tables.h"
/**
 * sorted_add - it adds a new node to the linked list alpabetically
 * @sht - the sorted table
 */
void sorted_add(shash_table_t *sht, shash_node_t *new)
{
	shash_node_t *temp;

	if (sht == NULL || new == NULL)
		return;
	temp = sht->shead;
	if (temp == NULL)
	{
		temp = new;
		sht->shead = new;
		sht->stail = new;
		return;
	}
	if (temp->key[0] > new->key[0])
	{
		sht->shead = new;
		new->snext = temp;
		temp->sprev = new;
		return;
	}
	while (temp && temp->snext != NULL && temp->snext->key[0] < new->key[0])
	{
		temp = temp->snext;
	}
	new->snext = temp->snext;
	new->sprev = temp;
	temp->snext = new;
	if (temp == sht->shead)
		sht->shead = new;
	if (new->snext != NULL)
		new->snext->sprev = new;
	if (new->snext == NULL)
		sht->stail = new;
	return;
}
/**
 * shash_table_create - creates a new hash table
 * @size: the size of the array in hash table
 * Return: the pointer of the new hash table, if not return NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
        shash_table_t *new;
        unsigned long int i;

        new = malloc(sizeof(shash_table_t));
        if (!new)
                return (NULL);
        new->size = size;
        new->array = calloc(size, sizeof(shash_node_t *));
        if (new->array == NULL)
        {
                free(new);
                return (NULL);
        }
        for (i = 0; i < size; i++)
                new->array[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;
        return (new);
}
/**
 * shash_table_set - assignes a new element to the table
 * @ht: the hash table
 * @key: the key
 * @value: the value to be stored
 * Return: 1 if success 0 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        unsigned int index;
        shash_node_t *new, *temp;

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
        new = malloc(sizeof(shash_node_t));
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
	sorted_add(ht, new);
        if (ht->array[index] != NULL)
        {
                new->next = ht->array[index];
                ht->array[index] = new;
                return (1);
        }
        ht->array[index] = new;
        return (1);
}
/**
 * shash_table_get - gets a value with a given key
 * @ht: the table
 * @key: the key
 * Return: the value or NULL if the key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
        shash_node_t *temp;
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
/**
 * shash_table_print - prints all elements of the shash_table
 * @ht: the table
 */
void shash_table_print(const shash_table_t *ht)
{
        shash_node_t *temp;
        unsigned long int i, signal = 1;

        if (ht == NULL || ht->size == 0 || ht->shead == NULL)
                return;

	temp = ht->shead;
        printf("{");
        for (i = 0; temp; i++)
        {
                                if (signal)
                                {
                                        printf("'%s': '%s'", temp->key, temp->value);
                                        signal = 0;
                                }
                                else
                                {
                                        printf(", '%s': '%s'", temp->key, temp->value);
                                }
                                temp = temp->snext;
                
                
        }
        printf("}\n");
}
/**
 * shash_table_print - prints all elements of the shash_table
 * @ht: the table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
        shash_node_t *temp;
        unsigned long int i, signal = 1;

        if (ht == NULL || ht->size == 0 || ht->shead == NULL)
                return;

	temp = ht->stail;
        printf("{");
        for (i = 0; temp; i++)
        {
                                if (signal)
                                {
                                        printf("'%s': '%s'", temp->key, temp->value);
                                        signal = 0;
                                }
                                else
                                {
                                        printf(", '%s': '%s'", temp->key, temp->value);
                                }
                                temp = temp->sprev;
                
                
        }
        printf("}\n");
}

/**
 * shash_table_delete - deletes all elements of the shash_table
 * @ht: the table
 */
void shash_table_delete(shash_table_t *ht)
{
        shash_node_t *temp, *holder;
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
	ht->size = 0;
	ht->shead = NULL;
	ht->stail = NULL;
        free((void *)ht->array);
        free((void *)ht);
}

