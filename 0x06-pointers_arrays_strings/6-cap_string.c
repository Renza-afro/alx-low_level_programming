#include "main.h"
#include <stdio.h>
/**
* *cap_string-> capitalizes all words of a string
* @i: string
* Return: string
*/

char *cap_string(char *i)
{
int a = 0, x;
int cspc = 13;
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (i[a])
{
x = 0;

while (x < cspc)
{
if ((a == 0 || i[a - 1] == spc[i]) && (i[a] >= 97 && i[a] <= 122))
i[a] -= 32;

x++;
}
a++;
}
return (i);
}
