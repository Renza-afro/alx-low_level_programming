#include "main.h"
#include <stdio.h>

/**
* _atoi-> convert a string to an integer
* @s: pointer
* Return: int
*/

int _atoi(char *s)
{


int i, j, z, x;

i = z = 0;
x = 1;
while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '-')
x *= -1;
i++;
}
j = i;
while ((s[j] >= '0') && (s[j] <= '9'))
{
z = (z * 10) + x * ((s[j]) - '0');
j++;
}
return (z);
}
