#include <stdio.h>

/**
* main->  prints all possible combinations of two two-digit numbers
* range fro 0 to 99
* use putchar eight times
* no char datatype
* Return: always 0
*/

int main(void)
{
int x, y, z, v;
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
{
for (z = 48; z <= 57; z++)
{
for (v = 48; v <= 57; v++)
{
if (((z + v) > (x + y) && z >= x) || x < z)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(v);
if (x + y + z + v == 227 && x == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');

return (0);
}

