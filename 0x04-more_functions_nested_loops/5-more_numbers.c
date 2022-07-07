#include "main.h"

/**
* more_numbers-> print 10 times the numbersbfro 0 to 14, new line
* use _putchar three times
* Return: 0
*/

void more_numbers(void)
{

char x, y, z;
int l;

for (l = 0; l <= 9; l++)
{
z = '9';
for (x = '0'; x <= '1'; x++)
{
for (y = '0'; y <= z; y++)
{
if (x > '0')
_putchar(x);
_putchar(y);
			}
z = '4';
}
_putchar('\n');
}
}
