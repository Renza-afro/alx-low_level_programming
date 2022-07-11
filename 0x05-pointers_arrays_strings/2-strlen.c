#include "Main.h"
#include <stdio.h>

/**
* _strlen- returns string length
* @s: input char
* Return: length of string
*/

int _strlen(char *s)
{

int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
