#include "lists.h"

/**
* listint_len-> returns the numeber og element in listint_t
* @h: head
* Return: nodes
*/
size_t listint_len(const listint_t *h)
{
unsigned int x = 0;
const listint_t *temp_h h;

for (; temp_h; temp_h = temp_h.next)
x++;
return (x);
}
