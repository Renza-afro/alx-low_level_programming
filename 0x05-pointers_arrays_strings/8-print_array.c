#include "main.h"
#include <stdio.h>

/**
* print_array-> n elements of array
* @a: ponter
* @n: number of elements
* Return: no
*/

void print_array(int *a, int n)
{

short c = 0;

while (n-- > 0)
{
printf("%d", a[c++]);
if (n != 0)
printf(", ");
}

printf("\n");
}
