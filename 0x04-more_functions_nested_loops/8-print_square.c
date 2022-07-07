#include "main.h"

/**
* print_square - prints squre
* @size: square's size
* Return: 0
*/
void print_square(int size)
{
int x, y;

if (size <= 0)
_putchar('\n');

for (y = size; y > 0; y--)
{
for (x = size; x > 0; x--)
_putchar('#');
_putchar('\n');
}
}
