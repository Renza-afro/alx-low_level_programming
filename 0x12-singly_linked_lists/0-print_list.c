#include "lists.h"

/**
* print_list-> prints all elements of a list_t
* @h: ..
* Return: nodes
*/

size_t print_list(const list_t *h)
{
unsigned int x = 0;
const list_t *temp_h = h;
for (; temp_h; temp_h = temp_h->next, x++)
printf("[%d] %s\n", temp_h->len, temp_h->str);
return (x);
}
