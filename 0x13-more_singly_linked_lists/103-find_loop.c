#include "lists.h"

/**
* find_listint_loop-> finds the loop
* @head:..
* Return: address of the node
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *temp = head, *chck;
if (!head)
return (NULL);

if (head == head->next)
return (head);
while (temp)
{
temp = temp->next;
chck = head;
while (temp && chck != temp)
{
if (chck == temp->next)
return (chck);
chck = chck->next;
}
}
return (temp);
}
