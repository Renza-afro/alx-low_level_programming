#include <stdio.h>

/**
* main-> prints all base 16 in lowercase, new line
* use putchar
* code in the main
* use putchar three times
* Return: always 0
*/

int main(void)
{

int hexadecimal;
for (hexadecimal = '0'; hexadecimal <= '9'; hexadecimal++)
{
putchar(hexadecimal);
}
for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
{
putchar(hexadecimal);
}
putchar('\n');

return (0);
}
