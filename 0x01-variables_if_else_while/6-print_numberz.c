#include <stdio.h>

/**
* main-> prints all single of base 10 from 0, new line
* not allowed to use char datatype
* use putchar
* code in the main
* Return: always 0
*/

int main(void)
{

int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');

return (0);
}
