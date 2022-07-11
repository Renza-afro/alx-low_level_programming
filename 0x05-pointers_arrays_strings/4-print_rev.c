#include "main.h"

/**
* print_rev-> print a string in reverse, new line
* @s: string in reverse
* Return: no
*/

void print_rev(char *s)
{
int count = 0;

while (*s != '\0')
{
s++;
count++;
}

while (count > 0)
{
s--;
_putchar(*s);
count--;
}
_putchar('\n');
}
