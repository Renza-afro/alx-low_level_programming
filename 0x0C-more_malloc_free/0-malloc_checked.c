#include "main.h"
#include <stdlib.h>

/**
* malloc_checked->allocates memory using maloloc
* @b: param
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
void *pnt;
pnt = malloc(b);
if (pnt == NULL)
exit(98);
return (pnt);
}
