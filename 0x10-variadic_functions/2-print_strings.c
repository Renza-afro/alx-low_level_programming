#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings-> prints strings, new line
* @separator: string to be separated
* @n: inumberb of strings
* Return: no
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vari_list;
unsigned int x;
char *string;

va_start(vari_list, n);
for (x = 0; x < n; x++)
{
string = va_arg(vari_list, char*);
printf("%s", string ? string : "(nil)");
if (separator && x < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(vari_list);
}
