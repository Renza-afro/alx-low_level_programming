#include "main.h"

/**
* puts2-> every other character of string
* @str: string
*/

void puts2(char *str)
{

int x, y;
x = strlen(str);
for (y = 0; y < x; y += 2)
_putchar(str[y]);
_putchar('\n');
}
