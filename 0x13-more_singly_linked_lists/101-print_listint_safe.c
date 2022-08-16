#include "lists.h"

/**
* print_listint_safe-> prints a listint_t
* @head: ...
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
size_t x = 0, y;
const listint_t *temp_h = head, *chck_next;
while (temp_h)
{
printf("[%p] %d\n", (void *)temp_h, temp_h->n);
x++;
temp_h = temp_h->next;
chck_next = head;
y = 0;
while (y < x)
{
if (temp_h == chck_next)
{
printf("-> [%p] %d\n", (void *)temp_h, temp_h->n);
return (x);
}
chck_next = chck_next->next;
y++;
}
}
return (x);
}
