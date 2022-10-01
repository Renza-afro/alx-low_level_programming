#include "lists.h"
/**
* add_dnodeint_end-> add node at end of list
* @head: head
* @n: int for node
* Return: NULL if fail. otherwise address new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last_node;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (Null);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new;
new->prev = last_node;
return (new);
}
