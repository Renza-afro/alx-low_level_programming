#include <stdio.h>

/**
* main->  prints all possible combinations of single-digit numbers
* separated by ,, followed by a space
* in ascending order
* code in main
* use putchar four times
* no char datatype
* Return: always 0
*/

int main(void)
{

int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
