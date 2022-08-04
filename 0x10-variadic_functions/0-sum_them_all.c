#include "variadic_functions.h"

/**
* sum_them_all-> returns sum of all parametres
* @n: integer
* Return: 0 if n equivalant to 0
*/

int sum_them_all(const unsigned int n, ...)
{
va_list vari_list;
unsigned int x = 0;
int sum = 0;

if (n != 0)
{
va_start(vari_list, n);
while (x < n)
{
sum += va_arg(vari_list, int);
x++;
}
va_end(vari_list);
return (sum);
}
return (0);
}
