#include "main.h"

/**
* _strspn-> gets the length of prefix substring
* @s: string
* @accept: accepted string
* Return: numbers of bytes in the similar method
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0, y, z = 0;
while (accept[x])
{
y = 0;
while (s[y] != 32)
{
if (accept[x] == s[y])
{
z++;
}
y++;
}
x++;
}
return (z);
}
