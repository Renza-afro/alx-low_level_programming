#include "main.h"
#include <stdio.h>

/**
* reverse_array-> reverses the content of an array
* @a: array of integers
* @n: number of elements
* Return: nothing
*/

void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;

for (i = 1; i < n; i++)
{
p++;
}

for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
