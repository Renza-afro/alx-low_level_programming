#include "main.h"

/**
* rev_string-> reverses a string
* @s: string
* Return: no
*/

void rev_string(char *s)
{

char *p = s;
char x[1000];
short c = 0;

while (*s != '\0')
{
x[c] = *s;
s++;
c++;
}
c = 0;

while (s > p)
{
s--;
*s = x[c];
c++;
}
}
