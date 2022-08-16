#include "lists.h"

/**
* insert_nodeint_at_index-> inserts new node at given position
* @head: ...
* @idx: ..
* @n: ..
* Return: address of new node. 0 failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *n_node, *temp_node = *head;
unsigned int x = 0;

while (temp_node && x < idx - 1)
{
temp_node = temp_node->next;
x++;
}
if (temp_node || (x == idx - 1 || idx == 0))
{
n_node = malloc(sizeof(listint_t));
if (n_node)
{
n_node->n = n;
if (idx == 0)
{
n_node->next = *head;
*head = n_node;
}
else
{
n_node->next = temp_node->next;
temp_node->next = n_node;
}
return (n_node);
}
}
return (NULL);
}
