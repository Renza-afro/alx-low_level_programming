#include "main.h"

/**
* print_times_table-> print table
* @n: input
* Return: void
*/

void print_times_table(int n)
{

int r;
if (n <= 15 && n > 0)
{
int i;
for (i = 0; i <= n; i++)
{
int j;
for (j = 0; j <= n; j++)
{
r = i * j;
if (j == 0)
{
_putchar('0' + r);
}
else if (r >= 10)
{
_putchar(' ');
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
else if (r >= 100)
{
_putchar(' ');
_putchar('0' + (r / 100));
_putchar('0' + ((r / 10) % 10));
_putchar('0' + (r % 10));
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}
if (j != n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

