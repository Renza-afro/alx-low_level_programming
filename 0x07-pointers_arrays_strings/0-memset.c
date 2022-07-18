#include "main.h"

/**
* _memset-> fills memory with a constant byte
* @s: param string
* @b: param char
* @n: param int
* Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;
return (s);
}
