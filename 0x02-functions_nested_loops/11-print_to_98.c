#include"main.h"

/**
* print_to_98->prints all natural numbers from n to 98, new line
* @n: input
* Return: void
*/

void print_to_98(int n)
{

if (n == 98)
{
prntf("%d\n", n);
}
else if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
else if (n > 98)
{
int i;
for (i = n; i > 97; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
}

