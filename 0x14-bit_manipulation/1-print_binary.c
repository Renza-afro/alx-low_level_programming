#include "main.h"

/**
* print_binary-> prints binary
* @n: ...
* Return: no
*/

void print_binary(unsigned long int n)
{
unsigned long int binary = 0;
int bnr = 0;

while ((binary >>= 1) > 0)
bnr++;
while (bnr >= 0)
_putchar((n >> bnr--) & 1 ? '1' : '0');

}
