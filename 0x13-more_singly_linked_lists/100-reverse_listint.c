#include "lists.h"
/**
 * reverse_listint - it reverses the given linked list
 * @head: the address of the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *temp = NULL;
    listint_t *prev = NULL;
    listint_t *current = (*head);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head) = prev;
    return (*head);
}
