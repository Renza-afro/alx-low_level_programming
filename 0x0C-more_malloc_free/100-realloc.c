#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* _realloc-> reallocates memory using malooc, free
* @ptr: pointer
* @old_size: old integer
* @new_size: new size
* Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pnt;
unsigned int x;
if (ptr == NULL)
{
pnt = malloc(new_size);
return (pnt);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
pnt = malloc(new_size);
if (pnt == NULL)
return (NULL);
for (x = 0; x < old_size && x < new_size; x++)
pnt[x] = ((char *)ptr)[x];
free(ptr);
return (pnt);
}
