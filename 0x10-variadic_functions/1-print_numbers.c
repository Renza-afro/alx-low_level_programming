#include "variadic_functions.h"

/**
* print_numbers-> print numbers, new line
* @separator: .....
* @n: integers
* Return: no
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list vari_list;
unsigned int x;

va_start(vari_list, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(vari_list, int));
if (separator && x < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(vari_list);
}
