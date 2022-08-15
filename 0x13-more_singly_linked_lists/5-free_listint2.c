#include "lists.h"

/**
* free_listsint2-> frees listint list
* @head: ...
* Return: no
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head)
{
while (*head)
{
temp = *temp;
*head = temp->next;
free(temp);
}
}
}
