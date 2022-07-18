#include "main.h"

/**
* _strchr-> locates a character in a string
* @s: string
* @c: character
* Return: string. Null if character in not found
*/

char *_strchr(char *s, char c)
{
int x = 0, y;
while (s[x])
x++;
for (y = 0; y < x; y++)
{
if (c == s[y])
s += y;
return (s);
}
return ('\0');
}
