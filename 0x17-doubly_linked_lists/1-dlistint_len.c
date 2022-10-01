#include "lists.h"
/**
* dlistint_len->counts elements in dlistint_t
* @h: head
* Return: elemets in lists
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
