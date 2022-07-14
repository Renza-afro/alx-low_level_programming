#include "main.h"

/**
* *cap_string-> capitalizes all words of a string
* @i: string
* Return: string
*/

char *cap_string(char *x)
{
int i = 0;
int z = 1;
char *word = x;
char *spesh = " \t\n;,.!?"(){}";

while (*x)
{
if (z)
{
if (*x >= 'a' && *x <= 'z')
*x -= 32;
z = 0;
}
for (i = 0; spesh[i]; i++)
{
if (*x == spesh[i])
z = 1;
}
x++;
}
return (word);
}
