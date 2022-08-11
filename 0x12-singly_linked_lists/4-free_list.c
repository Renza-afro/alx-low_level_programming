#include "lists.h"
#include <stdlib.h>
/**
* free_list-> free the list
* @head: ..
* Return: no
*/

void free_list(list_t *head)
{
list_t *temp;
if (head)
{
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
}
