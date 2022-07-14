#include "main.h"
#include <string.h>

/**
* *_strncat-> concatenates two strings
* @dest: param 1
* @src: param 2
* @n: param 3
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{

char *result = dest;

while (*dest)
dest++;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (result);
}
