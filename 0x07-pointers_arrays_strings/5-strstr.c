#include "main.h"

/**
* _strstr-> locates a substring
* @haystack: string
* @needle: substring
* Return: string to the begining of substring. Null if substring not found
*/

char *_strstr(char *haystack, char *needle)
{
int x = 0, y = 0;
while (haystack[x])
{
while (needle[y])
{
if (haystack[x + y] != needle[y])
{
break;
}
y++;
}
if (needle[y] == '\0')
{
return (haystack + x);
}
x++
}
return ('\0');
}
