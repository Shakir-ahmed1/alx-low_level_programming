#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *new;
        unsigned int count = 0;

        if (h == NULL || *h == NULL)
                return (0);
        while (*h != NULL)
        {
                new = (*h)->next;
                (*h)->next = NULL;
                free(*h);
                *h = new;
                count++;
        }
        if (count != 0)
                count = count - 2;
        h = NULL;
        return (count);
}
