#include "lists.h"

/**
* free_dlistint - Frees a linked dlistint_t list.
* @head: The head
* Return: no
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
