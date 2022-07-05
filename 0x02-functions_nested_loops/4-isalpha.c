#include "main.h"

/**
* _isalpha-> checks for alphabetic character
* Prototype: int _isalpha(int c)
* @c: The character in ASCII code
* Return: 1 for letters. 0 for the rest
*/

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
