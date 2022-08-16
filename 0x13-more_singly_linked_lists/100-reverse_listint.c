#include "lists.h"

/**
* reverse_listint-> reverses a listint_t
* @head: ...
* Return: ...
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *p_node, *pre_node = NULL;
while (head && *head)
{
p_node = (*head)->next;
(*head)->next = pre_node;
pre_node = *head;
*head = p_node;
}
*head = p_node;
return (*head);
}
