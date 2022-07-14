#include "main.h"
#include <string.h>

/**
* *_strncat-> concatenates two strings
* @dest: param 1
* @src: param 2
* @n: integer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
} 
