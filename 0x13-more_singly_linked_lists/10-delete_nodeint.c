#include "lists.h"

/**
* delete_nodeint_at_index-> deletes the node at index
* @head: head of the node
* @index: index of the node to be deleted
* Return: 1 seccess. -1 failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint *index_node, *temp_node = *head;
unsigned int x = 0;

if (temp_node && (index == 0))
{
*head = temp_node->next;
free(temp(temp_node);
return (1);
}
while (temp_node)
{
if (x + 1 == index)
{
index_node = node = temp_node->next;
if (index_node)
{
temp_node->next = index_node->next;
free(index_node);
return (1);
}
}
temp_node = temp_node->next;
x++;
}
return (-1);
}
