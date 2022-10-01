#include "lists.h"
/**
* add_dnodeint-> adds new node at beginning
* @head: head
* @n: int for new node
* Return: NULL if fail. otherwise address node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
