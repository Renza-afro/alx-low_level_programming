#include "main.h"
/**
* print_alphabet -> prints the alphabet, in lowercase, followed by a new line
* Prototype: void print_alphabet(void)
* use _putchar twice
* Return: always 0
*/

void print_alphabet(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}

_putchar('\n');

}
