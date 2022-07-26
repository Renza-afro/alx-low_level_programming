#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* create_array-> create an array
* @size: array size
* @c: array character
* Return: null if size is 0
*/

char *create_array(unsigned int size, char c)
{
unsigned int x;
char *s;

if (size == 0)
return (NULL);
s = (char *)malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (x = 0; x < size; x++)
s[x] = c;
return (s);
}
