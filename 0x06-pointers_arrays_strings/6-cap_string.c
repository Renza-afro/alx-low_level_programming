#include "main.h"

/**
* *cap_string-> capitalizes all words of a string
* @i: string
* Return: string
*/

char *cap_string(char *i)
{
int a = 0, x;
int len = 13;
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (i[a])
{
x = 0;

while (x < len)
{
if ((a == 0 || i[a - 1] == spc[i]) && (i[a] >= 97 && i[a] <= 122))
i[a] = i[a] - 32;

x++;
}
a++;
}
return (i);
}
