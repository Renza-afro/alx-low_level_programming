#include <stdio.h>

/**
* main-> prints all possible different combinations of two digits
* Return: always 0
*/

int main(void)
{

int combi, num;
for (combi = '0'; combi <= '9'; combi++)
{
for (num = '0'; num <= '9'; num++)
{
if (combi < num)
{
putchar(combi);
putchar(num);
if (combi != '8' || (combi == '8' && num != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
