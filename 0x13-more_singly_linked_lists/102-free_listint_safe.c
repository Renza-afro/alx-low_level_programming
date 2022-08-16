#include "lists.h"

/**
* free_listint_safe-> free a listint_t
* @h:...
* Return: size of the list
*/
size_t free_listint_safe(listint_t **h)
{
size_t x = 0, y;
listint_t *temp, *chck, *copy = *h;

while (*h)
{
x++;
temp = *h;
*h = (*h)->next;
free(temp);
chck = copy;
y = 0;
while (y < x)
{
if (*h == chck)
{
*h = NULL;
return (x);
}
chck = chck->next;
y++;
}
}
return (x);
}
