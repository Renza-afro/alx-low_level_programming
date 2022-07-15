#include "main.h"
#include <stdio.h>
/**
* *rot13-> encodes a string using rot13
* @x: paramm
* Return: string
*/

char *rot13(char *x)
{

int a = 0;

while (x[a])
{
while ((x[a] >= 'a' && x[a] <= 'z') || (x[a] >= 'A' && x[a] <= 'Z'))
{
if ((x[a] > 'm' && x[a] <= 'z') || (x[a] > 'M' && x[a] <= 'Z'))
{
x[a] -= 13;
break;
}

x[a] += 13;
break;
}
a++;
}
return (x);
}
