#include "lists.h"
#include <stdio.h>
#include <stdlib.>
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
temp = *head;
*head = temp->next;
free(temp);
}
}
}
