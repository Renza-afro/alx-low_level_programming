#include "lists.h"

/**
* pop_listint-> deletes head node of listint_t
* @head: ...
* Return: 0 if list empty
*/
int pop_listint(listint_t **head)
{
listint_t *del_head = *head;
int x;
if (del_head)
{
x = del_head->n;
*head = del_head->next;
free(del_head);
}
else
x = 0
return (x);
}
