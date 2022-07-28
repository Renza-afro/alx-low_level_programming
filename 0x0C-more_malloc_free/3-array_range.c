#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* array_range-> creates an array of integers
* @min: min value
* @max: max value
* Return: null if min > max
*/

int *array_range(int min, int max)
{
int *pnt, x;
if (min > max)
return (NULL);
if (max - min == 0)
{
pnt = malloc(sizeof(int));
pnt[0] = min;
}
else
{
pnt = malloc(sizeof(int) * (max - min + 1));
if (pnt == NULL)
return (NULL);
for (x = 0; min <= max; x++, min++)
pnt[x] = min;
}
return (pnt);
}
