#include "main.h"

/**
* times_table->prints the 9 times table, starting with 0
* Prototype: void times_table(void)
* Return: nothing
*/

void times_table(void)
{

int x, r;
for (x = 0; x <= 9; x++)
{
int j;
for (j = 0; j <= 9; j++)
{
r = x * j;
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
else
{
_putchar(' ');
_putchar(' ');
_putchar('0' + (r % 10));
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
