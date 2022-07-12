#include <string.h>

/**
* puts_half-> prints half string, new line
* @str: string
*/

void puts_half(char *str)
{

int a, b, c;
a = strlen(str);
if (a % 2 == 1)
b = a / 2 + 1;
else
b = a / 2;
for (c = b; c < a; c++)
_putchar(str[c]);
_putchar('\n');
}
