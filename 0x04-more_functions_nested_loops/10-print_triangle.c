#include "main.h"

/**
* print_triangle - prints a triangle
* @size: an integer params
* Return: void
*/

void print_triangle(int size)
{
int x;
int y;

if (size <= 0)
{
_putchar('\n');
}

else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if (y >= size - x - 1)
{
_putchar('#');
}

else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
