#include "main.h"

/**
* puts2-> every other character of string
* @str: string
* Return: no
*/

void puts2(char *str)
{

int x, y = 0;

while (str[x] != '\0')
{
x++;
}

while (y < x)
{
_putchar(str[y]);
y = y + 2;
}
_putchar('\n');
}
