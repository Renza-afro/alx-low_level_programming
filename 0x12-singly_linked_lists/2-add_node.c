#include "lists.h"
/**
* _strlen-> string length
* @s: ...
* Return: length
*/
int _strlen(const char *s)
{
unsigned int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
* add_node-> adds new node at the begining
* @head: head
* @str: string
* Return: address of new element. NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
