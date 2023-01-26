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
 * add_node - adds a node at the beginning of the list
 * @head: the address of the head
 * @str: the string to be displayed
 * Return: the address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a, *b;

	b = *head;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	a->str = strdup(str);
	a->len = _strlen(str);
	a->next = b;
	*head = a;
	return (a);
}












