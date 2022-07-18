#include "main.h"

/**
* _strstr-> locates a substring
* @haystack: string
* @needle: substring
* Return: string to the begining of substring. Null if substring not found
*/

char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;

while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}

b++;
}

if (needle[b] == '\0')
{
return (haystack + a);
}

a++;
}

return ('\0');
}
