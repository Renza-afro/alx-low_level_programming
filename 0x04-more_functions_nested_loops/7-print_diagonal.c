#include "main.h"

/**
* print_diagonal-> diagonal line
* @n: int parameter size
* Return: void
*/

void print_diagonal(int n)
{


int x;
int m = n;

if (n <= 0)
_putchar('\n');

for (; n > 0; n--)
{
for (x = 0; x < m - n; x++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
