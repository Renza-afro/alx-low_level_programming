#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
/**
* _calloc-> allocates memory for an array
* @nmemb: an array
* @size: size
* Return: null if nmemb, size is 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
char *pnt;

if (nmemb == 0 || size == 0)
return (NULL);
if (size >= UNIT_MAX / nmemb || >= UNIT_MAX / size)
return (NULL);
pnt = malloc(size * nmemb);
if (pnt == NULL)
return (NULL);
for (x = 0; x < nmemb * size; x++)
pnt[x] = 0;
return ((void *)pnt);
}
