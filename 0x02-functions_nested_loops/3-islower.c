#include "main.h"

/**
* _islower-> checks for lowercase character
* Prototype: int _islower(int c)
* @c: character in ASCII code
* Return: 1 if c is lowercase. 0 for the rest
*/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
