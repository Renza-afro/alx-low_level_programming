#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_all-> print anything
* @format: list of argument types
* Return: no
*/

void print_all(const char * const format, ...)
{
va_list vari_list;
char *string;
int x = 0, y;

while (format && format[x])
{
va_start(vari_list, format);
while (format[x])
{
y = 1;
switch (format[x++])
{
case 'c':
printf("%c", va_arg(vari_list, int));
break;
case 'i':
printf("%d", va_arg(vari_list, int));
break;
case 'f':
printf("%f", va_arg(vari_list, double));
break;
case 's':
string = va_arg(vari_list, char*);
if (string)
{
printf("%s", string);
break;
}
printf("(nil)");
break;
default:
y = 0;
break;
}
if (format[x] && y)
printf(", ");
}
va_end(vari_list);
}
printf("\n");
}
