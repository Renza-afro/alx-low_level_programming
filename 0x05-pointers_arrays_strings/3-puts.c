#include "main.h"

/**
* _puts-> print a string, new line
* @str: param to _puts method
* Return: no
*/

void _puts(char *str)
{

for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar(*str);

}
