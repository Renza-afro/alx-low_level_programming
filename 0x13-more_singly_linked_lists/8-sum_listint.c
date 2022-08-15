#include "lists.h"

/**
* sum_listint->retuens sum of all data (n)
* @head: ...
* Return: 0 if lists empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n
head = head->next
}
return (sum);
}
