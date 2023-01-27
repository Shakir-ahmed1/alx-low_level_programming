#include "lists.h"
/**
 * _strlen - length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * add_node_end - it adds a new node at the end of the list
 * @head: the address of the list head
 * @str: the string to be stored
 * Return: the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);
	a->len = _strlen(str);
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next != NULL)
	{
		b = b->next;
	}
	b->next = a;
	return (a);
}
















