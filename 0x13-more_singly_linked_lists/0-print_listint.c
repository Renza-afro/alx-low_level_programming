#include "lists.h"

/**
* print_listint-> prints all elements of listint_t
* @h: head
* Return: nodes
*/
size_t print_listint(const listint_t *h)
{
unsigned int x = 0;
const listint_t *temp_h = h;
while (temp_h)
{
printf("%d\n", temp_h->n);
temp_h = temp_h->next;
x++;
}
return (x);
}
