#include "lists.h"
/**
* get_nodeint_at_index->returns the nth node
* @head: ..
* @index: index of the node
* Return: null if does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nth_node = head;
unsigned int x = 0;

while (nth_node && x < index)
{
nth_node = nth_node->next;
x++;
}
return (nth_node);
}
