#include "Main.h"
#include <string.h>

/**
* _strlen-> returns string length
* @s: input char
* Return: returns length of the string
*/

int _strlen(char *s)
{

int l = 0;

while (*s != '\0')
{
s++;
l++;
}
return (l);
}
