#include "main.h"

/**
* print_line-> draws a straight line in terminal
* use only _putchar to print
* @n: size
* Return: no
*/

void print_line(int n)
{

while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
