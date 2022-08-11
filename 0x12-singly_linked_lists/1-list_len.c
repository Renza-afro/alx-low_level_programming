#include "lists.h"

/**
* list_len-> returns elements in linked list
* @h: ..
* Return: elemets
*/

size_t list_len(const list_t *h)
{
unsigned int x = 0;
const list_t *temp_h = h;
for (; temp_h; temp_h = temp_h->next)
x++;
return (x);
}
