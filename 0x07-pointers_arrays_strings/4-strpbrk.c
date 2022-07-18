#include "main.h"

/**
* _strpbrk-> searches for any of set bytes
* @s: string
* @accept: accept bytes
* Return: byte in s that matches in accept. Null if no bytes found
*/

char *_strpbrk(char *s, char *accept)
{
int x = 0, y;
while (s[x])
{
y = 0;
while (accept[y])
{
if (s[x] == accept[y])
{
s += x;
return (s);
}
y++;
}
x++;
}
return ('\0');
}
