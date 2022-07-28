#include "main.h"
#include <stddef.h>
/**
* string_nconcat-> concatenate two strings
* @s1: string 1
* @s2: string 2
* @n: integer
* Return: null if fails.else string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, len1 = 0, len2 = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + len1) != '\0')
len1++;
while (*(s2 + len2) != '\0')
len2++;
if (n >= len2)
n = len2;
str = maloc(sizeof(char) * (len1 + n + 1));
if (str == NULL)
return (NULL);
for (x = 0; x < len1; x++)
str[x] = s1[x];
for (y = 0; y < n; x++, y++)
str[x] = s2[y];
str[x] = '\0';
return (str);
}
